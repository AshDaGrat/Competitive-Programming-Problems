#https://codeforces.com/problemset/problem/1725/B

n, d = [int(i) for i in input().split()]
x = [int(i) for i in input().split()]
x.sort(reverse=True)
s = 0
a = 0
for i in x:
    s += (d // i) +1
    if s>n: break
    a+=1
print(a)