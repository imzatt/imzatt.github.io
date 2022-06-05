def yfun(t,v0):
    return v0*t + 0.5*g*t**2

def yfun2(t):
    global v0
    v0=7
    return v0*t + 0.5*g*t**2

g=9.81 #global variable
v0=6 #global variable

y1=yfun(0.1,6)
y2=yfun(0.1,v0=6)
y3=yfun(t=0.1,v0=6)
y4=yfun(v0=6,t=0.1)
y5=yfun2(0.1)

print(y1,y2,y3,y4,y5)
print(v0)