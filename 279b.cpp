
 
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
ll t,n,m,a=0,b=0,c=0,d=0,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];


 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
 
int main()
{
    fast;  
    cin>>n>>m;
    vector<ll>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
        cnt+= v[i];
    }
    if(cnt<=n) cnt1 = n;
    cnt=0;
    if(cnt1 != n){
        for(i=0;i<n;i++){
            while(j<n && cnt+v[j]<=m){
                cnt+=v[j];
                j++;
            }
            cnt1 = max(cnt1, j-i);
            cnt -= v[i];
        }
    }
    cout<<cnt1<<endl;
    done;   
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************