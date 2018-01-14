!Write 2 functions that take an array as an argument and
!find max/min and indices

real function maxf(arr, n, ind) !Find max given array and 
implicit none                   !initialized values
integer :: n, i, ind
real, dimension(n) :: arr

maxf = arr(1)
do i=2, n
    if (arr(i)>maxf) then
        maxf = arr(i)
        ind = i
    endif
enddo
end function maxf

real function minf(arr, n, ind)
implicit none
integer :: n, i, ind
real, dimension(n) :: arr

minf = 100
do i=1, n
    if (arr(i)<minf) then
        minf = arr(i)
        ind = i
    endif
enddo
end function minf

program main
implicit none
real :: r(100), maxima, maxf, minima, minf
integer :: ind = 1, ind2 = 1

call random_number(r)
r = r*100

maxima = maxf(r,100,ind)
minima = minf(r,100,ind2)
print *, r
print *, 'Max is ', maxima, ' located at ', ind
print *, 'Min is ', minima, ' located at ', ind2

end program main
