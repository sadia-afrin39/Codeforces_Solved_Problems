//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,i,j;

    long long int a[10001];

    cin>>n>>l;

   // vector<int>a(n);

    for(i=0;i<n;i++)
        cin>>a[i];

  //  sort(a.begin(),a.end());

  sort(a,a+n);

   int ans=2*max(a[0],l-a[n-1]);

    for( j=0;j<n-1;j++)
    {
        if(a[j+1]-a[j]>ans)   ans=a[j+1]-a[j];
    // ans = max(ans,a[j+1]-a[j]);
    }

    printf("%.10f\n",ans/2.0);

    return 0;
}


