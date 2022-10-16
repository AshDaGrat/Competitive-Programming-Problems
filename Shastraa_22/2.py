d = int(input())
x = []
for i in range(d):
    x.append(int(input()))

for i in x:
    if i > 1:
        print(i**2//2)
    else:
        print(0)