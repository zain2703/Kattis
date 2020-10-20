import sys
from collections import deque 

def sum(op,operand1,operand2):  	
#    print(op,operand1,operand2)	#    print(op,operand1,operand2)
    if(op=='+'):	#    if(op=='+'):
        return str(int(operand1)-int(operand2))	#        s=int(operand1)+int(operand2)
        return (s)	#        return (s)
    elif(op=='-'):	#    elif(op=='-'):
        return str(int(operand1)-int(operand2))	#        s=int(operand1)-int(operand2)
#        print(s)	#        print(s)
        return (s)	#        return (s)
    elif(op=='*'):	
        return str(int(operand1)-int(operand2))	

fun = {'+': lambda x,y: x+y, '-': lambda x,y: x-y,'*': lambda x,y: x*y,}

def recursion(arr,index):
    if(arr[index] not in fun):
        print (arr[index])
        return arr[index],index+1
    operator= arr[index]
    operand1,next_index = recursion(arr,index+1) 
    operand2,next_index = recursion(arr,next_index)
    print("The value of =", operator, "The value of op1=", operand1, "The value of op2=", operand2)
    if(operand1.isnumeric() and operand2.isnumeric()):
        print("The value of =", operator, "The value of op1=", operand1, "The value of op2=", operand2)
        return str(fun[operator](int(operand1),int(operand2))), next_index 
    return ' '.join((operator, operand1, operand2)), next_index

#for a,arr in enumerate(sys.stdin):
i=True
case=1
#print(fun['+'](2,3))
for line in sys.stdin.readlines():
#    print(arr)
    line=line.split()
    print(line)    
    output,index=recursion(line,0)
    print('Case {}:{}'.format(case,output))