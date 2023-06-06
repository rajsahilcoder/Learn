#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int x = 1;
    for (int i = 1; i <= 128; i += i)
        x += x;
    cout << x;

    return 0;
}