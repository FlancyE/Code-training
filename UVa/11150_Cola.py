#UVa 11150 - Cola
while True:
    try:
        N = int(input())
        cola = N
        empty = 0
        while cola >= 3:  
            empty += 3
            cola -= 2     

        if cola == 2:      
            empty += 3      
        else:  
            empty += cola  

        print(empty)

    except EOFError:
        break
    
    

