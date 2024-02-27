#11150 - Cola
while True:
    try:
        N = int(input())
        cola = N
        empty = 0
        while cola >= 3:    #一次以喝三瓶為單位
            empty += 3
            cola -= 2       # (-3 + 1 = 2)

        if cola == 2:       
            empty += 3      #剩兩瓶，跟朋友借一空瓶
        else:  
            empty += cola   # (cola == 0 or cola == 1)

        print(empty)

    except EOFError:
        break

#PYTH3 AC 0.020

    

