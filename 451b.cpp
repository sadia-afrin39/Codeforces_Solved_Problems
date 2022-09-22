 
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
//ll ar[100001];
//set<int>tarin;
ll t,n,m,a=0,b=0,c=0,d=0,p,q,i,j=0,cnt=0,cnt1=0,cnt2=0;
//char s[2],s1[2],s2[2],s3[2],s4[2],s5[2];


 
//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************
 
int main()
{
    fast;
    cin>>n;
    ll arr[n],s[n];

    //For sorted array
    for(i=0;i<n;i++) {
        cin>>arr[i];
        s[i]=arr[i];
    }
    sort(s,s+n);
    for(i=0;i<n;i++)
        if(s[i]==arr[i]) cnt++;

    if(cnt==n){
        cout<<"yes\n1 1"<<endl;
        done;
    }
    //For unsorted array
    for(i=0;i<n-1,cnt1<1;){
        if(arr[i]<arr[i+1]) i++;
        else{
            a=b=i;
            while(arr[i]>arr[i+1] && i<n-1){
                i++;
                b++;
            }
            sort(arr+a,arr+b+1);
            cnt1++;
        }
    }

    for(i=0;i<n;i++){
        if(s[i] != arr[i]){
            cout<<"no"<<endl;
            done;
        }
    }

    cout<<"yes\n"<<a+1<<" "<<b+1<<endl;
    done;
}
 
 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@
 
//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************