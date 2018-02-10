'''
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
'''


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        num1 = ''
        num2 = ''
        ContinueLoop= True
        
        while ContinueLoop:
            
            if l1 == None:
                pass
            
            else:
                num1 += str(l1.val)
                l1 = l1.next
                
            if l2 == None:
                pass
            
            else:
                num2 += str(l2.val)
                l2 = l2.next
                
            if l1 == None and l2 == None:
                ContinueLoop=False
                             
        result = str(int(num1[::-1]) + int(num2[::-1]))[::-1]
        LinkedList = ListNode(result[0])
        LinkedList_Head = LinkedList
        for num in range(1,len(result)):
            LinkedList.next = ListNode(result[num])
            LinkedList = LinkedList.next
        return LinkedList_Head
            