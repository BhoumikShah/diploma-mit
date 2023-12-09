#include <iostream>
#include <string>

class City {
private:
    std::string name;
    int population;

public:
    // Method to accept data for one city
    void accept_data() {
        std::cout << "Enter City Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Population: ";
        std::cin >> population;
        std::cin.ignore(); // Clear the newline character from the buffer
    }

    // Method to get the population of the city
    int get_population() const {
        return population;
    }

    // Method to get the name of the city
    std::string get_city_name() const {
        return name;
    }
};

int main() {
    const int numCities = 5;
    City cities[numCities];

    // Accepting data for 5 cities
    for (int i = 0; i < numCities; ++i) {
        std::cout << "\nEnter details for City " << i + 1 << ":" << std::endl;
        cities[i].accept_data();
    }

    // Finding the city with the highest population
    int maxPopulation = -10;
    std::string cityNameWithMaxPopulation;

    for (const City& city : cities) {
        if (city.get_population() > maxPopulation) {
            maxPopulation = city.get_population();
            cityNameWithMaxPopulation = city.get_city_name();
        }
    }

    // Displaying the name of the city with the highest population
    if (maxPopulation != -10) {
        std::cout << "\nThe city with the highest population is: " << cityNameWithMaxPopulation << std::endl;
        std::cout << "With Population: " << maxPopulation << std::endl;
    } else {
        std::cout << "\nNo cities entered." << std::endl;
    }

    return 0;
}
