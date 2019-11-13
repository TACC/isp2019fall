Program copyx
  implicit none
  real(8),dimension(5) :: x = [.1d0, .2d0, .3d0, .4d0, .5d0]
  integer :: idx

  x(2:5) = x(1:4) 
  print '(5(f5.3,x))',x

  ! forward loop gives the wrong result
  ! (conclusion: assignment by sections does not
  !  do a simple loop internally)
  x = [.1d0, .2d0, .3d0, .4d0, .5d0]
  do idx=2,size(x,1)
     x(idx) = x(idx-1)
  end do
  print '(5(f5.3,x))',x

  ! reverse loop gives the right result
  x = [.1d0, .2d0, .3d0, .4d0, .5d0]
  do idx=size(x,1),2,-1
     x(idx) = x(idx-1)
  end do
  print '(5(f5.3,x))',x

end Program copyx
