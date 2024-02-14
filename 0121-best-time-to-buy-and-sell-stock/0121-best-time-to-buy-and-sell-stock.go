// time o(n), space o(1)
func maxProfitS(prices []int) int {
    maxprofit := 0
    
    // simplified
    minprice := prices[0]
    for i := 1; i < len(prices); i++ {
        minprice = min(minprice, prices[i])
        maxprofit = max(maxprofit, prices[i] - minprice)
    }
    
    return maxprofit
}

// go doesn't have min/max method for integers
func max(a,b int) int{
    if a > b {
        return a
    }
    return b
}
func min(a,b int) int{
    if a > b{
        return b
    }
    return a
}


func maxProfit(prices []int) int {
    ////  init left, right, maxprofit, slice length
    left := 0
    right := 1
    maxprofit := 0
    length := len(prices)
    
    if length == 0{
        return maxprofit
    }
    
    for right < length{
        if prices[left] < prices[right]{
            // check max profit
            maxprofit = max(maxprofit, prices[right] - prices[left])
        }else{
            // since price[right] has lower selling price,
            // update left pointer to have right pointer index value
            left = right
        }
        // keep moving right pointer
        right += 1
    }
    
    return maxprofit
}