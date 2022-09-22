//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;

    string s;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>s;

        if(s=="Icosahedron")  cnt+=20;

        else if(s=="Cube") cnt+=6;

        else if(s=="Tetrahedron")  cnt+=4;

        else if(s=="Dodecahedron") cnt+=12;

        else cnt+=8;
    }
    cout<<cnt<<endl;

    return 0;
}
