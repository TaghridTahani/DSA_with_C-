#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int a[4] = {12,13,14,15};
    vector<int> v(a, a+4);
    cout<<v[v.size()-1];
    return 0; 
}