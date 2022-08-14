#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(binary_search(a,a+n,8))
    {
        cout<<1;
    }
    else
    {cout<<0;}
}
