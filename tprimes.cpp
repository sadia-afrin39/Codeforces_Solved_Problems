//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
bool prime[MAX];


void sieve ()
{
    int i,j;

    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

int main()
{
    sieve();

    int n;

    long long x,sq;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;

        sq=sqrt(x);

        if(!prime[sq]&&sq*sq==x)  cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }

    return 0;
}
