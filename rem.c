#include <stdio.h>
int main(){
 int num, reminder, result; // initailizing needed variables
 printf("enter an integer number num"); // allowing user to enter a number
 scanf("%d", &num);
 reminder = num % 2; //calculating remainder
 printf("reminder is %d\n" , reminder); //printing remainder
 result = num - 5; //subtracting 5 from the number by the user
 printf("result is %d", result);
return 0;
}