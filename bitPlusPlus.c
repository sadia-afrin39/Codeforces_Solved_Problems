#include<stdio.h>
int main(){

    char a[4];
    int n,i,x=0;
    scanf("%d",&n);
    while(n--){

        scanf("%s",a);

        if(a[1]=='+') x++;
        if(a[1]=='-') x--;

      }

      printf("%d\n",x);
      return 0;
}
