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
int t,n,m,a,b,c=0,d=0,p,q,i,j=0,k,cnt=0,cnt1=0,cnt2=0;
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
    cin>>t;
    while(t--)
    {
        cnt=cnt1=0;
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++) cin>>ar[i];
        for(i=0;i<n;i++){
            if(i%2 == 0){
                if(ar[i]%2 != 0) cnt++;
            }else{
                if(ar[i]%2 == 0) cnt1++;
            }
        }
        if(cnt==cnt1) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************

