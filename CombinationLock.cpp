
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
int n,a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
//unsigned int x,y,z;
//int ar[1000000];
//int arr[1000][1000];
string s,t;
//string sar[10000];bb
//string sarr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;
    cin>>n;
    cin>>s>>t;

    for(i=0;i<n;i++)
    {
      a=abs(s[i]-t[i]);
     if(s[i]>=t[i]) b=10-s[i]+t[i];
     else b=10-t[i]+s[i];

     cnt+=(a<=b)?a:b;
    }
    cout<<cnt<<endl;
    s[0]='r';
    s[1]='p';
    cout<<s;

}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************




