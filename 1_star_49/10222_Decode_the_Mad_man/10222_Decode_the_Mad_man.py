#10222 Decode the Mad man (暴力解法)
dictionary = {'e':'q','d':'a','c':'z','r':'w','f':'s','v':'x','t':'e','g':'d',
              'b':'c','y':'r','h':'f','n':'v','u':'t','j':'g','m':'b','i':'y',
              'k':'h',',':'n','o':'u','l':'j','.':'m','p':'i',';':'k','/':',',
              '[':'o',"'":'l',']':'p','2':'`','3':'1','4':'2','5':'3','6':'4',
              '7':'5','8':'6','9':'7','0':'8','-':'9','=':'0','\\':'['}

def main():
        sentence = input() 	 
        list1 = [dictionary.get(ch, ch) for ch in sentence]
        print("".join(list1))

while True:
    main()

#Example input:
# k[r dyt i[o
# p '[nt ]y[jyd.