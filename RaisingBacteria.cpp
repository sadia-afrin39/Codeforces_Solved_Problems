//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,cnt=0;

    cin>>t;

    while(t/2!=0)
    {
        if(t%2==1)  cnt++;

        t/=2;
    }

    cout<<cnt+1<<endl;
    return 0;

}
