<<<<<<< HEAD
/* CruzJeff Solved 7/2/2018
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Example 1:
Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
Note:

The boundaries of each input argument are 1 <= left <= right <= 10000.
*/


class Solution {
public:
    
    int NumDigits(int x)  {
        
    x = abs(x);  
    return (x < 10 ? 1 :   
        (x < 100 ? 2 :   
        (x < 1000 ? 3 :   
        (x < 10000 ? 4 :   
        (x < 100000 ? 5 :   
        (x < 1000000 ? 6 :   
        (x < 10000000 ? 7 :  
        (x < 100000000 ? 8 :  
        (x < 1000000000 ? 9 :  
        10)))))))));  
}  
    vector<int> getDigits(int num) {
        
        vector<int> digits;
        int size = NumDigits(num);
        
            
            
        for (int j = 1; j < size; j++){
            digits.emplace_back(num % 10);
            num /= 10;     }


        digits.emplace_back(num % 10);
        return digits;
        
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> results;
        
        
        for (int i = left; i <= right; i++) {
            
            vector<int> digs = getDigits(i);
            
            for(auto& d : digs)
                cout << d << endl;
            
            if(std::find(digs.begin(), digs.end(), 0) != digs.end())
                continue;
                
            for (int k = 0; k < digs.size(); k++) {
                
                if (i % digs[k] != 0){
                    cout << "rejecting " << i << endl;
                    break; }
                
                else if (i % digs[k] == 0 && k == digs.size() - 1)
                    results.emplace_back(i);
                    cout << "entering " << i << endl;
        }
    }
            
        return results;
        
    } 

=======
/* CruzJeff Solved 7/2/2018
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Example 1:
Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
Note:

The boundaries of each input argument are 1 <= left <= right <= 10000.
*/


class Solution {
public:
    
    int NumDigits(int x)  {
        
    x = abs(x);  
    return (x < 10 ? 1 :   
        (x < 100 ? 2 :   
        (x < 1000 ? 3 :   
        (x < 10000 ? 4 :   
        (x < 100000 ? 5 :   
        (x < 1000000 ? 6 :   
        (x < 10000000 ? 7 :  
        (x < 100000000 ? 8 :  
        (x < 1000000000 ? 9 :  
        10)))))))));  
}  
    vector<int> getDigits(int num) {
        
        vector<int> digits;
        int size = NumDigits(num);
        
            
            
        for (int j = 1; j < size; j++){
            digits.emplace_back(num % 10);
            num /= 10;     }


        digits.emplace_back(num % 10);
        return digits;
        
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> results;
        
        
        for (int i = left; i <= right; i++) {
            
            vector<int> digs = getDigits(i);
            
            for(auto& d : digs)
                cout << d << endl;
            
            if(std::find(digs.begin(), digs.end(), 0) != digs.end())
                continue;
                
            for (int k = 0; k < digs.size(); k++) {
                
                if (i % digs[k] != 0){
                    cout << "rejecting " << i << endl;
                    break; }
                
                else if (i % digs[k] == 0 && k == digs.size() - 1)
                    results.emplace_back(i);
                    cout << "entering " << i << endl;
        }
    }
            
        return results;
        
    } 

>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
};