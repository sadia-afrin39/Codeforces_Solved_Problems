//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x=0,cnt=0;

    cin>>n>>k;

    for(int i=1;i<=n;i++)
    {
        x+=5*i;

        if(x+k<=240) cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
