# Accept user input for two numbers
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Accept user choice for operation
operation = input("Enter operation (+, -, *, /): ")

# Perform the selected operation and display the result
if operation == '+':
    result = num1 + num2
elif operation == '-':
    result = num1 - num2
elif operation == '*':
    result = num1 * num2
elif operation == '/':
    if num2 == 0:
        print("Error! Division by zero is not allowed.")
        result = None
    else:
        result = num1 / num2
else:
    print("Invalid operation")
    result = None

# Display the result if it's valid
if result is not None:
    print(f"Result: {result}")
