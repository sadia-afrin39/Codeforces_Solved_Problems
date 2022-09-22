//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[202],i,cn=0;

    cin>>n;

    for(i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<2*n;i+=2)
    {
        if(a[i+1]-a[i]>=2)   cn++;
    }

    cout<<cn<<endl;

    return 0;
}
