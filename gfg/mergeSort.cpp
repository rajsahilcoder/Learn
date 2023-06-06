#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
void clonestack(stack<int> st, stack<int> &cloned)
{
    // code here
    while (!st.empty())
    {
        cloned.push(st.top());
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    stack<int> cloned;
    clonestack(st, cloned);
    cout << cloned.top();

    return 0;
}