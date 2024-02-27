#10931_Parity
while True:
    try:
        t = int(input())
        if t == 0:
            break
        t0 = format(t, "b")
        d = t0.count('1')
        print(f"The parity of {t0} is {d} (mod 2).")
    except:
        break
    
#PYTH3 AC 0.080
