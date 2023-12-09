file_path = r"C:\Users\Bhoumik\coding\python\12\example.txt"

n = int(input("Enter the number of lines to read: "))

try:
    with open(file_path, "r") as file:
        for _ in range(n):
            line = file.readline()
            if not line:
                break
            print(line, end="")
except FileNotFoundError:
    print(f"Error: File '{file_path}' not found.")
except Exception as e:
    print(f"Error: {e}")
