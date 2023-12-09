class Vehicle:
    def __init__(self, seating_capacity):
        self.seating_capacity = seating_capacity

    def calculate_fare(self):
        # Default fare calculation for any vehicle
        return self.seating_capacity * 100

class Bus(Vehicle):
    def __init__(self, seating_capacity):
        super().__init__(seating_capacity)

    def calculate_fare(self):
        # Calculate the default fare using the parent class method
        base_fare = super().calculate_fare()
        
        # Add 10% maintenance charge for Bus instances
        maintenance_charge = 0.1 * base_fare

        # Total fare for Bus instance
        total_fare = base_fare + maintenance_charge
        return total_fare

# Example usage:
bus_instance = Bus(seating_capacity=950)
fare_amount = bus_instance.calculate_fare()
print(f"The total fare for the bus is: {fare_amount}")
