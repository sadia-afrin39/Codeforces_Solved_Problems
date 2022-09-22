//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;

    int k;

    cin>>n>>k;

    for(int i=1;i<=k;i++)
    {
        if(n%10!=0) n--;

        else n/=10;
    }

    cout<<n<<endl;
}
