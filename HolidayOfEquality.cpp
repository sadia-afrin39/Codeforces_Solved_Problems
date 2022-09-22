//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[101],maxi=0,cnt=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>maxi)   maxi=a[i];
    }

    for(int i=0;i<n;i++)
    {
        cnt+=maxi-a[i];
    }

    cout<<cnt<<endl;

    return 0;

}
