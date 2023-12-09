class SimpleDictionary:
    def __init__(self):
        self.dictionary = {}

    def add_word(self, word, meaning):
        self.dictionary[word] = meaning
        print(f"Added: {word} - {meaning}")

    def delete_word(self, word):
        if word in self.dictionary:
            del self.dictionary[word]
            print(f"Deleted: {word}")
        else:
            print(f"{word} not found in the dictionary.")

    def update_word(self, word, new_meaning):
        if word in self.dictionary:
            self.dictionary[word] = new_meaning
            print(f"Updated: {word} - {new_meaning}")
        else:
            print(f"{word} not found in the dictionary.")

    def print_dictionary(self):
        print("\nDictionary:")
        for word, meaning in self.dictionary.items():
            print(f"{word} - {meaning}")

def main():
    my_dictionary = SimpleDictionary()

    while True:
        print("\nChoose operation:")
        print("1. Add word and meaning")
        print("2. Delete word")
        print("3. Update meaning")
        print("4. Print dictionary")
        print("5. Exit")

        choice = input("Enter choice (1/2/3/4/5): ")

        if choice == '5':
            print("Exiting the dictionary. Goodbye!")
            break

        elif choice == '1':
            word = input("Enter word: ")
            meaning = input("Enter meaning: ")
            my_dictionary.add_word(word, meaning)

        elif choice == '2':
            word = input("Enter word to delete: ")
            my_dictionary.delete_word(word)

        elif choice == '3':
            word = input("Enter word to update: ")
            new_meaning = input("Enter new meaning: ")
            my_dictionary.update_word(word, new_meaning)

        elif choice == '4':
            my_dictionary.print_dictionary()

        else:
            print("Invalid input. Please enter a valid option.")

if __name__ == "__main__":
    main()
