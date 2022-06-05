num=int(input("Enter numbers of line : "))
for i in range(num):
    for j in range(i+1):
        print('*',end=' ')
    print()
    
for i in range(num,1,-1):
    for j in range(1,i):
        print('*',end=' ')
    print()
