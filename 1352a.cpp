 
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
int t,n,m,a=0,b=0,c=0,d=0,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
int ar[10001];
//char s;
 
 
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
        cnt= 0, cnt1=0;
        cin>>n;
        if(n>=1000){
            cnt1 = n % 1000;
            ar[cnt++]=n-cnt1;
            n%=1000;
        }
        if(n >= 100){
            cnt1=n%100;
            ar[cnt++]=n-cnt1;
            n%=100;
        }
        if(n >= 10){
            cnt1=n%10;
            ar[cnt++]=n-cnt1;
            n%=10;
        }
        if(n<10 && n>0){
            ar[cnt++]=n;
        }
        vector<int>va;
        for(int i=0; i<cnt; i++){
            va.push_back(ar[i]);
        }
        cout<<va.size()<<endl;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************