//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........

//*************************************
//*                                   *
//*-------Declaration Part------------*
//*                                   *
//*************************************

#include<bits/stdc++.h>
using namespace std;
const double PI = 2*acos(0.0);
typedef long long int ll;
int ar[1000000],a,b,c,d,p,q,i,j,cnt=0,cnt1=0,cnt2=0;
string s;
string sarr[10000];
int arr[1000][1000];


//*************************************
//*                                   *
//*-------Main Function Part----------*
//*                                   *
//*************************************

int main()
{
    int n, m;
	cin >> n >> m;
	int Click = 0;
	if(m < n)
	{
		cout << n - m << endl;
		return 0;
	}
	while(n < m)
	{
		if(m % 2 == 0)
		{
			m /=2;
		}
		else
		{
			m ++;
		}
		Click++ ;
		//cout<<m<<' ';
	}
	cout << abs(Click + n - m) <<endl;

	return 0;
}

 //@@@@@@%%%%% ALHAMDULILLAH %%%%%@@@@@

//*************************************
//*                                   *
//*-------//Happy Coding//------------*
//*                                   *
//*************************************

