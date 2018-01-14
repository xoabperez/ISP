program fizzbuzz

implicit none
integer :: num, rem5, rem3

print *, 'Give me everything in the cash register NO CHANGE (integer)'
read *, num

rem5 = num-(num/5)*5
rem3 = num-(num/3)*3

if (rem5 == 0 .and. rem3 == 0) then
    print *, 'FizzBuzz'
else if (rem5 == 0) then
    print *, 'Buzz'
else if (rem3 == 0) then
    print *, 'Fizz'
end if


end program fizzbuzz