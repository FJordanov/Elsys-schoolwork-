def main():
    d = {"company": "Test", "inventory": []}
    count = get_item_count()
    d["inventory"] = get_inventory_items(count)
    display_inventory(d)

def get_item_count():
    count = int(input("Enter number of items for inventory: "))
    return count

def get_inventory_items(count):
    inventory = []
    for i in range(count):
        item = input(f"Enter item {i+1} for inventory: ")
        inventory.append(item)
    return inventory

def display_inventory(d):
    print(d)

if __name__ == "__main__":
    main()