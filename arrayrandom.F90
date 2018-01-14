!Write a program that creates an array of 100 random numbers
!between 0 and 100

program test_random_number
implicit none
real :: r(100)
call random_number(r)
r = r*100
print *, r
end program