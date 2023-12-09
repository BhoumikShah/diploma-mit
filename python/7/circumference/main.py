import math

def calculate_area(radius):
    return math.pi * radius**2

def calculate_circumference(radius):
    return 2 * math.pi * radius

def main():
    print("Circle Calculator")

    try:
        radius = float(input("Enter the radius of the circle: "))
        if radius < 0:
            raise ValueError("Radius cannot be negative.")
        
        area = calculate_area(radius)
        circumference = calculate_circumference(radius)

        print(f"Area of the circle: {area:.2f}")
        print(f"Circumference of the circle: {circumference:.2f}")

    except ValueError as e:
        print(f"Error: {e}")
    
if __name__ == "__main__":
    main()
