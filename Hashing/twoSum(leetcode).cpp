 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int j=0; j<nums.size(); j++){
            //  ye key avilaible hai key nahi search kar rha hai
            if(mp.count(nums[j])){
                return {j,mp[nums[j]]};
            }
            else{ 
                // aur yha value insert ho rha hai map mai
                mp[target - nums[j]]=j;
            }
        }
        return {-1,-1};
    }
