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
	while(b!=0)   /*����շת���෨��ֱ��bΪ0Ϊֹ*/
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	printf("���Լ��Ϊ��%d\n",a);
	printf("��С������Ϊ��%d\n",m*n/a);  
	return 0;
}
