#include <stdio.h>

int main() {
    int marks;

    printf("Enter your number: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Your grade is A+\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Your grade is A\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Your grade is A-\n");
    } else if (marks >= 65 && marks < 70) {
        printf("Your grade is B+\n");
    } else if (marks >= 60 && marks < 65) {
        printf("Your grade is B-\n");
    } else if (marks >= 55 && marks < 60) {
        printf("Your grade is B\n");
    } else if (marks >= 45 && marks < 55) {
        printf("Your grade is C\n");
    } else if (marks >= 40 && marks < 45) {
        printf("Your grade is D\n");
    } else {
        printf("Your grade is F\n");
    }

    return 0;
}
