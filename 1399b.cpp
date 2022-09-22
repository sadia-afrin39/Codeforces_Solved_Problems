 
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
//int ar[51],ar1[51];
//char s[65];
 
 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
 
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        ll mina=1000000001,minb=1000000001,cnt=0;
        ll ar[n],ar1[n];
        for(i=0;i<n;i++){
             cin>>ar[i];
             if(ar[i]<mina) mina = ar[i];
        }
        //cout<<mina<<endl;
        for(i=0;i<n;i++){
            cin>>ar1[i];
             if(ar1[i]<minb) minb = ar1[i];
        }
        //cout<<minb<<endl;
        for(i=0;i<n;i++){
            cnt+= max(ar[i]-mina,ar1[i]-minb);
            //cout<<cnt<<' ';
        }
        cout<<cnt<<endl;     
    }
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************