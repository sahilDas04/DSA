def second_largest(nums):
    maxi = float('-inf')
    s_maxi = float('-inf')

    n = len(nums)

    for i in range(n):
        if nums[i] > maxi:
            maxi = nums[i]
        
    for i in range(n):
        if nums[i] > s_maxi and nums[i] < maxi:
            s_maxi = nums[i]
    
    return s_maxi

if __name__ == '__main__':
    user = input("Enter the array : ")
    nums = [int(i) for i in user.split()]
    print(f"The second largest element in the array : {second_largest(nums)}")