//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,cnt=0;

    cin>>a>>b;

    cnt+=a;

    while(a>=b)
    {
        cnt+=a/b;

        a=(a/b)+(a%b);
    }

    cout<<cnt<<endl;
}
