#include<stdio.h>
int main()
{

    unsigned long long n,m,a,cnt=0,count=0;

    scanf("%llu %llu %llu",&n,&m, &a);

    if(n<=a && m<=a ) count=1;

    else if (m>a && n>a){
        cnt=n/a;
        if(n%a!=0) cnt++;
        count=cnt*(m/a);
        if (m%a!=0) count+=cnt;
    }

    else if (n>a && m<=a){
         count=n/a;

        if (n%a!=0)  count=(n/a)+1;
    }

    else if(n<=a && m>a){
         count=m/a;
         if(m%a!=0)  count=(m/a)+1;
    }

    printf("%llu\n",count);
    return 0;
}

