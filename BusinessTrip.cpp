
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
int ar[13];
long int a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
//string s2;
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
    cin>>a;

    for(i=0;i<12;i++) cin>>ar[i];

    if(a==0)
    {
       cout<<"0"<<endl;done;
    }

    sort(ar,ar+12);

    //for(i=0;i<12;i++) cout<<ar[i];

    for(j=11;j>=0;j--)
    {
        cnt+=ar[j];

        cnt1++;

       // cout<<cnt<<' '<<cnt1<<endl;

        if(cnt>=a)
        {
            cout<<cnt1<<endl;
            done;
           // cnt2=1;
           // break;
        }
    }
    cout<<"-1"<<endl;
    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************


