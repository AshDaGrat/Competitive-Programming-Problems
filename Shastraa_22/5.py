#https://codeforces.com/gym/403917/problem/E

t = int(input())
for i in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]
    a.sort()
    y = False
    for i in a:
        if y == False:
            for j in a:
                if i == 2*j:
                    y = True
                    break
        else:
            break
    if(y):print("YES")
    else:print("NO")