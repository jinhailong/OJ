class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
//思路，抄的，来自大神
//常量数组记录字符串中每个char的ascii码，如果char有重复，则覆盖上一个char值
//start记录上一个重复字符的位置
//maxLen则记录差异最大值
//abcabcbb