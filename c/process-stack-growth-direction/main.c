#include <stdio.h>

void test_stack_growth_direction(int arg1, int recursion_depth) {
  printf("%p\n", &arg1);
  if (recursion_depth < 10) {
    test_stack_growth_direction(arg1 + 100, recursion_depth + 1);
  }
}

main () {
  test_stack_growth_direction(2, 0);
}
