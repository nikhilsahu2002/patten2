#include<stdio.h>
#include<conio.h>

int i,j;
/*
void patten()
{

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

}         */
void patten2()
{
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

void main()
{
clrscr();
//patten();
patten2();
}