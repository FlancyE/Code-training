while True:
    try:
        ii, jj = map(int, input().split())
    except EOFError:
        break
    
    max_val = 0
    for k in range(min(ii, jj), max(ii, jj) + 1):       
        n = k
        c = 0   
        while n != 1:
            c += 1
            if n % 2 == 1:
                n = 3 * n + 1
            else:
                n //= 2
        c += 1
        if c > max_val:
            max_val = c
    print(ii, jj, max_val)