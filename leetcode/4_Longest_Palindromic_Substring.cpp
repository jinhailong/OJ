string longestPalindrome(string s) {
    if (s.empty()) return "";
    if (s.size() == 1) return s;
    int min_start = 0, max_len = 1;
    for (int i = 0; i < s.size();) {
      int j = i, k = i;
      while (k < s.size()-1 && s[k+1] == s[k]) ++k; //忽略重复字符
      i = k+1;//从非重复字符下一个字符开始
      while (k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { ++k; --j; } //从字符的左右开始扩展.
      int new_len = k - j + 1;//统计回文字符串长度
      if (new_len > max_len) { min_start = j; max_len = new_len; }//取较大
    }
    return s.substr(min_start, max_len);
}