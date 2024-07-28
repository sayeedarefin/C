#include<stdio.h>
#include<stdbool.h> 
//withot this the boolean wont work

int main (){

    bool isChard = false;
    bool isDietOk = true;

    printf("%d \n", isChard);
    printf("%d \n", isDietOk);
    printf("%d", 10 > 9); 
    printf("%d", 10 == 10); // Returns 1 (true), because 10 is equal to 10
printf("%d", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
printf("%d", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55
bool isHamburgerTasty = true;
bool isPizzaTasty = true;

// Find out if both hamburger and pizza is tasty
printf("%d", isHamburgerTasty == isPizzaTasty);

    return 0;
}