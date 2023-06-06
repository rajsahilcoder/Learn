#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include<vector>

vector<int> twoSum(vector<int> &nums, int target)
{
    // sort(nums.begin(), nums.end());s
    vector<int> ans;
    int sum = 0;
    for (int i = 0; nums.at(i) <= target; i++)
    {

        for (int j = i + 1; nums.at(j) <= target; j++)
        {
            sum = nums.at(i) + nums.at(j);
            cout<<"sum: "<<sum<<" i: "<<i<<" j: "<<j<<endl;
            if (sum == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{3,2,4};
    
    vector<int> ans = twoSum(nums,6);
    for(int i:ans)
    {
        cout<<i<<" ";
    }

    return 0;
}