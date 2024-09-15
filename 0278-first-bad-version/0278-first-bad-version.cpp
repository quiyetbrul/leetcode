// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        // 1, 2, 3, 4, 5
        int left = 1;
        int right = n;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(isBadVersion(mid)){
                right = mid - 1;
            }else left = mid + 1;
        }

        return left;
    }
};