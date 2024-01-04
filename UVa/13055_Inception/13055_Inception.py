#13055 Inception

def sleep_stack(codes):
    dream = []                      #負責存放人名的Stack
    for code in codes:              #遍歷所有 codes 裡面的東西 ("Sleep Dom" => code[0] = Sleep / code[1] = Dom)
        if code[0] == "Sleep":
            dream.append(code[1])   #在 dream stack 新增人名
        elif code[0] == "Test":
            if dream:               #*如果 dream stack 不是空的
                print(dream[-1])    #print 最右邊的人名
            else:
                print("Not in a dream")
        elif code[0] == "Kick":
            if dream:
                dream.pop()         #將最右邊的元素剔除 (list的功能)
            
n = int(input())
while True:
    try:
        codes = []                  #(Sleep X / Test / Kick)
        for i in range(n):
            codes.append(input().split())   #用換行做為區分，並存進 list codes
        sleep_stack(codes)
    except EOFError:
        break