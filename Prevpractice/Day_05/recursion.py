def f1(n):
    if n == 5:
        return 0
    
    s = n + f1(n-1)
    return s

r = f1(120)
print(r)