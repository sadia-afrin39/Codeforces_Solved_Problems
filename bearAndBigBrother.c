#include<stdio.h>
int main()
{
	int i,a,b,cnt=0;
	scanf("%d %d",&a,&b);
	while(a<=b)
	{
		a*=3;
		b*=2;
		cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
		