# Accept test marks from the user for three tests
test1 = float(input("Enter marks for test 1: "))
test2 = float(input("Enter marks for test 2: "))
test3 = float(input("Enter marks for test 3: "))

# Calculate average marks for all three tests
average1 = (test1 + test2) / 2
average2 = (test2 + test3) / 2
average3 = (test1 + test3) / 2

# Find the best average among the three
best_average = max(average1, average2, average3)

# Display the best average
print(f"The best average marks among the three tests is: {best_average}")
