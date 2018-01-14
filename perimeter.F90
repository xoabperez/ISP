!Write an interface that calculates the perimeter of an assumed
!shape depending on the number of arguments passed
!3 args: triangle, 2 args: rectangle, 1arg: circle

program perimeter
implicit none

interface calculate
    subroutine triangle(a,b,c)
        real :: a, b, c
    end subroutine triangle
    subroutine circle(d)
        real :: d
    end subroutine circle
    subroutine rectangle(e,f)
        real :: e,f
    end subroutine rectangle
end interface calculate

call calculate(1.,2.,3.) !triangle

end program perimeter

!Subroutines calculating perimeters
subroutine triangle(a,b,c)
    real :: a, b, c
    print *, a+b+c
end subroutine triangle
subroutine circle(d)
    real :: d
    print *, 2*d*3.14159
end subroutine circle
subroutine rectangle(e,f)
    real :: e,f
    print *, 2*e+2*f
end subroutine rectangle

