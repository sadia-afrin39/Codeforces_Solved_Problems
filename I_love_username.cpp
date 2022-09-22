//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cnt=0,maxi,mini,a[1001];

    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];

    maxi=a[0];
    mini=a[0];

    for(int j=1;j<n;j++)
    {
        for(int k=j-1;k>0;k--)
        {

           if(a[k]>maxi)   maxi=a[k];

           if(a[k]<mini)   mini=a[k];
        }

        if(a[j]>maxi)   cnt++;

        if(a[j]<mini)   cnt++;
    }

    cout<<cnt<<endl;

}
