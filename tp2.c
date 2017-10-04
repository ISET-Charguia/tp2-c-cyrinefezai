#include <stdio.h>
int main() {
	int x;
	printf("donner un entier");
	scanf("%d",&x);
	if (x%3==0){
		printf ("l'entier %d est divisible par 3",x);
	}
	else
	printf("l'entier %d n'est pas divisible par 3",x);

	return 0;
}
