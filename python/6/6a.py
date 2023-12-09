my_dict = {'one': 1, 'four': 4, 'three': 3, 'two': 2}

# Sort in ascending order
sorted_dict_asc = dict(sorted(my_dict.items(), key=lambda item: item[1]))
print("Sorted (Ascending) Dictionary:", sorted_dict_asc)

# Sort in descending order
sorted_dict_desc = dict(sorted(my_dict.items(), key=lambda item: item[1], reverse=True))
print("Sorted (Descending) Dictionary:", sorted_dict_desc)
