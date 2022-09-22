#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,cnt=0;
    char str[1001][6];

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {
           scanf("%s",str[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j+=3)
        {
            if(cnt==0)
            {
                if (str[i][j]=='O'&&str[i][j+1]=='O')
                {
                    printf("yes\n");
                    str[i][j]='+';
                    str[i][j+1]='+';
                    cnt++;
                    break;
                }
            }
         }
    }
    if(cnt==0)  printf("no\n");
    if(cnt!=0)
        {
             for(i=0;i<n;i++)
             {
                printf("%s\n",str[i]);
             }
        }
    return 0;

}
