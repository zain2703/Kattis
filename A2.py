import sys
from collections import deque 





def sum(op,operand1,operand2):  
#    print(op,operand1,operand2)
    if(op=='+'):
        s=int(operand1)+int(operand2)
        return (s)
    elif(op=='-'):
        s=int(operand1)-int(operand2)
#        print(s)
        return (s)
    elif(op=='*'):
        s=int(operand1)*int(operand2)
        return (s)

def printvector(arr):
        while(len(arr)>0):
          print(arr.pop(),end= " ")
#           print(arr.pop())

#for a,arr in enumerate(sys.stdin):
i=True
case=1
while(i):
    arr = sys.stdin.readline()
#    print(arr)
    arr=arr.split()
    arr.reverse()
    output= []
    operator=[]
    for index,x in enumerate(arr):
#        print(index,x)
#        output=str(" ") + str(x) + str(output)
#        output=" ".join((x,output))
        if(x=='*'or x=='+' or x=='-'):
            operator.append(x)
        else:
            output.append(x)
        if len(operator)>0 and len(output) >1: 
            operand1=output.pop()
            operand2=output.pop()
#            operand1.isdecimal()
            #print(operand1,operand2)
            if(operand1.isdecimal() and operand2.isdecimal()):
#                print(index,x,arr[index-1],arr[index-2])
#                print(output)
                 new=str(sum(operator.pop(),operand1,operand2))
                 output.append(new)
#                arr[index]= new
#                arr.pop(index-1) 
#                output[1:]
#                arr.pop(index-2) 
#                output[1:]
            ##    print(output)
            else:
                new1 = operator.pop()+" "+operand1+ " "+operand2
                output.append(new1)
   #     print(output)
   # print(output[0]) 
    
 #   print('\nCase {}:'.format(case))
   # print(*output, sep='')
#    if(len(output)==0):
#        print(input) """
    print('\nCase {}: {}'.format(case,output.pop()))
    case=case+1
    arr.clear()