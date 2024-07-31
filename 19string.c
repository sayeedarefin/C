#include<stdio.h>
int main()
{
    /* code */
    char greetings[]="Hello World";
    printf("%s\n" , greetings);
    
    //access string
        printf("%c\n" , greetings[0]);
        printf("%c\n" , greetings[1]);
        printf("%c\n" , greetings[2]);
        printf("%c\n" , greetings[3]);
        printf("%c\n" , greetings[4]);
        printf("%c\n" , greetings[5]);
        printf("%c\n" , greetings[6]);
        printf("%c\n" , greetings[7]);
        printf("%c\n" , greetings[8]);
        printf("%c\n" , greetings[9]);
        printf("%c\n" , greetings[10]);
        //ekhane space tao include hobe, tai 10 porjonto neya lagbe
        //r tachara string theke jehetu letter ba character print korchi, tai format specifier hishebe %c use korechi

        // ****************************************
        //Modify Strings
        greetings[0]='J'; //single qoute i use kora lagbe
        printf("%s\n" , greetings);

        // ************************************************
        //Loop through string
        int i;
        int length =sizeof(greetings) / sizeof(greetings[0]);
        for (size_t i = 0; i < length; i++)
        {
            printf("%c\n", greetings[i]);
        }
        
    // ********************************************
    //special character
    printf("He says \"I am a good guy\" from the north");

    return 0;
}
