#include <iostream>
#include <string>

// Triangle class
class Triangle {
private:
    double base;
    double height;

public:
    // Constructor
    Triangle(double b, double h) : base(b), height(h) {}

    // Method to calculate area
    double calculateArea() {
        return 0.5 * base * height;
    }
};

// Palindrome class
class Palindrome {
public:
    // Method to check if a string is palindrome
    static bool isPalindrome(const std::string& str) {
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
