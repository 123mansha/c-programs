#include<stdio.h>
#include<conio.h>
int a[100],n,i,x,pos;
void init();
void create();
void insert();
void del();
void display();
int main()
{
	int ch;
	do
	{
		printf("\nMenu");
		printf("\nPress 1 for creation of an array");
		printf("\nPress 2 for initialization of array");
		printf("\nPress 3 to insert any element in an array");
		printf("\nPress 4 to delete any element from an array");
		printf("\nPress 5 to display the array");
		printf("\nPress 6 to exit out of the program");
		printf("\nEnter your choice");
		scanf("%d",&ch);
	
	
	switch (ch)
	{
		case 1:printf("\nCreation of the array");
			   create();
			   break;
		
		case 2:printf("\nInitialization of the array");
		  		init();
		  		break;
		  		
		case 3:printf("\nInsertion of the element");
			   insert();
			   break;
				
		case 4:printf("\nDeletion of the element.");
			   del();
			   break;
				
		case 5:printf("\nDisplaying the array.");
		  	   display();
		  	   break;
		  		
		case 6:printf("\nExiting");
			   break;
				
		default:printf("Invalid Choice");
		
	}
}while(ch!=6);
}

void init()
{
	int a[100];
	printf("Array initialized successfully.");
}
			
void create()
{
	printf("\nEnter the size of array");
	scanf("%d",&n);
	printf("\nEnter elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The array is created successfully.");
}

void insert()
{
	printf("\nEnter the location where you wish to insert an element.");
	scanf("%d",&pos);
	printf("\nEnter the element to be inserted.");
	scanf("%d",&x);
	for(i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=x;
		n++;
		printf("\nElement is inserted successfully.");

}

void del()
{
	printf("\nEnter the location from where you wish to delete element.");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
}

void display()
{
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);}


