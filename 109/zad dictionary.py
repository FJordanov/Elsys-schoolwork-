d = {
    "company": "Test",
    "inventory": []
}

num = int(input("enter a number: "))
i = 0 

while i < num:
    word = input(f"enter word {i + 1}: ")
    d["inventory"].append(word)
    i += 1
print(d["inventory"])
