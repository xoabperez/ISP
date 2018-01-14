program main
implicit none
integer, parameter :: n = 3
real, dimension(n,n) :: a, b, c

call random_number(a)
call random_number(b)
a = a*100
b = b*100

c = a*b

end program main