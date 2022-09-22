#include<stdio.h>
#include<string.h>
int main(){

    int i,len,cnt=0;
    char a[101];

    gets(a);
    len=strlen(a);

   for(i=0;i<len;i++){
            if(a[i]=='1'){
                cnt++;
                if(cnt==7) {
                        printf("YES\n");
                        return 0;
                }
            }
            else cnt=0;
      }

    for(i=0;i<len;i++){
            if(a[i]=='0'){
                cnt++;
                if(cnt==7) {
                        printf("YES\n");
                        return 0;
                }
            }
            else cnt=0;
      }

    if(1) printf("NO\n");
    return 0;
}

