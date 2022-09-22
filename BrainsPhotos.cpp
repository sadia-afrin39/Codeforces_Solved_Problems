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
int ar[1000000],a,b,c,d,p,q,i,j,cnt=0,cn1=0,cnt2=0;
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
    cin>>a>>b;

    for(i=0;i<a*b;i++)
    {
        cin>>sarr[i];

        if(sarr[i]=="W"||sarr[i]=="B"||sarr[i]=="G")  cnt++;
    }

    if(a*b==cnt)    cout<<"#Black&White"<<endl;

    else cout<<"#Color"<<endl;

    return 0;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************
