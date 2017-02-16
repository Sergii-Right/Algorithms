#include <iostream>
#include <vector>
#include <map>

using namespace std;

pair<int,int> _map(int i){
    pair<int, int> p{i, 0};
    return p;
}

pair<int, int> reduce(int key, vector<int> val){
    pair<int, int> p{key, (int)val.size()};
    return p;
}

void map_reduce(vector<int> val){
    map<int, vector<int>> mp;
    pair<int, int> p;
    for(auto i : val){
        p = _map(i);
        mp[p.first].push_back(p.second);
    }

    for(auto i : mp){
        cout << i.first << ": " << reduce(i.first, i.second).second << endl;
    }
}

int main()
{
    vector<int> vec{1,3,5,1,256,1,6,8,3,5,8};
    map_reduce(vec);
    return 0;
}
