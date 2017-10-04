#include <stdio.h>
int main() {
double x ;
int r;
printf ("donner un reél");
scanf("%ld",&x);
if (x<0)
	r=(x*-1);
else r=x ;
printf("%d x",r);
	return 0;
}
