def unq_rev(numbers):
    unq_num = list(set(numbers))
    unq_num.reverse()
    return unq_num

numbers = [ 1, 2, 2, 4, 6, 7, 9, 9, 8]
result = unq_rev(numbers)
print(result)