!Create a 100x100 matrix, set all elements initially to 1
!Slice it per instructions

program pizza
implicit none
integer, dimension(100,100) :: a = 1
!Elements in rows 1-50 and col 1-50 set to 1
a(51:100,1:50) = 2 !Rows 1-50 and col 51-100 set to 2
a(1:50,51:100) = 3 !Rows 51-100 and col 1-50 set to 3
a(51:100,51:100) = 4 !Rows 51-100 and col 51-100 set to 4

print *, a

end program pizza