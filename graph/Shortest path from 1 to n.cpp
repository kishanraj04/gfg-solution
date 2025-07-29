class Solution {
  public:
    int minimumStep(int n) {
        int steps=0;
        while(n>=1){
            steps++;
            if(n%3==0){
                n/=3;
            }else{
                n--;
            }
        }
        
        return steps-1;
    }
};

