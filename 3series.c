#include <stdio.h>
#include <conio.h>
void main()
{
      int i,j,k;
      for (i=1;i<=5;i++)
        {
            k=1;
            for(j=1;j<=9;j++)
              {
                printf(" "); 
                if(j>=6-i && j<=4+i && k)
                  printf("*");


                else
                printf(" ");
              }

              printf("\n");

        }
}
