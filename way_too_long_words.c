#include<stdio.h>
#include<string.h>

int main(){

   char a[101];
   int t,len=0;

   scanf("%d",&t);
   while(t--) {

        scanf("%s",a);
        len=strlen(a);
        if(len>10){

             printf("%c%d%c\n",a[0],len-2,a[len-1]);
          }

        else printf("%s\n",a);
       }

return 0;
}
