2#include <stdio.h>

int main() {

    long long int a,b,c,d;

    scanf("%lld %lld %lld",&a,&b,&c);

    d=a+b+c;

    if(d%3==0){

    printf("YES\n");

    }

    else {
        printf("NO\n");
    }

    return 0;
}
