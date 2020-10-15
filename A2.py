import sys
from collections import deque 


operations = { '+':lambda a,b:a+b,
               '-':lambda a,b:a*b,
               '*':lambda a,b:a*b}


loop ="continue"
case=1
while (loop == "continue"):
    print(case)
    a,arr=enumerate(sys.stdin)
    print(arr)
    for x in reversed(arr.split()):
        print(f'The value of x = {x}')
        if x in operations:
            op=input()
        else:
            value=input()
    print(op) 
    print(value)