#include <iostream>
#include <map>
#include <vector>

using namespace std;

pair<int, int> _map(int i){
    pair<int, int> p{i, 0};
    return p;
}

pair<int, int> reduce(int key, int val){
    pair<int, int> p{key, val};
    return p;
}

void map_reduce(vector<int> val){
    map<int, int> mp;
    pair<int, int> p;
    for(auto i : val){
        p = _map(i);
        mp[p.first] = p.second;
    }

    for(auto i : mp){
        cout << reduce(i.first, i.first).second << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> vec{1,3,5,1,256,1,6,8,3,5,8};
    map_reduce(vec);
    return 0;
}
