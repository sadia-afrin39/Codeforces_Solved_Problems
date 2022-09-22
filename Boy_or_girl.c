#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    int i,j,len,cnt=1;

    scanf("%s",s);
    len=strlen(s);

    for(i=0;i<len;i++)
    {
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])   break;

            else if(j==(i-1))    cnt++;
        }
    }

    if (cnt%2==0)   printf("CHAT WITH HER!\n");

    else  printf("IGNORE HIM!\n");

    return 0;
}


