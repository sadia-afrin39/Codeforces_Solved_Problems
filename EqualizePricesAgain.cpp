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
int ar1[101];
//set<int>tarin;
unsigned long long int n,m,a,b,c,d,p,q,i,j,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];
//string sarr[10000];
//int arr[1000][1000];
double cnt=0;

//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;

    cin>>n;

    while(n--)
    {
        cnt=0;cnt1=0;
        cin>>m;
        for(i=0;i<m;i++){
            cin>>ar1[i];
            cnt+=ar1[i];
        }
        cnt1=(int)cnt/m;
        if(cnt1*m!=cnt) cout<<cnt1+1<<endl;
        else cout<<cnt1<<endl;
    }

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************





