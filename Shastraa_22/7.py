#https://codeforces.com/gym/403917/problem/G

#did not finish the program in time

def operation(i, z):
    if i//2 == 0:
        x = z[-1]
        del z[-1]
        midpoint = len(z)//2 
        z = z[0:midpoint] + [x] + z[midpoint:]  
    
    else:
        x = z[0]
        del z[0]
        midpoint = len(z)//2 
        z = z[0:midpoint] + [x] + z[midpoint:]  

t = int(input())
for i in range(t):
    n,m = [int(i) for i in input().split()]
    z = [int(i) for i in input().split()]

    p = int(input())
    r = []
    for i in range(p):
        w = [int(i) for i in input().split()]
    
    for i in range(m):
        operation(i+1, z)

    print(n, m, z, p, r, w)
    print(z)