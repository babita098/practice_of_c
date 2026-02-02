#include <stdio.h>
int main(){
 int num, reminder, result;
 printf("enter an integer number num");
 scanf("%d", &num);
 reminder = num % 2;
 printf("reminder is %d\n" , reminder);
 result = num - 5;
 printf("result is %d", result);
return 0;
}