#include<stdio.h>
/*

1 2 3 4 5       
1 2 3 4
1 2 3
1 2
1

*/
main()
{
	int c,r;
	
	for(r=1;r<=5;r++)
	{
		for(c=r;c<=5;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}

