#00674_Coin_Change
N = [1, 5, 10, 25, 50]     #幣值的種類 (list)

lenN = len(N)       #
maxn = 7489  
dp = [0] * maxn     
dp[0] = 1
for i in range(lenN):
    for j in range(N[i], maxn):
        dp[j] += dp[j - N[i]]

while True:
    try:
        M = int(input())
        print(dp[M])
    except:
        break