#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[],int n, int value)
{
    int flag = 0;
    for( int i = 0 ; i < n ; i++)
    {
        if( a[i] == value)
        {
           return 1;
            break;
        }
    }
    return 0;
}
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for ( int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    int value;
    cin>>value;
    int flag = linear_search(a,n,value);
    (flag == 1) ? cout<<"Yes" : cout<<"No";
    return 0;
}
