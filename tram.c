/*      Bismillahir Rahmanir Rahim

///------Sadia Afrin Tarin-----------//
University of Barishal.....
Dept. of [{Computer Science & Engineering}]*/

#include<stdio.h>
int main()
{

    int n,a,b,fst,now,max,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if (i==0)
        {   max=b;
            now=b;
        }

        else
       {
           now=((now-a)+b);
           if (now>max) max=now;
       }
   }
   printf("%d\n",max);

    return 0;
}
