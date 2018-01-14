!Write a function that will sort randomly generated array
!from smallest to largest
!Write a test function that will take the sorted array
!and test it and return a logical

program main
implicit none
logical :: check = 1
real :: r(10)

call random_number(r)
r = r*100

print *, r
do while (check == 1) !until flag is off
    call sort(r, 10, check)
    print *, r
end do
print *, r
print *, test(r, 10) !1 if sorted, 0 otherwise

contains
!Sort subroutine:
subroutine sort(arr, n, check)
implicit none
integer :: n, i
logical :: check, incheck
real, dimension(n) :: arr
real hold

incheck = 0
do i=1,(n-1) 
    if (arr(i)>arr(i+1)) then !If array needs sorting
        hold = arr(i)         
        arr(i) = arr(i+1)
        arr(i+1) = hold
        incheck = 1
    endif
end do
check = incheck
end subroutine sort

!Test sortedness
logical function test(arr, n)
real, dimension(n) :: arr
integer :: n, i
real hold
test = 1
do i=1,(n-1)
    if (arr(i)>arr(i+1)) then
        hold = arr(i)
        arr(i) = arr(i+1)
        arr(i+1) = hold
        test = 0
    endif
end do
end function test
end program main
