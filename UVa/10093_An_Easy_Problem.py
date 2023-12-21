#10093 An Easy Problem!
while True:
    s = input()
    if not s:
        break
    
    ds="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    B = 2
    ans = -1

    for c in s:
        B = max(B, ds.find(c) + 1)

    for N in range(B, 63):
        R = 0
        for c in s:
            R = R*N + ds.find(c)
        
        if R % (N-1) == 0:
            ans = N
            break
    if ans == -1:
        print("such number is impossible!")
    else:
        print(ans)
        