r, c = [int(i) for i in input().split()]
arr = []
for i in range(r):
    arr.append([j for j in input().split()])

n = 0
cn, rn = 0,0

for i in range(r):
    a = arr[i][0]
    v = True
    for j in range(c):
        if arr[i][j]=="1":pass
        else:
            v = False
            break
    if (v and a):
        n += c
        rn += 1

for j in range(c):
    a = arr[0][j]
    v = True
    for i in range(r):
        if arr[i][j]!="1":
            v = False
            break
    if(v and a):
        n += r
        cn += 1

n-=(cn*rn)

print(n) 