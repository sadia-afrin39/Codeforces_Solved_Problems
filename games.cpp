
//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,a[32],b[32],cnt=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>p>>q;

        a[i]=p;

        b[i]=q;
    }

    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(a[j]==b[k])  cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;

}
