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
ll ar[100001];
//set<int>tarin;
ll n,m,a,b,c,d,p,q,i,j,cnt=1,cnt1=1,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][100];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

   cin>>n;

   for(i=0;i<n;i++)
        cin>>ar[i];

   for(i=1;i<n;i++)
   {
       if(ar[i]>ar[i-1])  cnt++;

       else
       {
            if(cnt>cnt1)
                cnt1=cnt;

            cnt=1;
        }
   }

   if(cnt>cnt1) cnt1=cnt;

    cout<<cnt1<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************










