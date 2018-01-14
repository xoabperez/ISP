program main
implicit none
real, dimension(3) :: a = (/0,1,2/)
real, target :: b
real, pointer :: max_value
b = maxval(a)
max_value => b
print *, max_value
end program main 