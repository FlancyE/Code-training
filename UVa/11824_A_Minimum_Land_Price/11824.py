#11824 A minimum land price

def count_price(nums):
	sum = 0
	nums.sort(reverse=True)     #由大到小排序，為了得到最小的總和 (一般是由小到大)
	for i in range(len(nums)):
		sum += 2 * (nums[i] ** (i + 1))     # 2 * (X^i)
	return sum if sum < 5000000 else "Too expensive"   

T = int(input())       
for _ in range(T):
	nums = []				#初始化一個list
	while True:
		L = int(input())    #每塊土地的價格
		if L == 0:
			print(count_price(nums))
			break
		nums.append(L)  #把L添加到nums裡面