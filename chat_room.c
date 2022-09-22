#include<stdio.h>
#include<string.h>

int main()
{
    char chat[101];
    int i,len,cnt=0;

    gets(chat);

    len=strlen(chat);

    for(i=0;i<len;i++)
    {
        if(cnt==0 && chat[i]=='h')     cnt=1;

        else if(cnt==1 && chat[i]=='e')     cnt=2;

        else if(cnt==2 && chat[i]=='l')     cnt=3;

        else if(cnt==3 && chat[i]=='l')     cnt=4;

        else if(cnt==4 && chat[i]=='o')     cnt=5;
    }

    if(cnt==5)      printf("YES\n");

    else  printf("NO\n");

    return 0;

}
