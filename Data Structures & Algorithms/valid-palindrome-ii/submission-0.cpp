class Solution {
public:
    bool validPalindrome(string s) {
        int left=0;
        int right= s.size()-1;
        while(left<right){
            if(s.at(left)==s.at(right)){
                left++;
                right--;
            }else{
                return ispalindrome(s,right,left+1)||ispalindrome(s,right-1,left);
            }
        } 
        return true;
    }
    private : 
    bool ispalindrome(string s,int right,int left){
        while(left<right){
            if(s.at(left)==s.at(right)){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }
};