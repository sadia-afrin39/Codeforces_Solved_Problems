//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string a,b;

    cin>>a;

    cin>>b;

    for(i=0;i<a.length();i++)
    {
        if(a[i]==b[i])  cout<<'0';

        else cout<<'1';
    }

    return 0;
}
