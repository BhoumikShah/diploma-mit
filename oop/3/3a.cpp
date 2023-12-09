#include <iostream>

class City {
public:
    char name[100];
    int population;

    // Method to accept city data
    void acceptCityData() {
        std::cout << "Enter City Name: ";
        std::cin.ignore(); // Clear the newline character from the input buffer
        std::cin.getline(name, sizeof(name));
        std::cout << "Enter Population: ";
        std::cin >> population;
    }
};

int main() {
    City cities[5]; // Array to store data for 5 cities
    int highestPopulation = 0; // Initialize the highest population to 0
    int indexOfCityWithHighestPopulation = 0; // Initialize the index of the city with the highest population

    // Accept data for 5 cities
    for (int i = 0; i < 5; i++) {
        std::cout << "\nEnter data for City " << i + 1 << ":" << std::endl;
        cities[i].acceptCityData();

        // Check if the current city has a higher population than the previous highest
        if (cities[i].population > highestPopulation) {
            highestPopulation = cities[i].population;
            indexOfCityWithHighestPopulation = i;
        }
    }

    // Display the name of the city with the highest population
    std::cout << "\nCity with the Highest Population: " << cities[indexOfCityWithHighestPopulation].name << std::endl;

    return 0;
}
