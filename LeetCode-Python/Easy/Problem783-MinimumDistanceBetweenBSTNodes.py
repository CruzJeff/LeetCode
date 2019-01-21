'''
Given a Binary Search Tree (BST) with the root node root, return the minimum difference between the values of any two different nodes in the tree.

Example :

Input: root = [4,2,6,1,3,null,null]
Output: 1
Explanation:
Note that root is a TreeNode object, not an array.

The given tree [4,2,6,1,3,null,null] is represented by the following diagram:

          4
        /   \
      2      6
     / \    
    1   3  

while the minimum difference in this tree is 1, it occurs between node 1 and node 2, also between node 3 and node 2.
'''



class TreeNode:
     def __init__(self, x):
        self.val = x
        self.right = None


class Stack:
     def __init__(self):
         self.items = []

     def isEmpty(self):
         return self.items == []

     def push(self, item):
         self.items.append(item)

     def pop(self):
         return self.items.pop()

     def peek(self):
         return self.items[len(self.items)-1]

     def size(self):
         return len(self.items)
        
class Solution:
    def minDiffInBST(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        MIN = 99999
        previous = None
        stack = Stack()

        while root != None or not stack.isEmpty():
            if root != None:
                stack.push(root)
                root = root.left
            else:
                root = stack.pop()
                if previous != None:
                    MIN = min(MIN,abs(root.val - previous.val))
                previous = root
                root = root.right
        return MIN
    