//The char data type is used to store a single character.

#include<stdio.h>
int main(){
    char myGrade = 'A';
printf("%c", myGrade);

//If you try to store more than a single character, it will only print the last character:
char myText = 'Hello';
printf("%c", myText);

//To store multiple characters (or whole words), use strings 
char Text[] = "Hello";
printf("%s", Text);
    return 0;
}

//summery: we use strings for storing multiple characters/text, and the char type for single characters.