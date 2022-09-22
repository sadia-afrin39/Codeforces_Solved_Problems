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
//int ar1[101];
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

   /* if (n<10){
        for(i=1;i<10;i++)
        {
            if(n%i==0) m=i;
            break;
        }
        a=n/m;

        cout<<a<<endl;

        for(j=0;j<a;j++) cout<<m<<' ';

        cout<<endl;
    }*/
    for(i=9;i>=1;i--)
    {
        if(n%i==0){
            m=i;
            break;
        }
    }
    a=n/m;

    cout<<a<<endl;

    for(j=0;j<a;j++) cout<<m<<' ';

    cout<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************









