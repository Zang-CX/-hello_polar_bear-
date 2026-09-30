#include <iostream>
#include <ctime>
#include <string>

std::string get_date() {
    std::time_t now = std::time(nullptr);
    char buf[64];
    std::strftime(buf, sizeof(buf), "%Y-%m-%d", std::localtime(&now));
    return std::string(buf);
}

int main() {
    std::cout << "Hello, Polar Bear!" << std::endl;
    std::cout << "Today is " << get_date() << std::endl;
    return 0;
}
