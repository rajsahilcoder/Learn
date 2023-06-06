#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

#define forin(i,st,n) for(int i = st;i<=n;i++)
#define fordec(i,st,n) for(int i=n;i>=0;i--)


int32_t main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n  = 3;
    vector<vector<int>> matrix(n,vector<int>(n,0));
    forin(i,0,n-1)
    {
        forin(j,0,n-1)
        {
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}