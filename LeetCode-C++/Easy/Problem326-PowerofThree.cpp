#include <cmath>
//CruzJeff 3/4/2018
/* Given an integer, write a function to determine if it is a power of three.

Follow up:
Could you do it without using any loop / recursion?
*/
class Solution {
    
public:
    bool is_integer(double k) {
    return ((std::ceil(k) - k) < 1.0e-10);
}
    
public:
    bool isPowerOfThree(int n) {
        
        if (n == 0) 
            return false;
        
        else {
            long double log3 = log(n)/log(3);
            return is_integer(log3); }
    }
};

int main() {

	return 0;
}



