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
//int ar[1000000]
long int a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
//string s;
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
    cin>>a>>b>>c;
    if(a<=b){
        cnt=a;
        cnt1=1;
    }

    if(b<a){
        cnt=b;
        cnt1=2;
    }

    if(cnt1==1)
    {
        if(a+b<=c) cnt+=a+b;
        else cnt+=c;
        cnt2=1;

        if(cnt2==1)
        {
            if(b<=a+c) cnt+=b;
            else cnt+=a+c;
        }
    }


    else if(cnt1==2)
    {
        if(b+a<=c) cnt+=b+a;
        else cnt+=c;
        cnt2=2;
        if(cnt2==2)
        {
            if(a<=b+c) cnt+=a;
            else cnt+=b+c;
        }
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


