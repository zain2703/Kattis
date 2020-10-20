import sys
from collections import deque 

def recursion(arr,index):
    if(arr[0] != '+' or arr[0] != '-' or arr[0] != '*'):
        return arr[index],index+1
    operator= arr[index]
    operand1,operand1_index = recursion() 
    operand1,operand1_index = recursion()
    return 0,0

#for a,arr in enumerate(sys.stdin):
i=True
case=1
#print(fun['+'](2,3))
while(i):
    arr = sys.stdin.readline()
#    print(arr)
    arr=arr.split()
    print(arr)    
    output,index=recursion(arr,0)
