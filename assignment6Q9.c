#include<stdio.h>
int main()
{ 
	for(int j=1;j<=5;j++)
	{
		for(int i=1;i<=((j*(j+1))/2);i++)
			printf("A");
		printf("\n");
	}
}
