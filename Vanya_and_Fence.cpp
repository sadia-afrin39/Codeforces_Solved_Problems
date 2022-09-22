//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a[1001],cnt=0;

    cin>>n>>h;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>h) cnt+=2;

        else cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
