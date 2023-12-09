try:
    user_input = input("Enter an integer: ")
    if not user_input.isdigit():
        raise ValueError("Error: Input is not a valid integer.")
    value = int(user_input)
    print(f"You entered: {value}")
except ValueError as e:
    print(e)
