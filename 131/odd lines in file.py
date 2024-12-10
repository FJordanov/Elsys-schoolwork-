f  = open("text.txt", "r")
odd_line = True
with open("text.txt") as f:
    for line in f:
        if odd_line:
            print(line.strip())  
        odd_line = not odd_line  \