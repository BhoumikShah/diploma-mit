// Ask user for input
let fahrenheit = prompt("Enter temperature in Fahrenheit:");

// Convert input to a number
fahrenheit = parseFloat(fahrenheit);

// Check if the input is a valid number
if (isNaN(fahrenheit)) {
    alert("Invalid input. Please enter a valid number.");
} else {
    // Perform the conversion
    let celsius = (fahrenheit - 32) / 1.8;

    // Display the result
    alert(`${fahrenheit}°F is equal to ${celsius.toFixed(2)}°C`);
}
