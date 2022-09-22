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
ll n,m,a,b,c,d,p,q,i,j=0,cnt=1,cnt1=1,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][100];
//char s[1000000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

   cin>>n>>m>>p>>a>>b>>c;

   if(n>a)
   {
       cout<<"NO"<<endl;
       done;
   }

   if(m>abs(n-a)+b)
    {
        cout<<"NO"<<endl;
        done;
    }

    cnt=(a+b+c)-n-m;

    if(p>cnt)
    {
        cout<<"NO"<<endl;
        done;
    }

    cout<<"YES"<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************













