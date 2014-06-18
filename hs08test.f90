!   codechef.com - Practice problem - Easy
!    ATM - http://www.codechef.com/problems/HS08TEST
!    Language - Fortran
!    Juliana Correa

program atm
implicit none

   integer :: wd
   real    :: bal, amount, tax = 0.5

   read *, wd, bal
   amount = wd + tax
   
   if ((mod(wd, 5) == 0) .and. (amount <= bal)) then
      bal = bal - amount
   end if      
   
   write (*, fmt='(f0.2)') bal

end program atm
