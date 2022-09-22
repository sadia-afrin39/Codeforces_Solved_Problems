//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d,cnt=0;

    cin>>k>>l>>m>>n>>d;

    if(k=='1'||l=='1'||m=='1'||m=='1') cout<<d<<endl;

    else
    {
        for(int i=1;i<=d;i++)
        {
            if(i%k!=0 && i%l!=0 &&  i%m!=0 &&  i%n!=0 ) cnt++;
        }
        cout<<d-cnt<<endl;
    }
    return 0;

}
