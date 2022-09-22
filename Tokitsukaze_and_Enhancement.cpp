//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,m,n,p=0,q=0;

    cin>>a;

    c=a%4;

    if(c==1)
    {
        cout<<0<<' '<<'A'<<endl;
        return 0;
    }

    else if(c==2)
    {
       cout<<1<<' '<<'B'<<endl;
       return 0;
    }

    else if(c==3)
    {
       cout<<2<<' '<<'A'<<endl;
       return 0;
    }

    else
    {
        cout<<1<<' '<<'A'<<endl;
        return 0;
    }

    return 0;
}
