#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int>v={10,20,30,40,50};
    // vector<int>x={100,200,300}; 
    // v=x; //O(max_size), if the size was same than the time complexity would be O(1)
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" "; 
    // }
    //v.pop_back();
    //v.insert //O(n)when n=1, O(max(n,k)), k=elements 
    //v.insert(v.end(),100); //v.begin()+2
    // vector<int>v2={100,200,300}; 
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    // for(int i : v)
    // {
    //     cout<<i<<" "; 
    // }
    // v.erase(v.begin()+3); //v.begin()+2, v.begin()+4; 4 not excluded; 
    // cout<<endl; 

    for(int i : v)
    {
        cout<<i<<" "; 
    }
    cout<<endl; 
    replace(v.begin()+1,v.end(),20,2 );
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //vector<int>::iterator it; 
    auto it = find(v.begin(),v.end(), 200);
    if(it==v.end()) cout<<"NOt found"; //cout<<*it;
    else cout<<"found";
    return 0; 
}