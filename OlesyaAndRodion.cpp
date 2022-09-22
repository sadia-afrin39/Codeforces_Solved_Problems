//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i=1;

    cin>>n>>t;

    if(n==1 and t==10)  cout<<"-1"<<endl;

    else
    {
        cout<<t;

        if(t==10)   i++;

        for(i;i<n;i++)  cout<<"0";
    }

    cout<<endl;

    return 0;
}
