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
int ar[501];
//set<int>tarin;
int n,m,a,b,c,d,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][100];
//string s;


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

   cin>>n>>m;

   for(i=0;i<n;i++)
   {
      cnt=0;

      cin>>ar[i];

      if(i!=0)
      {
          if(ar[i]+ar[i-1]<m)
          {
              cnt=m-(ar[i]+ar[i-1]);

              cnt1+=cnt;

              ar[i]=ar[i]+cnt;
          }
      }
   }
   cout<<cnt1<<endl;

   for(i=0;i<n;i++) cout<<ar[i]<<' ';

   cout<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************











