num=int(input("Enter numbers of line : "))
for i in range(1,num+1):
    for j in range(1,num+1):
        if(j<=num-i):
            print(' ',end=' ')
        else:
            print('*',end=' ')
    print()

for i in range(1,num):
    for j in range(0,num):
        if(j>=i):
            print('*',end=' ')
        else:
            print(' ',end=' ')
    print()


