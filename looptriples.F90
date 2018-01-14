program triples
implicit none
integer :: u, v, w

!Find all triples of integers u,v,w under 100 s.t.
!u^2+v^2=w^2
do u = 1, 100, 1
    do v = u, 100, 1
        do w = 1, 100, 1
            if(u*u+v*v == w*w) then
                print *, u, '^2 + ', v, '^2 = ', w, '^2'
            end if
        end do
    end do
end do

end program triples