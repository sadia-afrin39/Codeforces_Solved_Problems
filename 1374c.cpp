 
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
//char s[201];

 
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
        cnt=cnt1=cnt2=0;
        cin>>n;
        char s[n];
        for(i=0;i<n;i++) cin>>s[i];
        for(i=0;i<n;i++){
            if(s[i]=='(' && s[i+1]==')'){
                i++;
                continue;
            }
            if(s[i]=='('){
                cnt1++;
            }
            if(s[i]==')'){
                cnt2++;
                if(cnt1<cnt2) cnt++,cnt2--;
            }
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