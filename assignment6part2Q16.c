#include <stdio.h>
int main()
{
  int A = 65, k= 1;
  for(int j=0,k=1;j<6;j++,k++)
  {
    A = 65;
    for(int i=0; i<6-j;i++)
    {
      printf("%c", A);
      A=A+k;
    }
    printf("\n");
  }
}