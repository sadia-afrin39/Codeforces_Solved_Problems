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
//int ar1[10000];
set<int>tarin;
long int n,m,a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;
    cin>>n>>m;

    int ar[n+1],ar1[n+1];

    for(i=1;i<=n;i++) cin>>ar[i];

    for(i=n;i>=1;i--)
    {
        tarin.insert(ar[i]);
        ar1[i]=tarin.size();
    }

    for(j=0;j<m;j++)
    {
        cin>>a;

        cout<<ar1[a]<<endl;
    }

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************





