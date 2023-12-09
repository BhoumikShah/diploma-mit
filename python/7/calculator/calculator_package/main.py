# calculator_package/main.py
from .operations import add, subtract, multiply, divide

def main():
 print("Simple Calculator")

while True:
        print("\nChoose operation:")
        print("1. Add")
        print("2. Subtract")
        print("3. Multiply")
        print("4. Divide")
        print("5. Exit")

        choice = input("Enter choice (1/2/3/4/5): ")

        if choice == '5':
            print("Exiting the calculator. Goodbye!")
            break

        if choice in ('1', '2', '3', '4'):
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))

            if choice == '1':
                result = add(num1, num2)
                print(f"{num1} + {num2} = {result}")

            elif choice == '2':
                result = subtract(num1, num2)
                print(f"{num1} - {num2} = {result}")

            elif choice == '3':
                result = multiply(num1, num2)
                print(f"{num1} * {num2} = {result}")

            elif choice == '4':
                result = divide(num1, num2)
                print(f"{num1} / {num2} = {result}")

        else:
            print("Invalid input. Please enter a valid option.")

if __name__ == "__main__":
    main()
