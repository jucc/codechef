program life
   implicit none
   integer :: x
   do
      read *, x
      if (x == 42) exit
      print *, x
   end do
end program life
