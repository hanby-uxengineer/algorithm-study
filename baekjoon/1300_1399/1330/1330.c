#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  printf((a>b)?">" : (a<b)?"<" : "==");
  
  /*
  if(a>b) {
    printf(">");
  } else if(a<b) {
    printf("<");
  } else {
    printf("==");
  }
  */
  return 0;
}