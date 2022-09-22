//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[55];

    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }

    sort(a,a+m);

    int mini=a[n-1]-a[0];

    for(int i=1;i<=m-n;i++)
    {
        int diff=a[i+n-1]-a[i];

        if(diff<mini)
            {
                mini=diff;
            }
        diff=0;
    }

    cout<<mini<<endl;

    return 0;
}

