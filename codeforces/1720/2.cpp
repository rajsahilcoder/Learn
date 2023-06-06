#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        long long arr[n];
        long long max = 0;
        long long min = INT64_MAX;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] < min)
            {
                min = arr[j];
            }
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
    }

    return 0;
}