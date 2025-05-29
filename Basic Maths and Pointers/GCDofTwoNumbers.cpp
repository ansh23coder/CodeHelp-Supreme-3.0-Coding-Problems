// https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

/*

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int result = min(a, b);
        
        while(result > 0){
            if(a % result == 0 && b % result == 0) {
                break;
            }
            result--;
        }
    }
    return result;
};

*/