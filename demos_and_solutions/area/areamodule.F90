Module RecStuff
  type Point
     real :: x,y
  end type Point
  type Rectangle
     type(point) :: bottomleft,upperright
  end type Rectangle
contains
  real function area(r)
    implicit none
    type(rectangle),intent(in) :: r
    ! local variables
    real :: dx,dy
    dx = r%upperright%x - r%bottomleft%x
    dy = r%upperright%y - r%bottomleft%y
    area = dx*dy
  end function area
end Module RecStuff

