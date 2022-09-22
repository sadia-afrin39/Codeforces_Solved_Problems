//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,a[100001],i,j,sum=0;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }

    sum=a[0]-1;

    for(i=1;i<m;i++)
    {
        if(a[i]>=a[i-1]) sum+=a[i]-a[i-1];

        else sum+=(n-a[i-1])+a[i];
    }

    cout<<sum<<endl;

    return 0;
}
