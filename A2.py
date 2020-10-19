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
iterator=0
while(i):
    arr = sys.stdin.readline()
    print(arr)
    arr=arr.split()
    arr.reverse()
    output=" "
    for index,x in enumerate(arr):
#        print(index,x)
#        output=str(" ") + str(x) + str(output)
        output=" ".join((x,output))
        print(output)
        if(x=='*'or x=='+' or x=='-'): 
            if(arr[index-1].isnumeric() and arr[index-2].isnumeric()):
                print(index,x,arr[index-1],arr[index-2])
                print(output)
                new=sum(x,arr[index-1],arr[index-2])
                arr[index]= new
                output.replace(str(x),str(new))
            ##    output=str(output) + str(new) 
                arr.pop(index-1) 
#                output[1:]
                arr.pop(index-2) 
#                output[1:]
            ##    print(output)
        ##    else:
         ##       output= str(output) + str(x) 
           ##     print(output)
       ## else:
        #    output=str(output) + str(x)
      #  print(output)
    iterator=iterator+1
#    arr.reverse()
 #   print('Case {}: {}'.format(iterator, printvector(arr)))
    #print(f' Case {iterator}:')
    print(arr) 
    print(output)
#    str1= " "
#    listtostr = ' '.join([str(elem) for elem in str1])
#    print(listToString(arr))
    arr.clear()