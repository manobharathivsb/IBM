#include <stdio.h>
int main(void) 
{
int a;
printf("enter the number");
scanf("%d",&a);
switch(a)
{
	case '1':
	printf("bill details");
	break;
	case '2':
	printf("talk plan");
	break;
	case '3':
	printf("deals and discount");
	break;
	case '4':
	printf("internet plan details");
	break;
	case '5':
	printf("voice sms & roaming packs");
	break;
	case '6':
	printf("bill pay recharge");
	break;
	case '7':
	printf("best offer");
	break;
	case '8':
	printf("what's new");
	break;
	default:
	printf("no choice");
}
	return 0;
}
	
