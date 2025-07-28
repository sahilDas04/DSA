def largest(arr):
    n = len(arr)

    maxi = -111

    for i in range(n):
        if arr[i] > maxi:
            maxi = arr[i]

    return maxi

if __name__ == '__main__':
    user = input("Enter the array : ")
    list = [int(i) for i in user.split()]
    print(largest(list))