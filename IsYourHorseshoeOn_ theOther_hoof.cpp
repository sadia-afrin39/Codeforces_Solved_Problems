//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  int n,a[5],cnt=0;

    for(int i=0; i<4;i++)
    {
        cin>>a[i];
    }

    sort(a,a+4);

    for(int j=0;j<4;j++)
    {
        if(a[j]==a[j+1]) cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
