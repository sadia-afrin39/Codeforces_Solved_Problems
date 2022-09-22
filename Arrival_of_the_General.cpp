//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[202],i,maxim=0,mini=101,maxin,minin;

    cin>>n;

    for(int j=0;j<n;j++)
    {
        cin>>a[j];

        if(a[j]>maxim)
        {
            maxim=a[j];

            maxin=j;
        }

        if(a[j]<=mini)
        {
            mini=a[j];
            minin=j;
        }
    }

    if(maxin>minin) minin++;

    cout<<maxin+n-1-minin<<endl;

    return 0;

}
