<<<<<<< HEAD
/* CruzJeff solved on 6/30/18

Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example:
Given a = 1 and b = 2, return 3.

Credits:
Special thanks to @fujiaozhu for adding this problem and creating all test cases.

*/

class Solution {
public:
    int getSum(int a, int b) {
        
        
        while (b != 0){
            
            int carry = a & b;
            
            a = a ^ b;
            
            b = carry << 1;
            
            
        }
        
        return a;
    }
=======
/* CruzJeff solved on 6/30/18

Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example:
Given a = 1 and b = 2, return 3.

Credits:
Special thanks to @fujiaozhu for adding this problem and creating all test cases.

*/

class Solution {
public:
    int getSum(int a, int b) {
        
        
        while (b != 0){
            
            int carry = a & b;
            
            a = a ^ b;
            
            b = carry << 1;
            
            
        }
        
        return a;
    }
>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
};