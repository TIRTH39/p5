#include<stdio.h>
/*

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/
main()
{
	int r,c;
	
	for(r=1;r<=5;r++)
	{
		for(c=5;c>=r;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	}
}
