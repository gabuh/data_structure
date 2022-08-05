class Queue:
    def __init__(self):
        self.items =[]
    

    def is_empty(self):
        return self.items ==[];
    
    def enqueue(self,item):
        self.items.insert(0,item)

    def dequeue(self):
        return self.items.pop()

    def size(self):
        return len(self.items)


a_queue = Queue()

print(a_queue.is_empty())
a_queue.enqueue(23)
a_queue.enqueue(22)
a_queue.enqueue(21)
print(a_queue.size())
print(a_queue.dequeue())
print(a_queue.dequeue())
print(a_queue.size())

#super cool
''' OUTPUT
True
3
23
22
1
'''