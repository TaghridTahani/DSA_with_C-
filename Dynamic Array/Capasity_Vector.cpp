#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int>v; 
    //cout<<v.max_size(); 
    cout<<v.capacity()<<endl;
    v.push_back(10); 
    cout<<v.capacity()<<endl; 
    v.push_back(20); 
    cout<<v.capacity()<<endl; 
    v.push_back(30); 
    cout<<v.capacity()<<endl; 
    v.push_back(50); 
    v.push_back(60); 
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100); //here capacity became 8*2=16
    cout<<v.capacity()<<endl; 
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; 
    }
    //v.clear() //delete the elemnts, do not delete the vector from memory//internally khali hoy na though, clear korleo element access kora jay.. 
    //v.clear(); 
    cout<<endl<<v.size()<<endl;
    //cout<<v.empty();  //0/1 dey 
    v.resize(2);
    v.resize(4,100);
    // v.push_back(30);
    // v.push_back(40);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; 
    }
    cout<<endl<<v.size()<<endl;

    return 0; 
}