//*****Bismillahir Rahmanir Rahim*****
//coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[100001],i,j;

    cin>>n;

    while(n--)
    {
        cin>>m;

        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }

        sort(a,a+m);

            cout<<min(a[m-2]-1,m-2)<<endl;

    }
    return 0;
}
