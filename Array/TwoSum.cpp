#include <iostream>
#include <vector>
using namespace std;

vector<int> InputVector(int n)
{
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        input.push_back(ele);
    }

    return input;
}

void PrintVector(vector<int> result)
{
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target && i != j)
            {
                result.push_back(i);
            }
        }
    }
    return result;
}

int main()
{

    int n;
    cin >> n;
    int target;
    cin >> target;

    vector<int> nums;

    nums = InputVector(n);

    vector<int> result;
    result = twoSum(nums, target);

    PrintVector(result);

    return 0;
}