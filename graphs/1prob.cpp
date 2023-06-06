#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#include<vector>

const int N = 100005;
vector<int> adj_list[N];
bool visited[N];
void dfs(int current)
{
    visited[current] = true;
    for(int next_vertex : adj_list[current])
    {
        if(visited[next_vertex])
        {
            continue;
        }
        dfs(next_vertex);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    int ans = 0;
    for(int i = 1;i<=n;i++)
    {
        if(visited[i])
        {
            continue;
        }
        dfs(i);
        ans++;
    }
    cout<<ans;

    return 0;
}