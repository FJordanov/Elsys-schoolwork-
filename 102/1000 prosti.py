for i in range(2,1000):  
    for k in range(2, (i//2)+1):  
        if (i % k) == 0:
            break
    else:
        print(i, "is a prime number")

#for i in range(1000):
#    prime = True
#    for k in range (2,i):
#     if i % k == 0:
#        prime = False
#     if prime == True:
#        print(i, 'is prime')