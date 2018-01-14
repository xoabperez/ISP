program collatz
!for u<1000 find values leading to longest sequence
implicit none
integer :: i, longest = 0, ind, current, length, rem

do i = 1,1000
    length = 0
    current = i
    do while (current /= 1) !loops based on parity
        rem = mod(current,2)
        if (rem == 0) then
            current = current/2
        else
            current = 3*current+1
        end if
        length = length+1
    end do
    if (length > longest) then !check if longer than previous longest
        longest = length
        ind = i
        print *, 'Longest length was ', longest, 'for number ', ind 
    end if
end do

end program collatz