//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,cnt1=0,cnt2=0;

    cin>>a>>b;

    cnt1=min(a,b);

    if(cnt1==b)    cnt2=(a-b)/2;

    else  cnt2=(b-a)/2;

    cout<<cnt1<<' '<<cnt2;

    return 0;
}
