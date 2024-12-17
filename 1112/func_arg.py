def f(*args): # (a, b =0)
    sum = 0
    for i in args:
        sum += i
    return sum # args[]

result = f(4, 5, 10, 45, 97, 102)  #(4, 5, 10, 45, 97, 102)
print(result)