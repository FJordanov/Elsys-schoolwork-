def facroriel(n):
    fac = 1
    for i in range(1, n+1):
        fac *= i
    print(fac)

def fibonaci(n):
    fib = 1 
    for i in range(2, n+1):
        print(fib)
        fib += i # NOT THE CORECT NEED TO ADJUST

def fib(n):
    nums = [0, 1]
    for i in range(n-2):
        nums.append(nums[-1] + nums[-2])
    print(nums)
    

def main():
    n = int(input("Enter n:"))
    if n < 1:
        print('Error: The value of n is smaler than 1!')
    else:
        facroriel(n)
        fib(n)
        fibonaci(n)
        
if __name__ == "__main__":
    main()