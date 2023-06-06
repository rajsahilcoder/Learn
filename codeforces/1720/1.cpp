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
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long num = a * d;
        long long den = b * c;

        if (num == den)
        {
            cout << 0 << endl;
        }
        else if ((num != 0 && den == 0) || num % den == 0 || den % num == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}