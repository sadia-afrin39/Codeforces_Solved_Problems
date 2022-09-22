#include<stdio.h>
int main(){

    int n,a,b,c,cnt=0;
    scanf("%d",&n);

    while(n--){
        scanf("%d %d %d",&a,&b,&c);
        if(a==1&&b==1||a==1&&c==1||b==1&&c==1||a==1&&b==1&&c==1){
            cnt++;
        }
    }

    printf("%d\n",cnt);
    return 0;
}
