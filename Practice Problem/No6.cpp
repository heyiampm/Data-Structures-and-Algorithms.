//📌 calculate the nth Fibonacci number using a function.
#include <iostream>
using namespace std;

// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;       // 0th Fibonacci number
    if (n == 1) return 1;       // 1st Fibonacci number
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive formula
}

int main() {
          int n;
          cout << "Enter n: ";
          cin >> n;
          
          cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
          return 0;
}
