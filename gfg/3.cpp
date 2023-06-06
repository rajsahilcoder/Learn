#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
// #include<dequeue>
using namespace std;

int main()
{
    vector<int> v = {23, 54, 6};
    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
        mp[v[i]]++;
    auto key = mp.find(54);
    cout << key->first << " : " << key->second << endl;
    mp.erase(key);
    key = mp.find(54);
    cout << key->first << " : " << key->second;

    // cout << key;

    return 0;
}