#include<stdio.h>
#include<string.h> //eta use korle r alada kore furmula use kora lagbena
int main()
{
    char greetings[]="Hello World";
    printf("%d" , strlen(greetings));
    int i;
        // int length =sizeof(greetings) / sizeof(greetings[0]);
        for (size_t i = 0; i < strlen(greetings); i++)
        {
            printf("%c\n", greetings[i]);
        }
    
    return 0;
}
