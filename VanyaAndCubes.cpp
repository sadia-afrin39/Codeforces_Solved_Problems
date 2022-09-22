//Bismillahir Rahmanir Rahim
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,c=0;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cnt+=i;

        c+=cnt;

      //  cout<<cnt<<' '<<c<<' ';

        if(c==n)
        {
             cout<<i<<endl;
             break;
        }

        if(c>n)
        {
             cout<<i-1<<endl;
             break;
        }
    }

    return 0;
}
