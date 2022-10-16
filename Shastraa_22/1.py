#https://codeforces.com/gym/403917/problem/A

n, d = [int(i) for i in input().split()]
if (d/n > 0.6):
    print("YES")
else: print("NO")