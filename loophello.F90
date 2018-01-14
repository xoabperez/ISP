program doloop
implicit none
integer :: howmany, i
 
print *, 'How many times do you want me to say hellooo'
read *, howmany

do i=1, howmany
    print *, 'Hello world'
end do

end program doloop