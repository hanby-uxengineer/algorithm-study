#include <stdio.h>

int main(){
  int a, b, c, multiply, temp;
  int arr[10] = {0, };
  scanf("%d %d %d", &a, &b, &c);
  multiply = a * b * c;

  while(multiply>0){
    temp = multiply % 10;
    arr[temp]++;
    multiply /= 10;
  }

  for(int i=0; i<=9; i++){
    printf("%d\n", arr[i]);
  }

  return 0;
}
