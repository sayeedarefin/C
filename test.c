#include <stdio.h>
#include <unistd.h> // For sleep function

#define PIN 1234 // Predefined PIN
#define MAX_TRIES 3

void displayMenu() {
    printf("ATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void displayLoadingAnimation() {
    printf("Logging in");
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1); // Delay for 1 second
    }
    printf("\n");
}

int main() {
    int enteredPIN;
    int tries = 0;
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    // PIN verification
    while (tries < MAX_TRIES) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPIN);
        if (enteredPIN == PIN) {
            break;
        } else {
            tries++;
            if (tries < MAX_TRIES) {
                printf("Incorrect PIN. Try again.\n");
            } else {
                printf("Incorrect PIN. Your account is locked.\n");
                return 1; // Exit the program
            }
        }
    }

    // Display loading animation
    displayLoadingAnimation();

    // Main menu loop
    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check balance
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                // Withdraw money
                printf("Enter amount to withdraw: $");
                scanf("%lf", &amount);
                if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: $%.2f\n", balance);
                }
                break;
            case 3:
                // Deposit money
                printf("Enter amount to deposit: $");
                scanf("%lf", &amount);
                balance += amount;
                printf("Deposit successful. New balance: $%.2f\n", balance);
                break;
            case 4:
                // Exit
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
