#include<iostream>
#include<vector>
/*Q:找出数组中特定的两个数，让他们加起来等于target，最后返回两个数字的下标
 *
 */
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> indices(2);
        for(int i=0;i<nums.size();i++){
        	for(int j=i+1;j<nums.size();j++){
        		if((nums[i]+nums[j])==target){
        			indices[0]=i;
        			indices[1]=j;
				    return indices;
        		}
        	}
		}
		return indices;
    }
};
int main(){
	Solution sol;
	vector<int> nums;
	nums.push_back(7);
	nums.push_back(4);
	nums.push_back(2);
	nums.push_back(3);
	int target=9;
	vector<int> res=sol.twoSum(nums,target);
	for(int i=0;i<res.size();i++)
		cout<<res[i]<<endl;
	return 0;
} 
