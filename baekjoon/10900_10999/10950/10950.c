#include<stdio.h>

int main() {
  int test_cases, a, b;
  scanf("%d", &test_cases);

  for(int i=0; i<test_cases; i++) {
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
  }

  /*
  int sum_ab[test_cases];

  for(int i=0; i<test_cases; i++) {
    scanf("%d %d", &a, &b);
    sum_ab[i] = a + b;
  }

  for(int j=0; j<test_cases; j++) {
    printf("%d\n", sum_ab[j]);
  }
  */

  return 0;
}