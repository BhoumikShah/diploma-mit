my_dict = {'one': 50, 'four': 30, 'three': 40, 'two': 20, 'five': 10}

# Get the highest 3 values
highest_values = sorted(my_dict.values(), reverse=True)[:3]
print("Highest 3 Values:", highest_values)
