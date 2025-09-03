class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        string res = "";
        
        char pre = ' ';
        
        for(char c:s){
            if(c!=pre){
                res.push_back(c);
            }
            pre = c;
        }
        
        return res;
    }
};