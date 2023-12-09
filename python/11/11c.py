def get_numerical_input(prompt):
    while True:
        try:
            user_input = input(prompt)
            # Try to convert the input to a float
            value = float(user_input)
            return value
        except ValueError:
            print("Error: Please enter a numerical value.")

try:
    num1 = get_numerical_input("Enter the first number: ")
    num2 = get_numerical_input("Enter the second number: ")

    result = num1 + num2
    print(f"Sum: {result}")

except TypeError as e:
    print(f"Error: {e}")
