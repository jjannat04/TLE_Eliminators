#include<bits/stdc++.h>
using namespace std;


bool isbeautiful(int a[] , int n)
{
    int g=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            g=min(__gcd(a[i], a[j]), g);
        }
    }
    if(g>2)
    return false;
    else
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(isbeautiful(a,n))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}