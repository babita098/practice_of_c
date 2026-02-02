#include <stdio.h>
int main(){
int num; // initailize variable
    printf("enter an integer num"); // allowing user to enter a number
    scanf("%d" , &num);
    if (num > 0) // checking the number is greater than 0 or not
    printf(" the number is positive .\n"); // if condition match printing the number is positive
    else if (num < 0) // checking the number is less than 0 or not
    printf(" the number is negative .\n"); // if condition match printing the number is negative
    else
    printf(" the number is zero .\n"); // if both contidion do not match, the numbe ris 0
    return 0;
}