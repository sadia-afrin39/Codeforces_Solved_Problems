//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n,a[101],sum=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        sum+=a[i];
    }

    cout<<sum/n<<endl;

    return 0;
}
