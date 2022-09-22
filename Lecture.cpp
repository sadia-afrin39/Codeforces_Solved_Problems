


//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

//*************************************
//*                                   *
//*-------Declaration Part------------*
//*                                   *
//*************************************

#include<bits/stdc++.h>
using namespace std;
#define fast   ios :: sync_with_stdio(false); cin.tie(0)
#define done return 0
const double PI = 2*acos(0.0);
typedef long long int ll;
//int ar[3001],ar1[3001];
long int a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
string s,s1;
//string sar1[3001],sar[3001];
//int arr[1000][1000];
map<string,string> m;


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;
    cin>>a>>b;

    for(i=0;i<b;i++)
    {
        cin>>s>>s1;

        if(s1.length()<s.length()) m[s]=s1;

        else m[s]=s;
    }

    for(j=0;j<a;j++)
    {
        cin>>s;

        cout<<m[s]<<' ';
    }
    cout<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************


