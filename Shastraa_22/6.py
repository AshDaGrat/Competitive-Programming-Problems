#https://codeforces.com/gym/403917/problem/F

t = int(input())
for i in range(t):
    n, b = [int(i) for i in input().split()]
    z = [int(i) for i in input().split()]
    z.sort()
    s = 0
    output = False
    for i in range(n):
        s += z[i]
        if s>b:
            print(i)
            output = True
            break
    if (output == False):
        print(n)