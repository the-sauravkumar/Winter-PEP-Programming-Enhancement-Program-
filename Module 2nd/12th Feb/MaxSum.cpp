#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::max;
using std::vector;

int maxSubArray(vector<int> &nums)
{
    int maxEndingHere = nums[0];
    int maxSoFar = nums[0];

    for (int i = 1; i < nums.size(); ++i)
    {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main()
{
    vector<int> nums = {1, 3, 5, 7, 2, 6, 2};
    cout << "Maximum subarray sum: " << maxSubArray(nums) << "\n";
}
