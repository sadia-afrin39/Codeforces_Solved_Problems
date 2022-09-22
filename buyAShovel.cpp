//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r,cnt=0;

    cin>>k>>r;

    for(int i=1;;i++)
    {
        if(k*i%10==0 || (k*i)%10==r)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
