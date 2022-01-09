#include <stdio.h>

int main(){
  int n, input_n, count = 0;
  scanf("%d", &input_n);
  n = input_n;

  do{
    int nl, nr;

    nl = n / 10;
    nr = n % 10;
    n = nr*10 + (nl+nr)%10;

    count++;
  } while(n != input_n);

  printf("%d", count);
  return 0;
}
