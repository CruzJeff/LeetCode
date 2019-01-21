class Stack:
    def __init__(self):
        self.__storage = []
        
    def isEmpty(self):
        return len(self.__storage) == 0

    def push(self,p):
        self.__storage.append(p)

    def pop(self):
        return self.__storage.pop()

class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
    
        pairs = {'(':')', '{':'}', '[':']' }
  
        stack = Stack()
          
        for char in s:
            if char in pairs.keys():
                stack.push(char)
            else:
                try:
                    check = stack.pop()
                except IndexError:
                    return False
                if pairs[check] == char:
                    continue
                else:
                    return False
                
        return stack.isEmpty()
            
                    
                
                 