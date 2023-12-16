#include<bits/stdc++.h>
using namespace std; 
//dereference
void fun(int * p)
{
    * p = 20; 
}
//reference
void fun2(int * & p_2)
{
    p_2=NULL; 
}
int main()
{
    int val =10; 
    int * ptr= &val; 
    fun(ptr); 
    cout<<*ptr<<endl;
    fun2(ptr);
    cout<<ptr<<endl; 


    

    return 0; 
}