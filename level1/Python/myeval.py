

from re import S


s = "4+5"
r = eval(s)
print(r)

s = "[1,2,3]+[4,5]"
print(type(s))
r=eval(s)
print(r)

s = " 'Hello World' "
r = eval(s) #r = Hello World
print(r)

s="r=1+1"
exec(s)
print(r)