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
//ll ar[100001];
//set<int>tarin;
ll n,m,a,b,c,d,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][100];
char s[65];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

   for(i=0;i<64;i++)
   {
        cin>>s[i];

        if(s[i]=='Q')   cnt+=9;

        if(s[i]=='R')   cnt+=5;

        if(s[i]=='B' || s[i]=='N')   cnt+=3;

        if(s[i]=='P')   cnt++;

        if(s[i]=='q')   cnt1+=9;

        if(s[i]=='r')   cnt1+=5;

        if(s[i]=='b' || s[i]=='n')   cnt1+=3;

        if(s[i]=='p')   cnt1++;

   }
   if(cnt>cnt1) cout<<"White"<<endl;

   else if(cnt==cnt1) cout<<"Draw"<<endl;

   else cout<<"Black"<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************













