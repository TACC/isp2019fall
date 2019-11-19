Program pointatarray
  implicit none
  real,dimension(10),target :: array &
 = [1.1, 2.2, 3.3, 4.4, 5.5, 9.9, 8.8, 7.7, 6.6, 0.0]
  real,pointer :: biggest_element
  print '(10f5.2)',array
  call SetPointer(array,biggest_element) 
  print *,"Biggest element is",biggest_element
  biggest_element = 0
  print '(10f5.2)',array
contains
  subroutine SetPointer(array,bigptr)
    implicit none
    real,dimension(:),target,intent(in) :: array
    real,pointer,intent(out) :: bigptr
    integer :: i
    !! shortest solution:
    bigptr => array( maxloc(array,1) )
    return
    !! more explicit solution:
    do i=1,size(array)
       if (array(i)>bigptr) then
          bigptr => array(i)
       end if
    end do
  end subroutine SetPointer
end Program pointatarray
