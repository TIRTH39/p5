#include<stdio.h>
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

main()
{
	int r,c,n;
	
  printf("Enter the value:");
  scanf("%d",&n);
  
  for(r=1;r<=n;r++)
  { 
    for(c=1;c<=r;c++)
    {
      printf("%d",r);
    }
      printf("\n");
  }
}
