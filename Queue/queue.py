class Solution(object):
        
    def reconstructQueue(self, people):
        queue =[]
        people.sort(key = lambda x:(x[0],-x[1]))
        for person in people[::-1]:
            queue.insert(person[1],person)            
        
        return queue
