inp = input('Enter Fahrenheit Degree : ')
try:
    Fdegree=float(inp)
    Cdegree=(Fdegree-32)*5/9
    print(Fdegree, 'F = ',Cdegree,' C ')
except:
    print('Input Error!')