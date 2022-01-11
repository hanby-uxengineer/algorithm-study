#include <stdio.h>

int main(){
  int max = 0, tmp, n;

  for(int i=0; i<9; i++){
    scanf("%d", &tmp);

    if(tmp > max){
      max = tmp;
      n = i+1;
    }
  }

  printf("%d\n%d", max, n);
  return 0;
}
