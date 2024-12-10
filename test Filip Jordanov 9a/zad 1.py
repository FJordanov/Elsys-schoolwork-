numbers = input("Enter numbers (split whit a space): ").split()

numbers = [int(num.strip()) for num in numbers]

uneven_numbers = [num for num in numbers if num % 2 != 0]

if uneven_numbers:
    max_odd = max(uneven_numbers)
    print(f"Bigest uneven: {max_odd}")
else:
    print("Only even numvers.")
