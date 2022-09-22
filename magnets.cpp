//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100001],i,cnt=1;

    cin>>n;

    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<n-1;j++)
    {
        if(a[j]!=a[j+1]) cnt++;

    }

    cout<<cnt<<endl;
}
