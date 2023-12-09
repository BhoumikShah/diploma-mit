file_path = r"C:\Users\Bhoumik\coding\python\12\example.txt"

text_to_append = input("Enter text to append: ")

try:
    with open(file_path, "a") as file:
        file.write(text_to_append + "\n")

    # Display the updated content
    with open(file_path, "r") as file:
        updated_content = file.read()
        print("Updated Content:")
        print(updated_content)
except FileNotFoundError:
    print(f"Error: File '{file_path}' not found.")
except Exception as e:
    print(f"Error: {e}")
