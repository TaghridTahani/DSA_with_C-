// #include<bits/stdc++.h>
// using namespace std; 
// int main()
// {
//     int n,q; 
//     cin>>n>>q; 
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i]; 
//     }
//     for(int i=0; i<q; i++)
//     {
//         int l,r; 
//         cin>>l>>r; 
//         int sum=0; 
//         for(int j=l-1; j<r; j++ )
//         {
//             sum=sum+a[j]; 
//         }
//         cout<<sum<<endl; 
//     }
//     return 0; 
// }
// /*
// while(q--)
// {
    
// }
// */
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long int n,q; 
    cin>>n>>q; 
    long long int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    long long int pre[n];
    pre[0]=a[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    for(int i=0; i<q; i++)
    {
        int l,r; 
        cin>>l>>r;
        l--; 
        r--; 
        long long int sum=0; 
        if(l==0) sum = pre[r]; 
        else sum=pre[r]-pre[l-1]; 
        cout<<sum<<endl; 
         
        
    }
    return 0; 
}
