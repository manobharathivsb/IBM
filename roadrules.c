#include <stdio.h>
int main(void) 
{
	int n;
	int a=0,licence,insurance,rcbook,helmet,highspeed,morethan2persons;
	scanf("%d\n",&n);
	scanf("%d\t%d\t%d\t%d\n",&licence,&insurance,&rcbook,&helmet);
	scanf("%d\t%d",&highspeed,&morethan2persons);
	{
	{
	if(licence==0)
	{
		a=a+1000;
		}
		if(insurance==0)
		{a=a+500;
		}
		if(rcbook==0)
		{a=a+700;
		}
		if(helmet==0)
		{a=a+400;
		}
		if(highspeed==0)
	{a=a+350;
	}
	if(morethan2persons==0)
	{a=a+300;
	}}
	if((licence==1||insurance==1||rcbook==1||helmet==1||highspeed==1||morethan2person==1)
         {
	printf("congrates he/she follow all the rules");
	 }
	return 0;
}}
