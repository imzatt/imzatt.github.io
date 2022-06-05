print("Enter exactly twenty floating-point values : ")
n=20
li=list()

for i in range(n):
    num=float(input("Enter Number : "))
    li.append(num)

sum = sum(li)
min = min(li)
max = max(li)
avg = sum / len(li)
    
print ("Sum : ", sum)
print ("Max : ", max)
print ("Min : ", min)
print ("Avg : ", avg)