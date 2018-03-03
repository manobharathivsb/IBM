#include <stdio.h>
int main(void) 
{
	int n;
	int a=0,licence,insurance,rcbook,helmet,highspeed,morethan2persons;
	scanf("%d\n",&n);
	scanf("%d\t%d\t%d\t%d\n",&licence,&insurance,&rcbook,&helmet);
	scanf("%d\t%d",&highspeed,&morethan2persons);
	{
	if(n==1)
	{if(licence==0)
	{printf("paid no fine\n");
		}
		else
		{	printf("paid rupees %d\n",a+1000);
		}
		if(insurance==0)
		{printf("paid no fine\n");
		}
		else
		{printf("paid rupees %d\n",a+500);
		}
		if(rcbook==0)
		{printf("paid no fine\n");
		}
		else
		{printf("paid rupees %d\n",a+700);
		}
		if(helmet==0)
		{printf("paid no fine\n");
		}
		else
		{printf("paid rs %d\n",a+400);
		}
		if(highspeed==0)
	{printf("paid no fine\n");
	}
	else
	{printf("paid Rs %d\n",a+350);
	}
	if(morethan2persons==0)
	{printf("paid no fine\n");
	}
	else
	{printf("paid rs %d\n",a+300);
	}}
	else
	printf("congrates he/she follow all the rules");
return 0;
}}
