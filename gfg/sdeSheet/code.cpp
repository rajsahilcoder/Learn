#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        double comp = (total - a[i]) / (double)2;
        // cout << "comp: " << (double)comp << endl;
        int cmp = comp;
        cout << "i: " << i << " || comp: " << comp << " || sum: " << sum << endl;
        if (comp - cmp > 0)
        {
            cout << "comp: " << comp << endl;
            sum += a[i];
            continue;
        }
        if (sum == cmp)
        {
            // cout<<i+1<<endl;
            // cout << "i: " << i << " || comp: " << comp << " || sum: " << sum << endl;
            break;

            // return i + 1;
        }
        sum += a[i];
    }

    return 0;
}