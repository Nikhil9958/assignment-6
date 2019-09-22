#include<stdio.h>
int main()
{
	for(int j=1;j<=5;j++)
	{
		for(int i=1;i<=6-j;i++)
			printf("%c",69-i+j);
		printf("\n");
	}}

