class Vehicle:
    def __init__(self, capacity):
        self.capacity = capacity

    def calculate_fare(self):
        return self.capacity * 100

class Bus(Vehicle):
    def __init__(self, capacity):
        # Call the constructor of the parent class (Vehicle)
        super().__init__(capacity)

    def calculate_fare(self):
        # Call the calculate_fare method of the parent class (Vehicle)
        base_fare = super().calculate_fare()

        # Add 10% maintenance charge for Bus
        total_fare = base_fare + 0.1 * base_fare

        return total_fare

# Example usage:
bus_instance = Bus(50)
fare = bus_instance.calculate_fare()
print(f"The total fare for the bus is: ${fare}")
