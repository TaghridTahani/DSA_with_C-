#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t; 
    cin>>t; 
    for(int i=0; i<t; i++)
    {
        bool flag=true; 
        int n;
        cin>>n; 
        int a[n]; 
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(int j=0; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(a[j]>a[k])
                {
                    flag=false; 
                    break;
                }
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0; 
}