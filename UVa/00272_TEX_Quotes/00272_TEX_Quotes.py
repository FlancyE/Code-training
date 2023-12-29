#272 TEX Quotes
c = 0
while True:
	try:
		n = input()
	except EOFError:
		break	

	a = []
	for i in n:
		if i == "\"":
			if c == 0:
				a.append("``")
			else:
				a.append("''")
		else:
			a.append(i)
	print("".join(a))
