//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,ln=0,cn=0;

    string str;

    cin>>str;

    ln =(long long int)str.length();

    for(i=0;i<ln;i++)
    {
        if(str[i]=='4' || str[i]=='7')   cn++;

    }

    if(cn==4||cn==7) cout<<"YES"<<endl;

    else   cout<<"NO"<<endl;

    return 0;
}
