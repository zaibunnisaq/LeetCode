class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int total = 0;

        for(int i = 0; i<n ; i++){
            int curr = 0;
            int next = 0;
            if(s[i] == 'I' ) curr = 1;
            else if(s[i] == 'V' ) curr = 5;
            else if(s[i] == 'X' ) curr = 10;
            else if(s[i] == 'L' ) curr = 50;
            else if(s[i] == 'C' ) curr = 100;
            else if(s[i] == 'D' ) curr = 500;
            else if(s[i] == 'M' ) curr = 1000;

            if(i+1 < n){
                if(s[i+1] == 'I' ) next = 1;
            else if(s[i+1] == 'V' ) next = 5;
            else if(s[i+1] == 'X' ) next = 10;
            else if(s[i+1] == 'L' ) next = 50;
            else if(s[i+1] == 'C' ) next = 100;
            else if(s[i+1] == 'D' ) next = 500;
            else if(s[i+1] == 'M' ) next = 1000;
            }

            if( curr <next){
                total -= curr;
            }
            else 
            total += curr;
        }
        return total;
    }
};