!Write a function that takes an integer input and returns
!a logical corresponding to whether the input was prime

function primecheck(n)
implicit none
integer :: isprime, n, root, j = 2

root = sqrt(n)

if (n == 1 .or. n == 2) then
    primecheck = 0
else
    do while (j<=root)
        if (mod(n,j) == 0) then
            primecheck = 0
        else
            primecheck = 1
        end if
    end do
end if

end function primecheck

program check
implicit none
logical :: isprime
isprime = primecheck(13)


end program check