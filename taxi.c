#include<stdio.h>
int main(){

    int n,s,sum=0,cnt=0;

    scanf("%d",&n);
    while(n--){
        scanf("%d",&s);
        sum+=s;
    }
    if(sum%4==0)  cnt=sum/4;

    else    cnt=((sum/4)+1);

    printf("%d\n",cnt);

    return 0;
}
