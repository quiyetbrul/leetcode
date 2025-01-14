class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int l = 0;
        // int r = numbers.size() - 1;

        // while(l <= r){
        //     int sum = numbers[l] + numbers[r];
        //     if(sum > target){
        //         r--;
        //         continue;
        //     }
        //     if(sum < target){
        //         l++;
        //         continue;
        //     }
        //     if(sum == target){
        //         return {l+1, r+1};
        //     }
        // }

        // return {};

        std::unordered_map<int, int> m;

        for(int i = 0; i < numbers.size(); i++){
            m[numbers[i]] = i;
        }

        for(int i = 0; i < numbers.size(); i++){
            int comp = target - numbers[i];
            if(m.contains(comp)){
                return {i + 1, m[comp] + 1};
            }
        }

        return {};
    }
};