#include <stdio.h>
/*
45
45 46
45 46 47
45 46 47 48
45 46 47 48 49
*/
int main() 
{
   int r,c,n;
   
   printf("enter the value=");
   scanf("%d",&n);
   
   for (r=1;r<=n;r++) 
   {
        for (c=1;c<=r;c++) 
        {
            printf("%d",(c+44));
        }
        printf("\n");
   }
}
