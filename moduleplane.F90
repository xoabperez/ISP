!Within a module, plane, make type point(x,y) of real numbers
! and function distance for two point objects
!Add another type LinearFunction defined with 2 points
! and a function to evaluate_at

module plane
implicit none

type point !Creating point defined by x-/y-coord
    real :: x, y
end type point

type LinFun !Linear function defined by 2 points
    type(point) :: p, q
end type LinFun

contains !Functions
function distance(p, q) 
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

!Create 2 points, find distance, create line, and evaluate
p%x = 3
p%y = 4
q%x = 0
q%y = 0

line%p = p
line%q = q

print *, distance(p,q)
print *, evaluate_at(line,4.)


end program main