# Define the height of the triangle
height = 6

# Loop to print the right triangle pattern
for i in range(1, height + 1):
    for j in range(i):
        print("*", end="")
    print()
