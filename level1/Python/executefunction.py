
# ask user a function and run with x value
import code
from re import X


formula=input('Enter a function including x: ')
code="""def f(x):
    return %s
""" % formula
exec(code)
x=int(input("Enter value of x: "))
print(f(x))