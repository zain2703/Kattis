import sys
from collections import deque 

def sum(op,operand1,operand2):  
    print(op,operand1,operand2)
    if(op=='+'):
        s=int(operand1)+int(operand2)
        return (s)
    elif(op=='-'):
        s=int(operand1)-int(operand2)
        print(s)
        return (s)
    elif(op=='*'):
        s=int(operand1)*int(operand2)
        return (s)

def printvector(arr):
        while(len(arr)>0):
#           print(arr.pop(),end= " ")
           print(arr.pop())

#for a,arr in enumerate(sys.stdin):
i=True
iterator=0
while(i):
    arr =input()
    arr=arr.split()
    arr.reverse()
    for index,x in enumerate(arr):
        print(index,x)
        if(x=='*'or x=='+' or x=='-'): 
            if(arr[index-1].isnumeric() and arr[index-2].isnumeric()):
                new=sum(x,arr[index-1],arr[index-2])
                arr[index]= new
                arr.pop(index-1) 
                arr.pop(index-2)
    iterator=iterator+1
    print(f'Case {iterator}: {arr.pop()}')

