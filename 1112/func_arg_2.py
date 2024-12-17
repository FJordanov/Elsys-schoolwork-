def g(**kwargs): #(a, b)
    print(kwargs)

result = g(b=4, a=3, name='Atanas', family_name = 'Kozhuharov')   # (b=4. a=3)
print(result)