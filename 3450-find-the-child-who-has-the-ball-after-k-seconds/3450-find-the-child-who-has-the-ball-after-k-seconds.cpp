class Solution {
public:

    // it's a circular array problem!

    /*
        determine full cycle length
        determine the time constrained by given length
        determine the position within cycle
    */
    int numberOfChild(int n, int k) {
        int cycle = 2 * (n-1);
        int time = k % cycle;

        // if time < n, ball hasn't reached the right end
        return time < n ? time : cycle - time;
    }
};