#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> result;
        for(int i = 0;i < nums.size();i++){
                    for(int j = i + 1;j < nums.size();j++){
                        if(nums[i] + nums[j] == target){
                            result.push_back(i);
                            result.push_back(j);

                        }
                    }
                }



        return result;
    }
};
int main()
{
    Solution solution;
    vector<int> nums {2,7,11,15};
    int target = 9;
    vector<int> r = solution.twoSum(nums,target);
    for(int i=0;i<r.size();i++){
        cout<<r.at(i);
    }
    //cout<<"hello world!"<<endl;
    return 0;
}
