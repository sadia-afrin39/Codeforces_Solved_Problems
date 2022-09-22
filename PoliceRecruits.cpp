//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,p=0,s=0;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==-1) s++;
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>0) cnt+=a[i];

        if(a[i]==-1&& cnt>0)
        {
            cnt--;
            p++;
        }
    }

    cout<<s-p<<endl;

    return 0;

}
