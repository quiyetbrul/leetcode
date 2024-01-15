class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        std::sort(piles.begin(), piles.end());
        
        int left = 1;
        int right = piles.back();
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            double hours = findHours(piles, mid);
            
            if (hours > h) left = mid + 1;
            else right = mid - 1;
            
        }
        return left;
    }
    
    double findHours(const std::vector<int>& piles, int mid){
        double total = 0;
        for(const int& pile : piles)
            total += std::ceil(static_cast<double>(pile) / mid);
        return total;
    }
};