def factorial_recursive(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial_recursive(n - 1)

def main():
    print("Factorial Calculator")

    try:
        num = int(input("Enter a non-negative integer: "))

        if num < 0:
            raise ValueError("Please enter a non-negative integer.")

        result = factorial_recursive(num)
        print(f"The factorial of {num} is: {result}")

    except ValueError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()
