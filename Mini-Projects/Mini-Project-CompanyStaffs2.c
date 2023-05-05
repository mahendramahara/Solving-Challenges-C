#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STAFFS 50 // Maximum number of staffs

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
    int i,j,found = 0;

    printf("\nEnter the name of the staff to edit: ");
    scanf(" %[^\n]", search_name);

    for (i = 0; i < num_staffs; i++) {
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

void delete_staff(struct Staff staffs[], int *num_staffs) {
    char search_name[50];
    int i,j,found = 0;

    printf("\nEnter the name of the staff to delete: ");
    scanf(" %[^\n]", search_name);

    for (i = 0; i < *num_staffs; i++) {
        if (strcmp(staffs[i].name, search_name) == 0) {
            for (j = i; j < *num_staffs - 1; j++) {
                staffs[j] = staffs[j + 1];
            }

            (*num_staffs)--;
            found = 1;
            printf("\nStaff deleted successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("\nSorry, no staff was found with the given name.\n");
    }
}

void print_all_staffs(struct Staff staffs[], int num_staffs) {
    printf("\nAll staffs:\n");

    for (i = 0; i < num_staffs; i++)

