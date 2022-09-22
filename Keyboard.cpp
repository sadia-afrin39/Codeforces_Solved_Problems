
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
//int n,a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
//unsigned int x,y,z;
//int ar[1000000];
//int arr[1000][1000];
string s="qwertyuiopasdfghjkl;zxcvbnm,./";
//string sar[10000];bb
//string sarr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;
    int i,j;
    char ch;
    string t;
    cin>>ch;
    cin>>t;
    //int tln=strlen(t);
    //int sln=strlen(s);

    if(ch=='L')
    {
        for(i=0;i<t.length();i++)
        {
           for(j=0;j<s.length();j++)
           {
                if(t[i]==s[j])
                {
                    cout<<s[j+1];
                    break;
                }
            }
        }
        cout<<endl;
    }

    else
    {
        for(int i=0;i<t.length();i++)
        {
           for(int j=0;j<s.length();j++)
           {
               if(t[i]==s[j])
                {
                    cout<<s[j-1];
                    break;
                }
           }
        }
        cout<<endl;
    }
    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************





