def max_product(arr):
    pre = 1
    suf = 1
    ans = len(arr)

    for i in arr:
        if i == 0:
            pre = 1
            suf = 1
        
        pre = pre*i
        suf = suf*i

        ans = max(ans, max(pre, suf))
    return ans

if __name__ == "__main__":
    user = input("Enter the element in the array : ")
    list = [int(i) for i in user.split()]
    print(max_product(list))