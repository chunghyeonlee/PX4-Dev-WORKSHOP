#include <stdio.h>

int main(){
	int x,y,z,m,n,lm,i;
	scanf("%d %d %d",&x,&y,&z);
	m=x;
	n=y;
	lm=x*y;


	for(i=1;i<=100;i++)
	{
		if(!(i%lm))
			printf("FizzBuzz");
		else if (!(i%m))
			printf("Fizz");
		else if (!(i%n))
			printf("Buzz");
		else
			printf("%d",i);
		printf("\n");
	}
	return 0;
}
