// we need 5 things to declare a varible like javascript

int num = 25;
// but if we want to show the variable value, we canot print the value directly like other programming languages. 

// if we really want to show the stored variable, we need to add format specifier

//It is basically a placeholder for the variable value.

#include <stdio.h>
int main(){

    // Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("My favourite number is %d\n", myNum );
printf("My favourite decimal number is %f \n", myFloatNum);
printf("My favourite letter is %c", myLetter);

    return 0;
}