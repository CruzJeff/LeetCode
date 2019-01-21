<<<<<<< HEAD
/* CruzJeff solved on 6/30/18
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?
*/

class Solution {
public:
    int addDigits(int num) {
        
        if (num == 0)
            return 0;
        
        else if (num % 9 == 0)
            return 9;
        
        else
            return num % 9;
            
        
    }
=======
/* CruzJeff solved on 6/30/18
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?
*/

class Solution {
public:
    int addDigits(int num) {
        
        if (num == 0)
            return 0;
        
        else if (num % 9 == 0)
            return 9;
        
        else
            return num % 9;
            
        
    }
>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
};