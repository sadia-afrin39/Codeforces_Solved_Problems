//Bismillahir Rahmanir Rahim
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,p=0;

    cin>>n>>a>>b>>c;

    for (int i=0;i*a<=n;i++)
	{
		for (int j=0;i*a+j*b<=n;j++)
		{
			int k=(n-i*a-j*b)/c;

			if (i*a+j*b+k*c == n)
            {
                p= max(i + j + k, p);
            }

		}
	}

    cout<<p<<endl;

    return 0;
}
