import sys
def is_numeric(num):
    if len(num) > 1:
        return num.lstrip("-").isnumeric()
    return num.isnumeric()

def sum(op,operand1,operand2):  	
    if(op=='+'):	
        return str(int(operand1)+int(operand2))	
    elif(op=='-'):	
        return str(int(operand1)-int(operand2))	
    elif(op=='*'):	
        return str(int(operand1)*int(operand2))	

def recursion(arr,index):
    if(arr[index] != '+' and arr[index] != '-' and arr[index] != '*'):
        return arr[index],index+1
    operator= arr[index]
    operand1,next_index = recursion(arr,index+1) 
    operand2,next_index = recursion(arr,next_index)
    if(is_numeric(operand1) and is_numeric(operand2)):
        return sum(operator,operand1,operand2), next_index 
    return ' '.join((operator, operand1, operand2)), next_index

for case, line in enumerate(sys.stdin):   
    output,index=recursion(line.split(),0)
    print('Case {}: {}'.format(case+1,output))