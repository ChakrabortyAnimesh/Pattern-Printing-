#include <stdio.h>
#include <stdlib.h>
//Square or Rectangle Pattern Printing
int main()
{
   int i,j,row,col;
   printf("Enter the no. of rows: ");
   scanf("%d",&row);
   printf("Enter the no. of column: ");
   scanf("%d",&col);
   for(i=1;i<=row;i++)//row
   {
       for(j=1;j<=col;j++)//columns
       {
            printf("* ");
       }
     printf("\n");
   }
    return 0;
}
