#include<stdio.h>

int main(){

   int x,y,z,t1,t2,t3,cnts=0,cnte=0,d,w;

    scanf("%d %d %d %d %d %d",&x,&y,&z,&t1,&t2,&t3);

    if(x>y)    d=x-y;
    else   d=y-x;

    if(x>z)  w=x-z;
    else   w=z-x;

    cnte=(w*t2)+(t3*2)+(d*t2)+t3;

    cnts=d*t1;

    if(cnte<cnts||cnts==cnte)     printf("YES\n");

     else printf("NO\n");


    return 0;
}
