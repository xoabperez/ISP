
program primecheck
!Read an integer and determine whether it is prime
implicit none
real :: root, n, j = 2

print *, 'Give me a number to check'
read *, n
root = sqrt(n)

if (n == 1 .or. n == 2) then
    print *, 'Number is not prime'
else
    do while (j<=root)
        if (mod(n,j) == 0) then
            print *, 'Number is divisible by', j
            exit
        end if
        j = j+1
    end do
    print *, 'Number is prime'
end if

end program primecheck