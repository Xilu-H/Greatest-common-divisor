#include<stdio.h>

int main()
{
	int a,b,m,n,temp;
	printf("Please input two number:\n");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	a=m;b=n;
	while(b!=0)   /*利用辗转求余法，直到b为0为止*/
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("最大公约数为：%d\n",a);
	printf("最小公倍数为：%d\n",m*n/a);  
	return 0;
}
