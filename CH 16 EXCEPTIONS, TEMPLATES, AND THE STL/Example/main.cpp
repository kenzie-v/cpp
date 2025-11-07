#include <iostream>

class Division {
    private:
        class error {};

    public:
        Division() = default;
        ~Division() = default;

        void divide(int a, int b) {
            try {
                if (b == 0) throw error();
                std::cout << "Result: " << a / b << std::endl;
            } 
            catch (const error&) {
                std::cerr << "Error: Division by zero!" << std::endl;
            }
        }
};

int main() {
    Division division;
    division.divide(10, 2); // Valid division
    division.divide(10, 0); // Division by zero

    return 0;
}