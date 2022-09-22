 
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
//ll t,n,m,a=0,b=0,c=0,d=0,p,q,i,j=0,cnt=0,cnt1=0,sum=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//char s[201];
//ll minimum = 160000000;

 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
 
int main()
{
    fast;
    vector<long long int>a;
     long long int n,k,i,x,s=0,j,ind=1,z=0;
     cin>>n>>k;
     for(i=0;i<n;i++)
     {
         cin>>x;
         a.push_back(x);
     }
     for(i=0;i<k;i++)
     {
         s=s+a[i];
     }
     z=s;
     for(i=k,j=0;i<n;i++,j++)
     {
         s=s+a[i]-a[j];
         if(s<z)
         {z=s;
             ind=j+2;
         }
     }
     cout<<ind<<endl;
  
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************