class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        int num = 0;

        for (int i = 0; i < size; i++) {
            int cur = romanCharToInt(s[i]);
            if (i < size - 1 && cur < romanCharToInt(s[i + 1]))
                num -= cur;
            else if (cur >= romanCharToInt(s[i + 1]))
                num += cur;
        }

        return num;
    }

    int romanCharToInt(char c) {
        switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
};