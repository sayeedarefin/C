// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     int myAge = 25;
//     int votingAge = 18;
//     printf("%d", myAge >= votingAge);
//     return 0;
// }
 //we can make similar logic output by if-else function...

#include<stdio.h>
int main(){
    // int myAge = 25;
    // int votingAge = 18;
    // if (myAge>=votingAge)
    // {
    //     printf("You are eligible for vote");
    // }
    // else{
    //     printf("You are not eligible for vote");
    // }
    
    int num1;
    int num2;
    printf("Enter the value of first number: ");
    scanf("%d", &num1);
    printf("Enter the value of second number: ");
    scanf("%d", &num2);
    if (num1>num2)
    {
        printf("Your first number is greater than the second number");
    }
    else{
        printf("Your first number is less than the second number");
    }
    return 0;
}