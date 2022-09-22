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
int n,a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
//int ar[1000000];
//int arr[1000][1000];
//string s;
string sar[10000];
//string sarr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    fast;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>sar[i];


    for(p=0;p<n;p++)
    {
            if(sar[p][0]=='O' && sar[p][1]=='O')
            {
               cnt=1;
               cout<<"YES"<<endl;
               sar[p][0]='+';
               sar[p][1]='+';

               break;
            }

            else if (sar[p][3]=='O' && sar[p][4]=='O')
            {
                cnt=1;
                cout<<"YES"<<endl;
                sar[p][3]='+';
                sar[p][4]='+';

                //cout<<"done";
                break;
            }
            //cout<<"i= "<<p<<endl;
    }

    if(cnt==1)
    {
        for(a=0;a<n;a++)
            cout<<sar[a]<<endl;
    }

    else cout<<"NO"<<endl;

    done;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************



