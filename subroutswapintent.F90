!Write a subroutine swap of two parameters and also return
!the old values with the proper intent

subroutine swap(a, b, a_old, b_old)
implicit none
integer, intent(in) :: a_old, b_old !input only
integer, intent(out) :: a, b !output only
 
a = b_old
b = a_old

end subroutine

program swaptest
implicit none
integer :: i_old=2, j_old=3
integer :: i, j

call swap(i, j, i_old, j_old)
print *, 'i = ', i
print *, 'j = ', j

end program swaptest