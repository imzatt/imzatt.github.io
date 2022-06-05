# 5! = 5*4*3*2*1
# recursive
# n! = f(n) = n*(n-1) * (n-2) * (n-3) * 1
# n! = n * (n-1)!

def factorial(n):
    if n==0:
        return 1
    else:
        return n*factorial(n-1) # recursive

def main():
    print('0!',factorial(0))
    print('1!',factorial(1))
    print('3!',factorial(3))
    print('6!',factorial(6))
main()