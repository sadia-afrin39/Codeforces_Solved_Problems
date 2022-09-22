//*****Bismillahir Rahmanir Rahim*****
//Coder:Sadia Afrin Tarin
//Dept. of Computer Science & Engineering(2017-2018)
//University of Barisal..........
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;

    string name[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    cin>>n;

    int m= 1;

    while (m* 5 < n)
    {
        n -= m * 5;
        m*= 2;
    }


    cout << name[(n - 1) / m] << endl;

    return 0;
}

