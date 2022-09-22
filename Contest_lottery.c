#include<stdio.h>

int main(){

  int a[15],b[10];
    int n,i,j,cnt=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
   scanf("%d",&n);
   while (n--){
        cnt=0;
   for(j=0;j<6;j++){
   scanf("%d",&b[j]);
   }

   for (i=0;i<10;i++){
    for(j=0;j<6;j++){
            if (a[i]==b[j]) cnt++;
      }
    }

   if (cnt>=3) printf("Lucky\n");
   else   printf("Unlucky\n");

}

return 0;

}

