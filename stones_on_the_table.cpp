#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    string r;

    cin>>n>>r;
    for (i=0;i<n;i++){
        if (r[i]==r [i+1])  count++;
    }
    cout<<count<<endl;
}
