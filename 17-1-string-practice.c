#include<stdio.h>
int main()
{
    int ages[]={12,25,36,47,85,63,25,14,25};
    float sum, avg=0; //should be initilalized every int

    //finding length of the array
    int length = sizeof(ages)/sizeof(ages[0]);

    //finding sum
    int i;
    for ( i= 0; i < length; i++)
    {
        sum += ages[i];
    }
    
    //finding avg
    avg = sum/length;
    printf("%f \n" , avg);
    return 0;
}
