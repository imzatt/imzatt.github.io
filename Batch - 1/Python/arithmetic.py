# + , - , * , / , % , // , **
print('Enter 2 number for arithemetic operations!')
num1=int(input('Enter First Number : '))
num2=int(input('Enter Second Number : '))
if num2!=0:
    sum=num1+num2
    sub=num1-num2
    mul=num1*num2
    div=num1/num2
    mod=num1%num2
    expo=num1**num2
    fdiv=num1//num2
    print("num1: ",num1)
    print("num2: ",num2)
    print("SUM: ",sum)
    print("SUB: ",sub)
    print("MUL: ",mul)
    print("DIV: ",div)
    print("MOD: ",mod)
    print("EXPO: ",expo)
    print("FDIV: ",fdiv)
print("End of program!")