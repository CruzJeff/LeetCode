<<<<<<< HEAD

class Solution {
public:
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        std::sort(nums.begin(), nums.end());      //sort nums
        
        std::vector<int> unique; //vector to hold the unique values of nums
        
        std::unique_copy(nums.begin(), nums.end(), std::back_inserter(unique)); //initialize unique
        
        std::vector<std::pair<int, int>> frequency; //vector of tuples that hold (value, #ofduplicates)
        
        for(int i: unique)  //initializes frequency 
            frequency.emplace_back(i, std::count(nums.begin(), nums.end(), i)); 
    
        for(const auto& e: frequency)
            std::cout << "Element " << e.first << " encountered " << e.second << " times\n"; //print frequency
        
        std::sort(frequency.begin(), frequency.end(), [](auto &left, auto &right) {
        return left.second > right.second;  });  //lambda function that sorts frequency in descending order by 2nd value of tuple
        
        for(const auto& e: frequency)
            std::cout << "Element " << e.first << " encountered " << e.second << " times\n"; //print frequency after sort

        
        std::vector<int> result; //vector to hold the result
        
        for(int i = 0; i < k; i++)
            result.push_back(frequency[i].first); //loop to get the k most duplicated values
        
        return result; //EOD
                                   
        
        
    }
};
=======
/* CruzJeff Solved 6/29/18

Given a non-empty array of integers, return the k most frequent elements.

For example,
Given [1,1,1,2,2,3] and k = 2, return [1,2].

Note: 
You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
Your algorithm's time complexity must be better than O(n log n), where n is the array's size.

class Solution {
public:
 */
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        std::sort(nums.begin(), nums.end());      //sort nums
        
        std::vector<int> unique; //vector to hold the unique values of nums
        
        std::unique_copy(nums.begin(), nums.end(), std::back_inserter(unique)); //initialize unique
        
        std::vector<std::pair<int, int>> frequency; //vector of tuples that hold (value, #ofduplicates)
        
        for(int i: unique)  //initializes frequency 
            frequency.emplace_back(i, std::count(nums.begin(), nums.end(), i)); 
    
        for(const auto& e: frequency)
            std::cout << "Element " << e.first << " encountered " << e.second << " times\n"; //print frequency
        
        std::sort(frequency.begin(), frequency.end(), [](auto &left, auto &right) {
        return left.second > right.second;  });  //lambda function that sorts frequency in descending order by 2nd value of tuple
        
        for(const auto& e: frequency)
            std::cout << "Element " << e.first << " encountered " << e.second << " times\n"; //print frequency after sort

        
        std::vector<int> result; //vector to hold the result
        
        for(int i = 0; i < k; i++)
            result.push_back(frequency[i].first); //loop to get the k most duplicated values
        
        return result; //EOD
                                   
        
        
    }
};
>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
