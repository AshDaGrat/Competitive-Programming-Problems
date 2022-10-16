#https://codeforces.com/gym/403917/problem/C

t = int(input())
for i in range(t):
    a, r, b = [int(i) for i in input().split()]
    s = input()
    valid = True

    for i in range(a):
        if (b==0 or r==0):
            print("Invalid")
            valid = False
            break
        if s[i] == "R" and r!=0:
            b-=1
        elif s[i] == "B" and b!=0:
            r-=1
    if (valid):
        if(b>r):print("Bheem")
        elif(r>b):print("Ram")
        elif(r==b):print("Equal")