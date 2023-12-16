#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n,q; 
    cin>>n>>q; 
    int a[n]; 
    for(int i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    sort(a,a+n);
    
    for(int i=0; i<q; i++)
    {
        int x; 
        cin>>x; 
        int l=0; 
        int r=n-1;
        int mid=0; 
        int flag=0; 
        while(l<=r)
        {
            mid=(l+r)/2; 
            if(x==a[mid])
            {
                flag=1; 
                break;
            }
            else if(x>a[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(flag==1){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }

    }
    return 0; 
}