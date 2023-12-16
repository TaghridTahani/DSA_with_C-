#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; //step->1
    cin>>n; //step->1
    int a[n];  //step->1
    for(int i=0; i<n; i++)
    {
        cin>>a[i]; //step->n
    }
    int s=0; //step->n
    for(int i=0; i<n; i++)
    {

        if(i%2==0)
        {
            s+=a[i]; //step->n  
        }

    }
    cout<<s; //step->n
    return 0; 
}
/*
O(n+n)=>O(2n)=>O(n)
*/