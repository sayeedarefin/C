#include<stdio.h>
int main(){
    int maxScore = 500;
    int userScore = 423;

    float percentage = (float) userScore/maxScore *100;

    printf("users score is :%.3f", percentage);


    return 0;
}