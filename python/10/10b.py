class Vehicle:
    def __init__(self, seating_capacity):
        self.seating_capacity = seating_capacity

    def calculate_fare(self):
        # Default fare calculation for any vehicle
        return self.seating_capacity * 100

# Bus class inherits from Vehicle
class Bus(Vehicle):
    pass

# Example usage:
bus_instance = Bus(seating_capacity=50)
fare_amount = bus_instance.calculate_fare()
print(f"The total fare for the bus is: ${fare_amount}")
