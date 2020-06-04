class Solution(object):
    def deleteNode(self, node):
        while node.next != None:
            node.val = node.next.val
            
            if node.next.next == None:
                node.next = None
            else:
                node = node.next
        
