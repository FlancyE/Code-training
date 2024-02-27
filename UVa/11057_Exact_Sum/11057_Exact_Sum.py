#11057 Exact Sum
#https://github.com/cmlaih/CPE/tree/main/1-2star/11057%20Exact%20Sum
while True:
    try:
        n = int(input())
        prices = list(map(int, input().split()))    #regular begining
        money = int(input())

        prices.sort()

        i, j = 0, n - 1
        best_i, best_j = 0, 0   #set values of prices

        while i < j:    #Binary search
            if prices[i] + prices[j] == money:
                best_i, best_j = i, j
                i += 1
                j -= 1
            elif prices[i] + prices[j] < money:
                i += 1
            else:
                j -= 1
                
        print(f"Peter should buy books whose prices are {prices[best_i]} and {prices[best_j]}.")
        print()

    except EOFError:
        break
            
#PYTH3 AC 0.090