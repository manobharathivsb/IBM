#include <stdio.h>
int main() 
{
	int a,regularpay,b;	
	scanf("%d",&a);
	scanf("%d",&regularpay);
	if(a>=50)
	{
	b=1.5*regularpay;
	printf("%d",b);
	}
	else 
	{
		printf("%d",regularpay);
	}
	return 0;
}
