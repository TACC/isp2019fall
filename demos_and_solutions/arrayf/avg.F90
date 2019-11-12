Program copyx
  implicit none
  integer,parameter :: N=5
  real(8),dimension(N) :: x = [.1d0, .2d0, .3d0, .4d0, .5d0]
  real(8),dimension(N-1) :: y

  y(:) =  ( x(1:N-1) + x(2:N) ) /2
  print '(5(f5.3,x))',y

end Program copyx
