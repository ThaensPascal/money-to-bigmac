#include <iostream>

int main() {
    float money, bigmacCAD, trio, hamberger, bigmacUS;
    int wage;
    bigmacCAD = 7.79;
    bigmacUS = 5.99;
    std::cout << "US or Canadian: ";
    std::string currency;
    std::string CAD = "CAD";
    std::string US = "US";
    std::cin >> currency;
    if (currency == "CAD") {
        std::cout << "How much money are you converting: "; 
        std::cin >> money;
        std::cout << money << "$ CAD is worth about ~" << money/bigmacCAD << " canadian Bigmacs\n";
    }
    if (currency == "US") {
        std::cout << "How much money are you converting: "; 
        std::cin >> money;
        std::cout << money << "$ USD is worth about ~" << money/bigmacUS << " american Bigmacs\n";
    }
    else {
        std::cout << "i forgot how to not make it cap sensitive lol will fix later :)";
    }
}