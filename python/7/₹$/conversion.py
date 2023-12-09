def rupees_to_dollars(amount_in_rupees):
    exchange_rate = 0.012 # Replace with the current exchange rate
    amount_in_dollars = amount_in_rupees * exchange_rate
    return amount_in_dollars

def dollars_to_rupees(amount_in_dollars):
    exchange_rate = 83.35  # Replace with the current exchange rate
    amount_in_rupees = amount_in_dollars * exchange_rate
    return amount_in_rupees

def main():
    print("Currency Converter")

    try:
        choice = input("Enter conversion direction (1 for Rupees to Dollars, 2 for Dollars to Rupees): ")

        if choice not in ('1', '2'):
            raise ValueError("Invalid choice. Please enter 1 or 2.")

        amount = float(input("Enter the amount: "))

        if choice == '1':
            result = rupees_to_dollars(amount)
            print(f"{amount} Rupees is equal to {result:.2f} Dollars")
        else:
            result = dollars_to_rupees(amount)
            print(f"{amount} Dollars is equal to {result:.2f} Rupees")

    except ValueError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()
