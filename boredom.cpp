//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int cnt1[100001],cnt2[95];

int main()
{
    int n,x,i,j,k,a[100001],cnt=0;

   // vector<int>v;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(j=1;j<=n;j++)
    {
        if(a[j]!=a[j+1])
        {
            cnt[j]+=a[j]*j;

            for(k=a[j]+2;k<n;k++)
            {
                if(a[k]==a[j])
                {
                    cnt[j]+=a[j];

                    k=j+2;
                }
            }

        }

    }

    cout<<cnt

}
