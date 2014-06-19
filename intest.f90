!    codechef.com - Practice problem - Easy
!    Enormous input test - http://www.codechef.com/problems/INTEST
!    Language - Fortran
!    Juliana Correa

program enormous
   implicit none

   integer :: n, k, x, i, divs
   read *, n, k

   i = 0
   divs = 0
   do while (i < n)
      read *, x
      if (mod(x,k) == 0) then
         divs = divs + 1
      end if
      i = i + 1
   end do

   print *, divs

end program
