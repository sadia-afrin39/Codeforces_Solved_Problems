#include<stdio.h>

int main(){

    int w,h,k,i,j,x,y,cnt=0;

    scanf("%d %d %d",&w,&h,&k);

   for(i=1;i<=k;i++){
       x=(w-4*(i-1));
       y=(h-4*(i-1));

       cnt+=((x*2)+(y*2)-4);

    }
    printf("%d\n",cnt);

    return 0;

}

