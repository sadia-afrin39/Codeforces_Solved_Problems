//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int n,gc;

int gcd(int c, int d)
{
    while(c!=d)
    {
        if(c>d) c=c-d;

        else d=d-c;
    }
    gc=c;
    n=n-gc;

    return gc;
}

int main()
{
    int a,b,cnt1=0,cnt2=0;

    cin>>a>>b>>n;

    for(int i=1;i<101;i++)
    {
        cnt1=gcd(a,n);

        //cout<<cnt1<<' ';

        if(n<cnt1)
        {
            cout<<"0"<<endl;
            break;
        }
        cnt2=gcd(b,n);

       // cout<<cnt2<<' ';

        if(n<cnt2)
        {
            cout<<"1"<<endl;
            break;
        }
    }
   return 0;
}
