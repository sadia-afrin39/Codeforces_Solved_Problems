//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,x[10000]={0},p,q,m=-1;

	cin>>s>>n;

	while(n--)
	{
		cin>>p>>q;

		x[p]+=q;

		m=max(m,p);
	}
	for(int i=0;i<10000;i++)
    {
        if(s>i) s+=x[i];

    }

    (s>m?cout<<"YES":cout<<"NO");

    return 0;
}

