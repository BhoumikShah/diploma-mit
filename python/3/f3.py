list1 = [1, 2, 3, 4, 5]
list2 = [3, 9, 5, 6, 7]
common_items = list(set(list1) & set(list2))
print(f"Common items between list1 and list2: {common_items}")
