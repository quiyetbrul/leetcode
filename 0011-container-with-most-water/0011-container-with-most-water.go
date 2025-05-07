func maxArea(height []int) int {
    lo := 0
    hi := len(height) - 1

    max := 0

    for lo < hi{

        l := hi - lo
        h := 0

        if height[lo] < height[hi]{
            h = height[lo]
            lo++
        }else{
            h = height[hi]
            hi--
        }

        v := l * h

        if v > max{
            max = v
        }
    }

    return max
}