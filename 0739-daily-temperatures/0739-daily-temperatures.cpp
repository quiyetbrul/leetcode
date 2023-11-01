class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> stk;
        int n = temperatures.size();
        for(int i=n-1; i>=0; i--){
            int val = 1;
            int element = temperatures[i];
            if(stk.empty()) temperatures[i] = 0;
            else{
                while(!stk.empty() && stk.top().first <= temperatures[i]){
                    val+= stk.top().second;
                    stk.pop();
                }
                (stk.empty()) ? temperatures[i] = 0 : temperatures[i] = val;
            }  
            stk.push({element, val});
        }

        return temperatures;
    }
};