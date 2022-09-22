//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;

	int arr[3];

	for(int i=0;i<3;++i)
    {
		cin>>s;

		arr[i]=(s[0]-'0')+(s[1]-'a')*100;
    }

	sort(arr,arr+3);

	int t1=arr[1]-arr[0],t2=arr[2]-arr[1];

	if(t1==t2&&(t1==1||t1==0))  cout<<0<<endl;

	else if(t1==0||t1==1||t1==2||t2==0||t2==1||t2==2)   cout<<1<<endl;

	else    cout<<2<<endl;

	return 0;
}
