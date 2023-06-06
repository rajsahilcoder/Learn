#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
// #include<dequeue>
using namespace std;

int main()
{
    // vector<int> v;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        sum += val;
        // v.push_back(val);
    }
    cout << sum << endl;

    return 0;
}