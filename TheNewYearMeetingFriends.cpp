//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];

    for(int i=0;i<3;i++)    cin>>a[i];

    sort(a,a+3);

   //int p=(m>a)?m-a:a-m;

   // int q=(m>b)?m-b:b-m;

   // int r=(m>c)?m-c:c-m;

   a[0]=a[1]-a[0];

   a[2]=a[2]-a[1];

    cout<<a[0]+a[2]<<endl;

    return 0;
}
