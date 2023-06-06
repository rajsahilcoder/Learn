#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main()
{
    string A = "ftvbwnimpvvbfvtot";
    string ans = "";
    map<char, int> mp;
    queue<char> ch;
    for (int i = 0; A[i]; i++)
    {
        if (mp[A[i]] == 0)
        {
            ch.push(A[i]);
            cout << "pushed: " << A[i] << " : ";
        }
        mp[A[i]]++;
        cout << "current: " << A[i] << " : " << mp[A[i]] << " : "
             << "queuefirst: " << ch.front() << " : " << mp[ch.front()] << " : ";
        if (mp[ch.front()] > 1)
        {
            cout << "popped: " << ch.front() << " : ";
            ch.pop();
            cout << " empty: " << ch.empty() << " : ";
        }
        if (ch.empty())
            ans += '#';
        else
            ans += ch.front();
        cout << " string: " << ans << endl;
    }
    cout << "final: " << ans;
    return 0;
}