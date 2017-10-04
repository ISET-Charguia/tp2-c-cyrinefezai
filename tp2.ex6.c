#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a,b,c ;
	printf("doner la permier variable ");
	scanf("%lf",&a);
	printf("donner la deuxieme variable" );
	scanf("%ld",&b);
	printf(" donner la terioxieme varaible");
	scanf("%lf",&c);
	if( (b>c)&(a>c))
	{ if (b>c)
		printf("%d est le maximum et %d est le minimum",a,c);
	}
	else
	 printf("%d est le maximum et %d est le minimum",a,b);
	{
		if ((b>a)& (b>c))
printf("%d est le maximum et %d est le minimum",b,a);
else((c>a)&(c>b))
printf("%d est le maximum ùd est le  minimum",b,c);
	return 0;
}
