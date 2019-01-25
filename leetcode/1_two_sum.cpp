class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> ret;
        for(auto i=0;i<nums.size();i++) { m[nums[i]] = i;}
        for(auto i=0;i<nums.size();i++){
            int findNum = target - nums[i];
            if(m.find(findNum)!=m.end() && m[findNum] != i){
                ret.push_back(i);
                ret.push_back(m[findNum]);
                break;
            }
        }
        return ret;
    }
};