#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "Assalamualikum ";
    char str2[] = "warahmatullah";
    strcat(str1, str2); //1st variable er moddhe tumi 2nd variable er maan rakho eta bujhacche
    //Note that the size of str1 should be large enough to store the result of the two strings combined (50 in our example).
    printf("%s" , str1);
    return 0;
}