#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
// #include <dequeue>
using namespace std;

int main()
{
    vector<int> arr = {0, 0, 0, 0, 0, 0, 0};
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    int p = arr.size();
    cout << "size of array: " << arr.size() << endl;

    for (int i = 0; i < p; i++)
    {
        if (arr[i] == 0)
        {
            arr.resize(arr.size() + 1);
            for (int j = arr.size() - 1; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }

            i++;
            arr.erase(arr.end() - 1);
            for (int i : arr)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    return 0;
}