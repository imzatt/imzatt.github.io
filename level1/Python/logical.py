from concurrent.futures.process import _ResultItem
from unittest import result


a=True
b=False
c=a and b
d= a or b
e= not(a and b)
print('a and b: ',c)
print('a or b: ',d)
print('not(a and b): ',e)

result1=(5>4) and (1<10) and (2>4)
print('Result 1 is : ',result1)
