class Node:
    def __init__(self,data,next_node=None):
        self.data=data
        self.next=next_node
class ListNode:
    def __init__(self):
        self.head=None
    def prepend(self,data):
        self.head=Node(data,next_node=self.head)
    def append(self,data):
        if self.head is None:
            self.head=Node(data)
            return
        cur=self.head
        while cur.next:
            cur=cur.next
        cur.next=Node(data)
    def insert(self,index,data):
        if index==0:
            self.prepend(data)
            return
        if index<0:
            return
        cur=self.head
        i=0
        while cur.next and i<index-1:
            cur=cur.next
            i+=1
        if cur.next is Node:
            return
        cur.next=Node(data,next_node=cur.next)
    def find(self, value):
        temp = self.head
        s = 0
        while temp.data != None and temp.data != value:
            temp=temp.next
            s+=1
            
                
            

    def delete(self,data_key):
        prev=None
        cur=self.head
        while cur and cur.data!=data_key:
            prev=cur
            cur=cur.next
        if cur is None:
            return False
        if prev is None:
            self.head=cur.next
        else:
            prev.next=cur.next
    def __iter__(self):
        cur=self.head
        while cur:
            yield cur.data
            cur=cur.next
    def __repr__(self):
        return '→'.join(map(str,self))+ '→None'

salam=ListNode()
salam.append(2)
salam.prepend(1)
print(salam )
salam.insert(1,3)
salam.find()
print(salam)