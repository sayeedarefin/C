#include <stdio.h>
int main (){
int height;
int width;

printf("Enter the value of Height\n");
scanf("%d", &height);

printf("Enter the value of Width\n");
scanf("%d", &width);
int area = height*width;
printf("The area is : %d", area);


    return 0;
}