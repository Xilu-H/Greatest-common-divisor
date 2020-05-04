#include<stdio.h>

int main()
{
	int a,b;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3-a;b++)printf(" ");
		for(b=0;b<2*a-1;b++) putchar(65+b);
		printf("\n");
	}
	return 0;
}
