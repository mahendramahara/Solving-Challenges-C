#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>


struct mufti_airline
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[15];
	struct mufti_airline *following;
}
*begin, *stream;
struct mufti_airline *dummy;


void main()
{
	void reserve(int x), cancel(), display(), savefile();  //function prototypes
	int choice;
	begin = stream = NULL;  //initialize the struct pointers to NULL 
	int num = 1;
	do
	{
		
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                   welcome to Sharath's airline system                   ");
		printf("\n\t\t   *******************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. DISPLAY RECORDS");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t feel free to contact ");
		printf("\n\n\t\t Enter your choice :");



		scanf("%d", &choice); fflush(stdin);
		system("cls");
		switch (choice)
		{
		case 1:
			reserve(num);
			num++;
			break;
		case 2:
			cancel();
			break;
		case 3:
			display();
			break;
		case 4:
		{
				  savefile();
				  break;
		}
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-4");
			printf("\n\n\t Do not forget to chose from 1-4");
		}
		getch();
	} while (choice != 4);
}
// ************************GOOD LUCK MUFTI*****************************
void details()
{
	printf("\n\t Enter your passport number:");
	gets(stream->passport); fflush(stdin);   //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your  name:");
	gets(stream->name); fflush(stdin);
	printf("\n\t Enter your email address:");
	gets(stream->email); fflush(stdin);
    printf("\n\t Enter the Destination : ");
    gets(stream->destination); fflush(stdin);
}


// ************************************GOOD LUCK MUFTI************************************
void details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
		// first user
		begin = stream = (struct mufti_airline*)malloc(sizeof(struct mufti_airline));
		details();
		stream->following = NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
	else if (x > 15) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{
		// next user
		while (stream->following)
			stream = stream->following;
		stream->following = (struct mufti_airline *)malloc(sizeof(struct mufti_airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
} 
// ************************GOOD LUCK MUFTI********************************


void savefile()
{
	FILE *fpointer = fopen("mufti records", "w");
	if (!fpointer)
	{
		printf("\n Error in opening file!");
		return;
		Sleep(800);
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-6s", stream->passport);
		fprintf(fpointer, "%-15s", stream->name);
		fprintf(fpointer, "%-15s", stream->email);
        fprintf(fpointer, "%-15s", stream->destination);
        fprintf(fpointer, "\n");
		stream = stream->following;
	}
	printf("\n\n\t Details have been saved to a file (mufti records)");
	fclose(fpointer);
}
//********************************GOOD LUCK MUFTI***************************************

void display()
{
	stream = begin;
	while (stream)
	{
		printf("\n\n Passport Number : %-6s", stream->passport);
		printf("\n         name : %-15s", stream->name);
		printf("\n      email address: %-15s", stream->email);
		printf("\n      Seat number: A-%d", stream->seat_num);
        printf("\n     Destination:%-15s", stream->destination);
		printf("\n\n++*=====================================================*++");
		stream = stream->following;
	}

}
//*****************************GOOD LUCK MUFTI*************************************

void cancel()
{
	stream = begin;
	system("cls");
	char passport[6];
	printf("\n\n Enter passort number to delete record?:");
	gets(passport); fflush(stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);
		printf(" booking has been deleted");
		Sleep(800);
		return;

	}

	while (stream->following)
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);
			printf("has been deleted ");
			getch();
			Sleep(800);
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");

}

