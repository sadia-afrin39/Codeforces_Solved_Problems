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
typedef long long int ll;
int ar[1000000],a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
string s;
string sarr[10000];
int arr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    cin>>a;

    cin>>s;

    for(i=0;i<a;i++)
    {
        if(s[i]=='0')   cnt++;

        else cnt1++;
    }

    cnt2=min(cnt,cnt1);


    cout<<a-2*cnt2<<endl;

    return 0;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************

