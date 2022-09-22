//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,d=0;

    cin>>n;

    string s;

    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='D') d++;
        if(s[i]=='A') a++;
    }

    if(a>d)   cout<<"Anton"<<endl;

    if(d>a) cout<< "Danik"<<endl;

    if(a==d) cout<<"Friendship"<<endl;

    return 0;

}
