#include <stdio.h>

int main() {
  int hour, minute, hour_to_minute, alarm;
  scanf("%d %d", &hour, &minute);
  alarm = 45;
  
  hour_to_minute = (hour*60)+minute-alarm;
  if(hour_to_minute < 0) hour_to_minute += 1440;

  printf("%d %d", hour_to_minute/60, hour_to_minute%60);

  return 0;
}