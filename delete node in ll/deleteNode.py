class Solution(object):
    def deleteNode(self, node):
        while node.next != None:
            node.val = node.next.val
            node.next = node.next.next 
        
