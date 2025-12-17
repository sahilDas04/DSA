def digits(n):
    while n>0:
        last = n%10
        print(last)
        n = n//10


n = int(input("Enter the number : "))
digits(n)