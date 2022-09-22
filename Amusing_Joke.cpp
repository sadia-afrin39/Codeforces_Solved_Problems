//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int cnt1[95],cnt2[95];

int main()
{
   int cnt=0;

    string h,g,p;

    cin>>g;

    cin>>h;

    cin>>p;

    g=g+h;

    for(int i=0;i<g.length();i++)
    {
        cnt1[g[i]]++;
    }

    for(int j=0;j<p.length();j++)
    {
        cnt2[p[j]]++;
    }

   /* for(int k=65;k<91;k++)
    {
        cout<<cnt1[k];
    }

    cout<<endl;

    for(int k=65;k<91;k++)
    {
        cout<<cnt2[k];
    }*/

    for(int k=65;k<91;k++)
    {

        if(cnt1[k]!=cnt2[k])
        {
            cnt=1;
            break;
        }
    }

    if(cnt==0)  cout<<"YES"<<endl;

    if(cnt==1)  cout<<"NO"<<endl;

    return 0;
}
