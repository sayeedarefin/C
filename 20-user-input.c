// #include<stdio.h>
// int main(){
//     int myNum;
//     char myChar;
//     printf("Enter a number please!");
//     scanf("%d", &myNum);
//     printf("Enter a letter please!");
//     scanf("%c", &myChar);
//     printf("Your Entered values are: " ,myNum, myChar);
//     return 0;
// }

#include <stdio.h>

int main() {
    int myNum;
    char myChar;  // Changed int to char for character input

    printf("Enter a number please! ");
    scanf("%d", &myNum);  // Use & to pass the address of myNum

    // Clear the input buffer
    getchar();  // This reads the leftover newline character from the previous input

    printf("Enter a letter please! ");
    scanf("%c", &myChar);  // Use & to pass the address of myChar

    printf("Your Entered values are: %d and %c\n", myNum, myChar);  // Use format specifiers to print the variables

    //take string input
    char firstName[10]; //[] ei brackate er moddhe bole dite hobe j input string kototuku highest jayga nite parbe
    printf("Enter your First Name");
    scanf("%s" , firstName); // if you input john doe as a name, it only prints john, not doe, thats why we later use fgets() for multiple words input
    
    printf("Good morning %s" , firstName); //string input er jonno & use korar dorkar nai

    // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    // Use the scanf() function to get a single word as input, and use fgets() for multiple words.
    char fullName[30];

printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);

printf("Hello %s", fullName);




    return 0;
}
