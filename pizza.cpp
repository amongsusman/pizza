/*
Name: Tyler Zhang
Program Name: Pizza Shop Program
Date: 11/25/24
Extra: Uses ternary operator in C++
*/
#include <iostream>
using namespace std;

// initializes the functions to calculate price and to display the bill with semicolons at the end and no function body
double calcPrice(char size, int toppingCnt);
void displayBill(double cost);

int main() {
    char pizzaSize;
    int numOfToppings;
    cout << "Hello, welcome to Ripoff Pizzeria!" << endl;
    cout << "Would you like a small or large pizza? (s/l)" << endl;
    cin >> pizzaSize;
    cout << "How many toppings would you like on your pizza?" << endl;
    cin >> numOfToppings;
    double price = calcPrice(pizzaSize, numOfToppings);
    displayBill(price);
    return 0;
}
// takes in the size input (as small or large) and the number of toppings
double calcPrice(char size, int toppingCnt) {
    double smallSize = 63.99;
    double largeSize = 101.99;
    double toppingPrice = 15.99;
    // checks whether the user inputted small or large
    // extra:
    double finalPrice = (size == 's') ? smallSize + (toppingPrice * toppingCnt) : largeSize + (toppingPrice * toppingCnt);
    return finalPrice;
}
void displayBill(double cost) {
    cout << "The total cost of what you are ordering today is $" << cost << "." << endl;
}
