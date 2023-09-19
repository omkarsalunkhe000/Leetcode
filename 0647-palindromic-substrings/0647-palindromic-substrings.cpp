class Solution {
public:
    int expandAround(string s, int i, int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        int n= s.length();
        for(int i=0;i<n;i++){
            //odd
            int oddKaCount= expandAround(s, i, i);
             count= count+ oddKaCount;
            //even 
            int evenKaCount= expandAround(s, i, i+1);
             count= count+ evenKaCount;
        }
        return count;
    }
};