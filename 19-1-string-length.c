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
    // *******************************************
    printf("%d\n", strlen(greetings));   // 11
    printf("%d", sizeof(greetings));   // 12
    //Why sizeof Includes the Null Terminator
        // sizeof includes the null terminator because it reports the total allocated size of the array. This is crucial for memory management and understanding the full size of the array in bytes, especially when dealing with binary data or low-level memory operations.

    // Why strlen Excludes the Null Terminator
        // strlen is designed to measure the length of the string content, not the allocated space. The null terminator is a special marker indicating the end of the string, so strlen counts only the characters that are part of the visible string, stopping at the null terminator.

    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //specifies the size of the array, meaning the array alphabet is allocated enough memory to hold 50 characters.
    printf("%d", strlen(alphabet));   // 26
    printf("%d", sizeof(alphabet));   // 50
    return 0;
}
