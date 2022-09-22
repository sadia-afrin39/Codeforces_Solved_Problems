#include<stdio.h>

int main(){

   int s[6][6],i,j,r,c;
   unsigned int cnt=0;

   for(i=0;i<5;i++){
     for (j=0;j<5;j++){
        scanf("%d",&s[i][j]);
     }
   }

    for(i=0;i<5;i++){
     for (j=0;j<5;j++){
        if(s[i][j]==1){
            r=i;
            c=j;
        }
      }
    }

     if(r<=2 && c<=2)
    {
        cnt=(2-r)+(2-c);
        printf("%d\n",cnt);
    }

    else if(r>=2 && c>=2)
    {
        cnt=(r-2)+(c-2);
        printf("%d\n",cnt);
    }

    else if(r<=2 && c>=2)
    {
        cnt=(2-r)+(c-2);
        printf("%d\n",cnt);
    }

    else if(r>=2 && c<=2)
    {
        cnt=(r- 2)+(2-c);
        printf("%d\n",cnt);
    }

   return 0;
}

