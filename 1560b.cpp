 
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
int t,n,m,a=0,b=0,c=0,d=0,p,q,i,j=0,cnt=-1,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//int ar[1001];
char s[201];
 
 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
 
int main()
{
    fast;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>a>>b>>c;
        p=max(a,b);
        q=min(a,b);
        cnt=p-q;
        n = cnt*2;
        if(cnt >=q && n>=c){
            if(c<=cnt) c+=cnt;
            else c-=cnt;
             cout<<c<<endl;     
        }
        else cout<<"-1"<<endl;     
    }
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************