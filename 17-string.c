#include<stdio.h>
int main()
{
    // int myString[]={12,13,14,15,16,17};
    // int i;
        // **********************************************
    // **********************************************
    //printing srting values manually are below
    // printf("%d\n",myString[0]);
    // printf("%d\n",myString[1]);
    // printf("%d\n",myString[2]);
    // printf("%d\n",myString[3]);
    // printf("%d\n",myString[4]);
    // printf("%d\n",myString[5]);
    // printf("%d\n",myString[6]); 
    //the value 6422284 is a garbage value because it is accessing a memory location that does not belong to the array
     // **********************************************
    // **********************************************


    // **********************************************
    // **********************************************
    //this is how we can print the element of any string using "for loop"
    // for (size_t i = 0; i < 6; i++)
    // {
    //     printf("%d \n" ,myString[i]);
    // }
        // **********************************************
    // **********************************************

    // **********************************************
    // **********************************************
    //now we want to print the size of any string
    int myString[]={12,13,14,15,16,17};
    int length = sizeof(myString)/sizeof(myString[0]); //basically this is a formula to print the total size of an element
    printf("%d\n" , length);
    return 0;
}
