class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        if(n <= 0) return {};

        // two pointer
        int left = 0;
        int right = n - 1;
        int currentSum = 0;

        // check element at index left and right
        // if added added together and is equals to target
        // return left+1, right+1
        // else check if
        //   currentSum > target, move right toward left (it's sorted)
        //   currentSum < target, move left toward right
        while(left<right){
            currentSum = numbers[left]+numbers[right];
            if(currentSum == target)
                return {left+1,right+1};
            else if(currentSum>target)
                right--;
            else if(currentSum<target)
                left++;
        }


        // brute force
        // check each element by subtracting element at i from target
        // and checking whether that target is in the array
        // optimization: create a copy of numbers in HashSet
        //               to do contains at O(1)

        // for(int i = 0; i < n; i++){
        //     int t = target - numbers[i];
        //     for(int j = 0; j < n; j++){
        //         if(i==j) continue;
        //         if(numbers[j] == t){
        //             return {i+1,j+1};
        //         }
        //     }
        // }

        return {};
    }
};