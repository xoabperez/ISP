program divisors

!Read two numbers and check divisibility
implicit none
integer :: num1, num2, rem

print *, 'Give me the number you want to divide by'
read *, num1
print *, 'Give me the number you want to divide'
read *, num2

rem = num2-(num2/num1)*num1

if (rem == 0) then
    print *, num1, ' is a divisor of ', num2
else 
    print *, num1, ' is not a divisor of ', num2
end if


end program divisors