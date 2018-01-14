module array
implicit none

type square
    real :: x
end type square

type rect
    real :: y,z
end type rect

contains
function squarray(x)
    type(point) :: p, q
    real :: distance
    distance = sqrt((q%y-p%y)**2+(q%x-p%x)**2)
end function distance

function evaluate_at(line, x)
    type(LinFun) :: line
    real :: x, evaluate_at
    evaluate_at = (line%p%y-line%q%y)/(line%p%x-line%q%x)*x
end function evaluate_at

end module plane

program main
use plane
implicit none
type(point) :: p, q
type(LinFun) :: line

p%x = 3
p%y = 4
q%x = 0
q%y = 0

line%p = p
line%q = q

print *, distance(p,q)
print *, evaluate_at(line,4.)


end program main