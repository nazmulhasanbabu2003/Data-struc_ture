#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i , j , tmp;
    for( int i = 1 ; i < n ;i++)
    {
        //a[i] ke tmp a assing kori.
        tmp =a[i];


        //ekhon tmp er jonno upojuktto jaiga khuje ber korte hobe.
        j = i-1;
       
        while( j >= 0 && a[j] > tmp)
        {
            //a[j] ke tar porer ghore rekhe di.
            a[j+1] = a[j];
            j = j-1;
        }
        //a[j+1] hocche tmp er jonno upojukkto jaiga
        //abong seti etomoddhe amra khali kore rekhechi
        a[j+1] = tmp;
    }

    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
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
    insertion_sort(a,n);
    return 0;
}