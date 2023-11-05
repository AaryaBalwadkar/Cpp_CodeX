#include <iostream>
using namespace std;

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {
    // A function that calculates and returns the
    // number of days remaining in the week using the Days enum.

    return (7 - today);
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    std::cout << "Days remaining in the week: " << daysRemaining << std::endl;
    return 0;
}