def digits(n):
    count = 0
    while n>0:
        last = n%10
        count += 1
        n = n//10
    return count

n = int(input("Enter the number : "))
print(digits(n))