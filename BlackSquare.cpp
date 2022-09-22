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
int ar[5];
long int a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
string s2;
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
    cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];

    cin>>s2;

    for(i=0;i<s2.length();i++)
    {
        if(s2[i]=='1') cnt+=ar[0];

        else if(s2[i]=='2') cnt+=ar[1];

        else if(s2[i]=='3') cnt+=ar[2];

        else cnt+=ar[3];
    }

    cout<<cnt<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************


