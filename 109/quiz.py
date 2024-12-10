d = {
    "Capital of Bulgaria ?": "sofia",
    "Capital of France ?": "paris",
    "4+4 = ": "8"
}

for key in d:
    print(key)
    answer = input("enter answer:")
    if d[key] == answer.lower():
        print("veren")
    else:
        print("greshen")