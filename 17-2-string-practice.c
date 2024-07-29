//this is a very important example to practice and understand the code to find out the lowest value in an array


#include<stdio.h>
int main()
{
    // An array storing different ages
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70, 8};

int i;

// Get the length of the array
int length = sizeof(ages) / sizeof(ages[0]);

// Create a variable and assign the first array element of ages to it
int lowestAge = ages[0];

// Loop through the elements of the ages array to find the lowest age
for (i = 0; i < length; i++) {
  if (lowestAge > ages[i]) {
    lowestAge = ages[i];
  }
  
}
printf("%d", lowestAge);
    return 0;
}
