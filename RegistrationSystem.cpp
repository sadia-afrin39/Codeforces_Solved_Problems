//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int cnt1[95],cnt2[95];

int main()
{
    int n,cnt=0;

    map<string,int> m;

    string s;

    cin>>n;

    while(n--)
    {
        cin>>s;

        if(m.count(s)==0)
        {
            cout<<"OK"<<endl;

            m[s]++;
        }

        else
        {
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }

    return 0;
}
