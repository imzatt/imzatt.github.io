print("Enter any number of non negative floating point values: ")
n=int(input("How many number : "))
li=list()

for i in range(n):
    num=float(input("Enter Number : "))
    li.append(num)
    if num<0:
        print('Negative number unacceptable, Terminating........! ')
        break
else:
    sum=sum(li)
    print("Sum : ",sum)
    print ("Max : ", max(li))
    print ("Min : ", min(li))
    print ("Avg : ", sum/n)







  