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
    cin>>n;
    ll ar[n];
    for(i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    if(ar[0]==ar[n-1]){
        if(n%2==0) cnt = (n/2*(n-1));
        else cnt = (n/2*n);
    }else{
        for(i=0;i<n;i++){
            if(ar[i]==ar[0]) cnt1++; 
            if(ar[i]==ar[n-1]) cnt2++;
        }
        cnt = cnt1 * cnt2;
    }
    cout<<ar[n-1]-ar[0]<<' '<<cnt<<endl;
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************