class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastIndex[256];
        for(int i = 0; i<256 ; i++){
            lastIndex[i] = -1;
        }

        int maxlen = 0;
        int start = 0;
        int n = s.length();

        for(int j = 0; j <n ; j++){
            char currentchar = s[j];

            if(lastIndex[currentchar] >= start){
                start = lastIndex[currentchar]+1;
            }
            lastIndex[currentchar] = j;
            maxlen = max(maxlen, j - start +1);
        }
        return maxlen;
    }
};