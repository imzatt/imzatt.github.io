# if
# if True or some value
# if False or o or no value
var1=100
if var1>200:
    print('Var1 has some value!')

var2=0
if var2>0:
    print('Var2 has some value!')

print('Bye')

#if else =>
var3=100
if var3>100:
    print("var3 is greater than 100")
else:
    print("Var3 is less than or equal 100")

#nested if
var4=100
if var4<200:
    print('var4 is less than 200')
    if var4==150:
        print('var4 is 150')
    elif var4==100:
        print('var4 is 100')
    elif var4==50:
        print('var4 is 50')
    elif var4<50:
        print('var4 less than 50')
else:
    print('var4 greather than or equal 200')