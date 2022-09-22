#include<stdio.h>
int main(){

    int a[51],i,n,k,cnt=0;
    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++){
        if(a[i]>=a[k] && a[i]>0){
                cnt++;
        }
    }

    printf("%d\n",cnt);

    return 0;
    }
