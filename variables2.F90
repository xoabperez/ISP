program variables

implicit none        
real :: mom_age,dad_age,my_age = 24.7
real(8) :: r1
integer, parameter :: lng=selected_int_kind(16)
!selected_int_kind(n) returns kind value needed to specifiy precision
!to n decimal places
integer :: apples, bananas, oranges = 1
integer(lng) :: long
character(len=5) :: mom, dad
 
mom_age = 52.6; dad_age = 53.9
r1 = 1.111
apples = 1; bananas = 2
long = 10
mom = 'Lulu'
dad = 'Phil'

print *, 'huge of integer(16) long is ', huge(long)
!huge is a built-in function returning larges value of the 
!argument type
print *, 'huge of real(8) r1 is ', huge(r1)
print *, 'I have ', apples, ' apples'
print *, mom, ' is ', mom_age, ' years old'


end program variables