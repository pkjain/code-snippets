#include <stdio.h>
#include <stdlib.h>

void test_stack_growth_direction(int arg1, int arg2) {
  int local_int1;
  char *local_char_ptr1;
  printf("%p\n%p\n%p\n%p\n", &arg1, &arg2, &local_int1, &local_char_ptr1);
}

main () {
  test_stack_growth_direction(2, 3); 
}
