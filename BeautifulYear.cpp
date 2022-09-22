//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;

    cin>>y;

    while(1)
    {
        y++;

        int a= y/1000;

        int b=y/100%10;

        int c=y/10%10;

        int d=y%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)    break;

    }

    cout<<y<<endl;

    return 0;

}
