#include<stdio.h>
int main()
{
	int i,j,n=5,sum=0;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			sum=sum+j;
		}
		printf("%d",sum);
		sum=0;
		printf("\n");
	}
}
