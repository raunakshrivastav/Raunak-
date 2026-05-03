#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;
    float amount;
    ṇṇ

    printf("1. Balance  2. Withdraw  3. Deposit  4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Balance: ₹%.2f\n", balance);
    } 
    else if (choice == 2) {
        printf("Enter amount: ");
        scanf("%f", &amount);
        if (amount > balance) {
            printf("Insufficient Balance\n");
        } else {
            balance = balance - amount;
            printf("New Balance: ₹%.2f\n", balance);
        }
    } 
    else if (choice == 3) {
        printf("Enter amount: ");
        scanf("%f", &amount);
        balance = balance + amount;
        printf("New Balance: ₹%.2f\n", balance);
    } 
    else if (choice == 4) {
        printf("Exiting...\n");
    } 
    else {
        printf("Invalid Choice\n");
    }

    return 0;
}