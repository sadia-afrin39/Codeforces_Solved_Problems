//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cnt=0;

    cin>>n>>k;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(5-a[i]>=k) cnt++;
    }

    cout<<cnt/3<<endl;

    return 0;
}
