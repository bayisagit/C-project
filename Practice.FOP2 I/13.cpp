#include <iostream>
#include <string>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// Function to get the century value
int getCenturyValue(int year) {
    int century = year / 100;
    int remainder = century % 4;
    return (3 - remainder) * 2;
}

// Function to get the year value
int getYearValue(int year) {
    int lastTwoDigits = year % 100;
    int leapYears = lastTwoDigits / 4;
    return lastTwoDigits + leapYears;
}

// Function to get the month value
int getMonthValue(int month, int year) {
    int monthValues[] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    if (month == 2 && isLeapYear(year)) {
        return 2;
    } else {
        return monthValues[month - 1];
    }
}

// Function to get the day of the week
int getDayOfWeek(int day, int month, int year) {
    int sum = day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);
    int remainder = sum % 7;
    return remainder;
}

// Function to get the day of the week as a string
std::string getDayOfWeekString(int dayOfWeek) {
    std::string dayOfWeekStrings[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    return dayOfWeekStrings[dayOfWeek];
}

// Function to get the input date from the user
void getInput(int *day, int *month, int *year) {
    std::string date;
    std::cout << "Enter the date (e.g., July 4, 2008): ";
    std::getline(std::cin, date);

    try {
        // Parse the date string
        std::string monthString = date.substr(0, date.find(" "));
        *day = std::stoi(date.substr(date.find(" ") + 1, date.find(",") - date.find(" ") - 1));
        *month = std::stoi(monthString);
        *year = std::stoi(date.substr(date.find(",") + 2));
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid date format. Please try again." << std::endl;
        std::exit(1);
    }
}

int main() {
    int day, month, year;

    // Get the input date from the user
    getInput(&day, &month, &year);

    // Get the day of the week
    int dayOfWeek = getDayOfWeek(day, month, year);

    // Print the day of the week
    std::cout << "The day of the week is: " << getDayOfWeekString(dayOfWeek) << std::endl;

    return 0;
}
