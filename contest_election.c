#include<stdio.h>
int main ()
{
    int n,k,i,max,cnt1=0,cnt2=0;
    int a[101];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        cnt1+=a[i];
    }

    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])  max=a[i];
    }


    tarin:
    cnt2=0;

    for(i=0;i<n;i++)
    {
        cnt2+=(max-a[i]);
    }

    if(cnt2>cnt1)    printf("%d\n",max);

    else
    {
        max++;
        goto tarin;
    }

    return 0;

}

