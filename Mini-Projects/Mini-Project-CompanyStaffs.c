#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STAFFS 100 // Maximum number of staffs

struct Staff {
    char name[50];
    int age;
    char address[100];
    char position[50];
};

void display_staff(struct Staff staff) {
    printf("\nName: %s\n", staff.name);
    printf("Age: %d\n", staff.age);
    printf("Address: %s\n", staff.address);
    printf("Position: %s\n", staff.position);
}

void add_staff(struct Staff staffs[], int *num_staffs) {
    if (*num_staffs >= MAX_STAFFS) {
        printf("\nSorry, the maximum number of staffs has been reached.\n");
        return;
    }

    struct Staff new_staff;

    printf("\nEnter the details of the new staff:\n");

    printf("Name: ");
    scanf(" %[^\n]", new_staff.name);

    printf("Age: ");
    scanf("%d", &new_staff.age);

    printf("Address: ");
    scanf(" %[^\n]", new_staff.address);

    printf("Position: ");
    scanf(" %[^\n]", new_staff.position);

    staffs[*num_staffs] = new_staff;
    (*num_staffs)++;

    printf("\nStaff added successfully!\n");
}

void edit_staff(struct Staff staffs[], int num_staffs) {
    char search_name[50];
    int i,found = 0;

    printf("\nEnter the name of the staff to edit: ");
    scanf(" %[^\n]", search_name);

    for (i = 0; i < num_staffs; i++) 
	{
        if (strcmp(staffs[i].name, search_name) == 0) {
            display_staff(staffs[i]);

            printf("\nEnter the new details for this staff:\n");

            printf("Name: ");
            scanf(" %[^\n]", staffs[i].name);

            printf("Age: ");
            scanf("%d", &staffs[i].age);

            printf("Address: ");
            scanf(" %[^\n]", staffs[i].address);

            printf("Position: ");
            scanf(" %[^\n]", staffs[i].position);

            found = 1;
            printf("\nStaff details updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("\nSorry, no staff was found with the given name.\n");
    }
}

int main() {
    struct Staff staffs[MAX_STAFFS];
    int num_staffs = 0;
    int choice;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Add new staff\n");
        printf("2. Edit staff details\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_staff(staffs, &num_staffs);
                break;
            case 2:
                edit_staff(staffs, num_staffs);
                break;
            case 3:
                printf("\nGoodbye!\n");
                exit(0);
            default:
                printf("\nInvalid choice. Try again.\n");
        }
    }

    return 0;
}

