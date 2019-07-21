#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void creation();
void deposit();
void withdraw();
void bal();

int a=0,i=101;

struct bank
{
	int no;
	char name[20];
	float bal;
	float dep;
}s[20];

void main()
{
	int ch;
	while(1)
	{
		clrscr();
		printf("\n*************************************");
		printf("\n\tBank Management System");
		printf("\n*************************************");
		printf("\n\n1. Creation");
		printf("\n2. Deposit");
		printf("\n3. Withdraw");
		printf("\n4. Balance Enquiry");
		printf("\n5. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		getch();
		clrscr();

		switch(ch)
		{
			case 1:	creation();
				break;
			case 2: deposit();
				break;
			case 3: withdraw();
				break;
			case 4: bal();
				break;
			case 5:
				printf("\n\n\n\n\n\n\n\n\n\t\t********************************\n\t\t\t\tThank You\n\t\t\t***********************************\n\n\n\n\n");
				getch();
				exit(0);
			default:
				printf("Enter 1-5 only");
				getch();
		}
	}
}

void creation()
{
	printf("\n*******************************");
	printf("\n\tAccount Creation");
	printf("\n*******************************");
	printf("\n\nYour Account Number is : %d",i);
	s[a].no=i;
	printf("\nEnter your Name : ");
	scanf("%s",s[a].name);
	printf("\nYour Deposite is Minimum Rs.500");
	s[a].dep=500;
	a++;
	i++;
	getch();
}

void deposit()
{
	int no,b=0,m=0;
	float aa;
	printf("\n*************************");
	printf("\n\tDeposit");
	printf("\n*************************");
	printf("\n\nEnter your Account Number: ");
	scanf("%d",&no);
	for(b=0;b<i;b++)
	{
		if(s[b].no==no)
			m=b;
	}
	if(s[m].no==no)
	{
		printf("\n Account Number: %d",s[m].no);
		printf("\n Name: %s",s[m].name);
		printf("\n Deposit: %f",s[m].dep);
		printf("\n How Much Deposited Now: ");
		scanf("%f", &aa);
		s[m].dep+=aa;
		printf("\nDeposit Amount is: %f",s[m].dep);
		getch();
	}
	else
	{
		printf("\nAccount Number is INVALID");
		getch();
	}
}

void withdraw()
{
	int no,b=0,m=0;
	float aa;
	printf("\n**************************");
	printf("\n\tWithdraw");
	printf("\n**************************");
	printf("\n\nEnter your Account Number: ");
	scanf("%d",&no);
	for(b=0;b<i;b++)
	{
		if(s[b].no==no)
			m=b;
	}

	if(s[m].no==no)
	{
		printf("\n Account Number: %d",s[m].no);
		printf("\n Name: %s",s[m].name);
		printf("\n Deposit: %f",s[m].dep);
		printf("\n How Much Withdraw Now:");
		scanf("%f",&aa);
		if(s[m].dep<aa+500)
		{
			printf("\nCan't Withdraw\nYour Account has Minimum Balance");
			getch();
		}
		else
		{
			s[m].dep-=aa;
			printf("\nThe Balance Amount is: %f",s[m].dep);
		}
	}
	else
	{
		printf("\nINVALID");
		getch();
	}
	getch();
}

void bal()
{
	int no,b=0,m=0;
	float aa;
	printf("\n****************************");
	printf("\n\tBalance Enquiry");
	printf("\n****************************");
	printf("\n\nEnter your Account Number: ");
	scanf("%d",&no);
	for(b=0;b<i;b++)
	{
		if(s[b].no==no)
		m=b;
	}
	if(s[m].no==no)
	{
		printf("\n Account Number: %d",s[m].no);
		printf("\n Name: %s",s[m].name);
		printf("\n Deposit: %f",s[m].dep);
		getch();
	}
	else
	{
		printf("INVALID");
		getch();
	}
}

