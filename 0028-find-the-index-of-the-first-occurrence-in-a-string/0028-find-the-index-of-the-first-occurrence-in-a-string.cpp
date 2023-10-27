class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSize = needle.length();
        int haystackSize = haystack.length();

        if (needleSize == 0) return 0;

        for (int i = 0; i <= haystackSize - needleSize; i++) {
            int j = 0;
            while (j < needleSize && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == needleSize) return i;
        }

        return -1;
    }
};
