inputstring = input()

neg = True if(inputstring[0] == "-") else False

a = ["-"] if neg else []
for i in inputstring:
    if(i.isdigit()):
        a.append(i)

for i in a:
    print(i, end="")
