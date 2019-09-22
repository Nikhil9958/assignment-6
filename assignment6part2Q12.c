#include<stdio.h>
int main()
{
	for(int j=1;j<=6;j++)
	{
		for(int i=1;i<=6;i++)
		{
			if(i<=j)
				printf("%c",64+i);
			else
				printf("%c",96+i-j);
		}
		printf("\n");
	}
}
