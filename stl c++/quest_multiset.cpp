#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,multiset<string> > marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto cur_it= --marks_map.end();
    while(true)
    {
        auto &students =(*cur_it).second;
    int marks =(*cur_it).first;
    for(auto student : students)
    {
        cout<<student<<" "<< marks<<endl;
    }
    if(cur_it==marks_map.begin())
    
    break;
    cur_it--;
    
    }


    return 0;
}