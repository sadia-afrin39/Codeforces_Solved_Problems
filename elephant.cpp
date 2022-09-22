//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,r=0,n=5;

    cin>>x;

    while(x>0)
    {
        r+=x/n;

        x%=n;

        n--;
    }

    cout<<r<<endl;

    return 0;

}
