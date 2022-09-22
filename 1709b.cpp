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
ll t,n,m,a,b,c=0,d=0,p,q,i,j=0,k,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//int ar[]={100,20,10,5,1};
//char s[51];
 
 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
int main()
{
    fast;   
    cin>>n>>m;
    ll ar[n+1],ar1[n+1]={0},ar2[n+1]={0};
    for(i=1;i<n+1;i++) cin>>ar[i];
    cnt=0;
    for(i=2;i<n+1;i++){
        if(ar[i]<ar[i-1])   cnt += ar[i-1]-ar[i];
        ar1[i] = cnt;
        //cout<<ar1[i]<<' ';
    } 
    cnt=0;
    for(i=n-1;i>=1;i--){
        if(ar[i]<ar[i+1]) cnt += ar[i+1]-ar[i];
        ar2[i] = cnt;
        //<<ar2[i]<<' ';
    }
    while(m--){
        cin>>a>>b;
        if(a<b) cout<<ar1[b]-ar1[a]<<endl;
        else cout<<ar2[b]-ar2[a]<<endl;
    }
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************

