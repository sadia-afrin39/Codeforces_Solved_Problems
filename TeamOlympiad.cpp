//Bismillahir Rahmanir Rahim
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int a[4][5001],b[4];

int main()
{
    int n,m,cnt=0;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>m;

        a[m][b[m]++]=i;
    }

    cnt = min(b[1],min(b[2],b[3]));

    cout<<cnt<<endl;

    for(int j=0;j<cnt;j++)
    {
        cout<<a[1][j]<<' '<<a[2][j]<<' '<<a[3][j]<<endl;
    }
   return 0;
}
