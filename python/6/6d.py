data = [{"V": "S001"}, {"V": "S002"}, {"VI": "S001"}, {"VI": "S005"},
        {"VII": "S005"}, {"V": "S009"}, {"VIII": "S007"}]

unique_values = set(val for dic in data for val in dic.values())
print("Unique Values in the Dictionary:", unique_values)
