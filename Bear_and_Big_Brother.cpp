//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,cnt=0;

    cin>>a>>b;

    while(1)
    {
        a*=3;
        b*=2;
        cnt++;
        if(a>b) break;
    }

    cout<<cnt<<endl;
}
