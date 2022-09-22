//BISMILLAHIR RAHMANIR RAHIM
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,a[100001],cnt;

    cin>>n>>x>>y;

    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int j=1;j<=n;j++)
    {
        cnt=1;

        for(int k=max(1,j-x);k<=min(n,j+y);k++)
        {
                if(a[j]>a[k]) cnt=0;
        }

        if(cnt)
        {
            cout<<j<<endl;

            break;
        }
    }
    return 0;
}
