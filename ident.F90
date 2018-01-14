!Write a subroutine or function that creates an identity matrix

program identity
implicit none
integer, dimension(3,3) :: a

a = ident(3)
print *, a

contains
function ident(n) !identity function 
implicit none
integer :: i, n
integer, dimension(n,n) :: ident

ident = 0 !set all values to zero
do i = 1,n
     ident(i,i) = 1 !Change diagonal
end do

end function ident

end program identity