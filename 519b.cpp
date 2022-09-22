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
    ll f[100001],s[100001],t[100001];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>f[i];
    m=n-1;
    for(i=0;i<m;i++)
        cin>>s[i];
    p=n-2;
    for(i=0;i<p;i++)
        cin>>t[i];
    sort(f,f+n);
    sort(s,s+m);
    sort(t,t+p);

    for(i=0;i<n;i++)
    {
        if(f[i]!=s[i])
            {
                cnt=f[i];
                break;
            }
    }
    for(i=0;i<m;i++)
    {
        if(s[i]!=t[i])
        {
            cnt1=s[i];
            break;
        }
    }
    cout<<cnt<<endl<<cnt1<<endl;
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************