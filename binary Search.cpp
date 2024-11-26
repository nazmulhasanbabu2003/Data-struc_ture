#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[ ],int n,int x)
{
    int mid,left,right;
    left = 0;
    right = n-1;
    while(left <= right)
    {
        mid = (left + right )/2;
        if ( a[mid] == x)
        {
            return mid;
        }
        if( a[mid] < x)
        {
            left= mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for( int i = 0 ; i < n ;i++)
    {
        cin>>a[i];
    }
    // int n= sizeof(a)/sizeof(a[0]);
    int value;
    cin>>value;
    int result = binary_search(a,n,value);
    if ( result != -1)
    {
        cout<<"Element found at index: " <<result;
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}
