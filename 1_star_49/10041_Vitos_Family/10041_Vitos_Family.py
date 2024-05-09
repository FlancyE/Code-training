#10031 Vito's Family (Refer to others' example)
#https://blog.iddle.dev/public/2023/03/18/Python-UVa-10041-Vito-s-Family/

def distance(n, nums):
    nums.sort()
    mid = nums[n//2]
    ans = 0
    for i in nums:
        ans += abs(i - mid)
    return ans

T = int(input())
for t in range(T):
    n = list(map(int, input().split()))
    print(distance(n[0], n[1:]))
    
#PYTH3 0.050