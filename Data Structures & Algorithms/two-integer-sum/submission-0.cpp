class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> myMap;

        for(int i = 0; i < nums.size(); i++){
            if(myMap.find(target - nums[i]) != myMap.end()){
                return vector<int>{myMap[target - nums[i]], i};
            }
            else{
                myMap[nums[i]] = i;
            }
        }

        return vector<int> {-1, -1};
    }
};
