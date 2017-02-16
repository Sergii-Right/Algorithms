#include <iostream>
#include <vector>
#include <map>

using namespace std;

pair<int, int> _map(int i){
    pair<int, int> p{0, i};
    return p;
}

pair<int, int> reduce(int key, vector<int> val){
    int max = val[0];
    for(int i = 0; i < (int)val.size(); i++){
        if(max < val[i]) max = val[i];
    }
    pair<int, int> p{key, max};
    return p;
}

void map_reduce(vector<int> el){
    map<int, vector<int>> mp;
    pair<int, int> p;
    for(auto i : el){
        p = _map(i);
        mp[p.first].push_back(p.second);
    }
    for(auto i : mp){
        cout << reduce(i.first, i.second).second << endl;
    }
}

int main()
{
    vector<int> vec{1,2,3,5,3,10};
    map_reduce(vec);
    return 0;
}
