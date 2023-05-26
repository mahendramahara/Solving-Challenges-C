#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    char id[10];
    char name[50];
    int age;
    char gender[10];
    char address[100];
    char contact[15];
};

void registerPatient(struct Patient *patient) {
    printf("Enter patient ID: ");
    scanf("%s", patient->id);
    
    printf("Enter patient name: ");
    scanf(" %[^\n]", patient->name);
    
    printf("Enter patient age: ");
    scanf("%d", &patient->age);
    
    printf("Enter patient gender: ");
    scanf("%s", patient->gender);
    
    printf("Enter patient address: ");
    scanf(" %[^\n]", patient->address);
    
    printf("Enter patient contact number: ");
    scanf("%s", patient->contact);
}

void displayPatient(struct Patient patient) {
    printf("\nPatient ID: %s\n", patient.id);
    printf("Name: %s\n", patient.name);
    printf("Age: %d\n", patient.age);
    printf("Gender: %s\n", patient.gender);
    printf("Address: %s\n", patient.address);
    printf("Contact Number: %s\n", patient.contact);
}

int main() {
    struct Patient patient;
    char choice;
    
    printf("Automated Healthcare Management System - Patient Registration\n\n");
    
    registerPatient(&patient);
    
    printf("\nPatient Registered Successfully!\n");
    displayPatient(patient);
    
    return 0;
}
