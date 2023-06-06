#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
    int arr[] = {1, 1, 5, 2, 7, 6, 1, 4, 2, 3, 2, 2, 1, 6, 8, 5, 7, 6, 1, 8, 9, 2, 7, 9, 5, 4, 3, 1};
    int n = 28;
    sort(arr, arr + n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    int n1 = 0;
    int n2 = 0;
    int n1dig, n2dig;
    if (n % 2 == 0)
    {
        n1dig = n2dig = n / 2;
    }
    else
    {
        n1dig = n / 2 + 1;
        n2dig = n / 2;
    }
    for (int i = 0; i < n; i = i + 2)
    {
        n1 += arr[i] * pow(10, n1dig - 1);
        n1dig--;
        cout << "n1: " << n1 << endl;
    }
    for (int i = 1; i < n; i = i + 2)
    {
        n2 += arr[i] * pow(10, n2dig - 1);
        n2dig--;
        cout << "n2: " << n2 << endl;
    }
    cout << n1 + n2 << endl;
    return 0;
}