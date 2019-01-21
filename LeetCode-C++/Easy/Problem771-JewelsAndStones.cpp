#include <string>
#include <iostream>
using namespace std;

/*
CruzJeff 3/14/18
Problem 771: Jewels and Stones
You're given strings J representing the types of stones that are jewels, and S representing the stones you have. 
 Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. 
Letters are case sensitive, so "a" is considered a different type of stone from "A".
Example 1:
Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:
Input: J = "z", S = "ZZ"
Output: 0
*/
class Solution {

public:
    int numJewelsInStones(string J, string S) {

        int result = 0;
    
        for(char& c : J) {
            for(char& c2 : S) {
                if (c == c2)
                    result += 1; 
            }
        }
            
        return result;
    }
};

int main() {

    Solution sol;
    int result = sol.numJewelsInStones("aA","AAAb");
    string S = "10";
    char test2 = S[0];
    cout << (test == test2);
    
    return 0;
}