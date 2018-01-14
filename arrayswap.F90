!Write a function that swaps values of array at 2 locations

subroutine swap(arr, n, ind1, ind2)
implicit none
integer :: n, ind1, ind2
real, dimension(n) :: arr
real hold 

hold = arr(ind1)
arr(ind1) = arr(ind2)
arr(ind2) = hold

end subroutine swap

program main
implicit none
real :: r(10)
integer :: ind1, ind2 

call random_number(r)
r = r*100

ind1 = 1; ind2 = 5

print *, r
call swap(r, 10, ind1,ind2)
print *, r

end program main
