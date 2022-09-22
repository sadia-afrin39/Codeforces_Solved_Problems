//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;

    int upp=0,low=0;

    int ln=s.length();

    for(int i=0;i<ln;i++)
    {
        if(isupper(s[i])) upp++;

        else low++;
    }

    if(upp>low)
    {
        for(int j=0;j<ln;j++)
        {
            s[j]=toupper(s[j]);
        }
    }

    else
    {
        for(int j=0;j<ln;j++)
        {
            s[j]=tolower(s[j]);
        }

    }

    cout<<s<<endl;
    return 0;
}
