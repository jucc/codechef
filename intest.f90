!    codechef.com - Practice problem - Easy
!    Enormous input test - http://www.codechef.com/problems/INTEST
!    Language - Fortran
!    Juliana Correa

module mdivs
   implicit none
   contains

   function divs (n, k)
   
      integer, intent(in) :: n, k
      integer, dimension(n) :: input
      integer :: divs, i

      ! in order to be time-efficient, we sacrifice memory, reading the entire input 
      ! and keeping it, instead of reading in a loop
      read *, input
      i = 1
      divs = 0
      do while (i <= n)
         if (mod(input(i), k) == 0) then
            divs = divs + 1
         end if
         i = i + 1
      end do

   end function divs

end module mdivs


program enormous
   use mdivs
   implicit none

   integer :: n, k
   
   read *, n, k
   if (n /= 0 .and. k /= 0) then
      print *, divs(n, k)
   else
      print *, 0
   end if

end program
