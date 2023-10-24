#include <iostream>
int numberOfCalls = 0;
void displayNumberOfCalls() {
    numberOfCalls++; 
    std::cout << "Call number " << numberOfCalls << std::endl;
}
int main() {
    int j = 0;
    int n;

    std::cout << "Please enter the number of times you want to call the function: " << std::endl;
    std::cin >> n;

    for (j = 0; j < n; j++) {
        displayNumberOfCalls();
    }
    return 0;
}
