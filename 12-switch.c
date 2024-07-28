#include <stdio.h>

int main() {
    int marks;

    printf("Enter your number: ");
    scanf("%d", &marks);

    // Convert marks into discrete values for switch
    int grade = marks / 10;

    switch (grade) {
        case 10:
        case 9:
            printf("Your grade is A+\n");
            break;
        case 8:
            printf("Your grade is A\n");
            break;
        case 7:
            printf("Your grade is A-\n");
            break;
        case 6:
            if (marks >= 65) {
                printf("Your grade is B+\n");
            } else {
                printf("Your grade is B-\n");
            }
            break;
        case 5:
            if (marks >= 55) {
                printf("Your grade is B\n");
            } else {
                printf("Your grade is C\n");
            }
            break;
        case 4:
            if (marks >= 45) {
                printf("Your grade is C\n");
            } else {
                printf("Your grade is D\n");
            }
            break;
        default:
            printf("Your grade is F\n");
            break;
    }

    return 0;
}
