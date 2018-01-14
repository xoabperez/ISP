!Write a subroutine to swap two parameters

subroutine swap(a, b)
implicit none
integer :: a, b, s

s = a
a = b
b = s

end subroutine

program swaptest
integer :: i=2, j=3

call swap(i,j)
print *, 'i = ', i
print *, 'j = ', j

end program swaptest