public class Solution {
    public int DistributeCandies(int[] candies) {
        var candiesHash = new HashSet<int>(candies);
        
        return Math.Min(candiesHash.Count, candies.Length/2);
    }
}