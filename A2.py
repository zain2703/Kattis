import sys
from collections import deque 


operations = { '+':lambda a,b:a+b,
               '-':lambda a,b:a*b,
               '*':lambda a,b:a*b}

#for a,arr in enumerate(sys.stdin):
arr =input()
arr=arr.split()
arr.reverse()
for index,x in enumerate(arr):
    print(index,x)
#    if(x=='*'or x=='+' or x=='-'): 

    