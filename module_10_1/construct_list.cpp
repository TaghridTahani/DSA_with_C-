#include<bits/stdc++.h>
using namespace std; 
int main()
{
    //list<int>myList; 
    //list<int>myList(10);
    list<int>list2 = {1}; 
    //list<int>myList(10,5);
    list<int>myList(list2);  
    cout<<myList.size()<<endl; 
    for(auto it=myList.begin(); it!=myList.end(); it++)
    {
        cout<<*it<<endl; 
    }
    return 0; 
}