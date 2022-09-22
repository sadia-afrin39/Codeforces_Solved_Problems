#include<stdio.h>
#include<string.h>

int main()
{
    char a[100001];
    int n,i,j;

    scanf("%d",&n);

    scanf("%s",a);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
              if(a[i]>a[j])    a[i]=a[j];
        }

    }

    for(i=0;i<n-1;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
