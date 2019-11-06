Program AreaCompute
  use RecStuff
  implicit none

  ! declarations
  type(point) :: p1 = point(1,1), p2=point(4,5)
  type(rectangle) :: rect

  ! executable statement
  rect = rectangle(p1,p2)
  print *,"Area is",area(rect)  

end Program AreaCompute
