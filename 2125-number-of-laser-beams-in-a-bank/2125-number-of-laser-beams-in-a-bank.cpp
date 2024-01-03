class Solution {
public:
    int countOnes(const string& str) {
        int ones = 0;
        for (char c : str)
            if (c == '1')
                ones++;

        return ones;
    }

    int numberOfBeams(vector<string>& bank) {
        int total = 0;
        int previous = 0;
        
        for(const std::string& row : bank){
            int current = countOnes(row);
            if(current == 0) continue;
            total += (current*previous);
            previous = current;
        }
        
        return total;
    }
};