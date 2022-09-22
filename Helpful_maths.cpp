#include<iostream>
#include<algorithm>
using namespace std;
int a[101];

int main()
{
    string s;
    int i,k=1,len;
    cin>>s;
    len=s.length();

    for(i=0;i<len;i++)
    {
        a[0]=s[0]-'0';
        if(s[i]=='+')
        {
            a[k]=s[i+1]-'0';
             k++;

        }
    }
    sort(a,a+k);

    for(i=0;i<k;i++)
    {
        cout<<a[i];
        if(i==(k-1))
        {
            break;
        }
        cout<<"+";
    }
}
