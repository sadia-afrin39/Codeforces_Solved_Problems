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
int n,m,a,b,c,d,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][100];
string s;
map<string,int> mp;
map<string,int>::iterator it;


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s;

        mp[s]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>cnt){
            cnt=it->second;
            s=it->first;
        }
    }
    cout<<s<<endl;


}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************














