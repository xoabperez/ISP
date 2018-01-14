program pizza
implicit none
integer, dimension(100,100) :: a = 1
integer :: x, y

a(51:100,1:50) = 2
a(1:50,51:100) = 3
a(51:100,51:100) = 4

print '(100(i1))',((a(x,y),x=1,100),y=1,100)

end program pizza