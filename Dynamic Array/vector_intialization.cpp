#include<bits/stdc++.h>
using namespace std; 
int main()
{
    //vector<int>v; //type1
    //cout<<v.size();
    // int n; 
    // cin>>n;
    //vector<int>v(5); //type 2 
    vector<int>v1(5,6); //type3
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl; 
    cout<<v1.size();
    cout<<endl; 
    vector<int>v2(v1); //type4
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl; 
    cout<<v2.size();
    cout<<endl; 
    int a[6]={10,20,30,40,50,60}; 
    vector<int>v3(a,a+6); //type 5 
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" "; 
    }
    cout<<endl;
    cout<<v3.size()<<endl;  
    vector<int>v4={2,10,3};//type 6
    cout<<endl<<v4.size()<<endl;  

    return 0; 
}