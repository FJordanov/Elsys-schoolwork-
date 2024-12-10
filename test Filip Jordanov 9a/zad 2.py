numbers = input("Enter list (split whit space): ").split()

numbers = [int(num) for num in numbers]

increasing = all(numbers[i] < numbers[i + 1] for i in range(len(numbers) - 1))

if increasing:
    print("Списъкът е строго подреден")
else:
    print("Списъкът не е строго подреден")
