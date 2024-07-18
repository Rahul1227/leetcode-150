class Solution {
public:
    int strStr(string haystack, string needle) {
        int str1 = haystack.size();
        int str2 = needle.size();
        
        if (str2 == 0) return 0; // Edge case: empty needle

        for (int i = 0; i <= str1 - str2; i++) {
            int j;
            for (j = 0; j < str2; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == str2) {
                return i; // Found the substring
            }
        }
        return -1; // Needle not found in haystack
    }
};
