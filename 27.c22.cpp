#include <stdio.h>

int main() 
{
   int n,r,c;
   printf("enter digit=");
   scanf("%d", &n);
   for (r=1;r<=n;++r) 
   {
        for (c=1;c<=r;++c) 
        {
            printf("%c ",(r+64));
        }
        printf("\n");
   }
}



