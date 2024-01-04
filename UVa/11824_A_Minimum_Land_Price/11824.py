#11824 A minimum land price

def count_price(nums):
	sum = 0
	nums.sort(reverse=True)
	for i in range(len(nums)):
		sum += 2 * (nums[i] ** (i + 1))
	return sum if sum < 5000000 else "Too expensive"

T = int(input())
nums = []
for _ in range(T):
	nums = []
	while True:
		L = int(input())
		if L == 0:
			print(count_price(nums))
			break
		nums.append(L)