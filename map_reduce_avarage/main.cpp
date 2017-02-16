#include <iostream>
#include <map>
#include <vector>

using namespace std;

pair<int, int> _map(int i){
    pair<int, int> p{0, i};
    return p;
}

pair<int, int> reduce(int key, vector<int> val){
    int sum = 0;
    for(int i = 0; i < (int)val.size(); i++){
        sum += val[i];
    }
    pair<int, int> p{key, sum / (int)val.size()};
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
        cout << reduce(i.first, i.second).second << endl;
    }
}

int main()
{
    vector<int> vec{3,4,6,2,6,7,1,3,5};
    map_reduce(vec);
    return 0;
}
