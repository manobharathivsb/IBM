#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d\t%d\t%d",&a,&b,&c);
	{
		d=((a<b)?a:b)<((c>a)?c:a);
		printf("%d",d);
	}
	return 0;
	
}
