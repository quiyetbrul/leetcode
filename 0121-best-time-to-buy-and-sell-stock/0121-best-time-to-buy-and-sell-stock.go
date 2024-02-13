// time o(n), space o(1)
// sliding window algorithm
func maxProfit(prices []int) int {
    // init left, right, maxprofit, slice length
    left := 0
    right := 1
    maxprofit:= 0
    length := len(prices)
    
    if length == 0{
        return maxprofit
    }
    
    for right < length{
        if prices[left] < prices[right]{
            // check max profit
            profit := prices[right] - prices[left]
            if profit > maxprofit{
                maxprofit = profit
            }
        }else{
            // since price[right] has lower selling price,
            // update left pointer to have right pointer index value
            //
            left = right
        }
        // keep moving right pointer
        right += 1
    }
    
    return maxprofit
}