#include <stdio.h>
#include <stdlib.h> // for system function

void welcomeMessage();
void displayMenu();
void handleSelection(int choice);

int main() {
    welcomeMessage();
    displayMenu();
    return 0;
}

void welcomeMessage() {
    printf("Welcome to Solving Challenges in C Programming!\n\n");
}

void displayMenu() {
    printf("Please select an option:\n");
    printf("1. View C Programming Challenges\n");
    printf("2. Explore PDF Resources\n");
    printf("3. Try Mini Projects\n");
    printf("4. Exit\n\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    handleSelection(choice);
}

void handleSelection(int choice) {
    switch (choice) {
        case 1:
            printf("Redirecting to '100-Challenges' directory...\n");
            system("cd 100-Challenges");
            break;
        case 2:
            printf("Redirecting to 'C-Learning-Resources' directory...\n");
            system("cd C-Learning-Resources");
            break;
        case 3:
            printf("Redirecting to 'Mini-Projects' directory...\n");
            system("cd Mini-Projects");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            displayMenu();
    }
}
