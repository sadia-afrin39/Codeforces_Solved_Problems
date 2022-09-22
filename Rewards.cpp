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
//int ar1[10000]
long int n,a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

    cin>>a>>b>>c>>d>>p>>q>>n;

    cnt=a+b+c;

    cnt1=d+p+q;

    if(cnt%5==0) n=n-(cnt/5);

    else n=n-((cnt/5)+1);

    if(cnt1%10==0) n=n-(cnt1/10);

    else n=n-((cnt1/10)+1);

    if(n>=0)cout<<"YES"<<endl;

    else cout<<"NO"<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************




