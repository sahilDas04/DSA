def linear_search(nums, target):
    n = len(nums)

    for i in range(n):
        if nums[i] == target:
            return i+1
    
    return -1

if __name__ == '__main__':
    user = input("Enter the array seprated by spaces : ")
    nums = [int(i) for i in user.split()]
    target = int(input("Enter the target : "))
    print(f"The second largest element in the array : {linear_search(nums, target)}")