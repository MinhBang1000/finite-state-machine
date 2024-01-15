#include <iostream>

/**
 *  1. Posible values includes { Sunday, Monday, ..... }
 *  2. Enumeration name is Days
 *  3. Just assign only values inside Days enum
 *  4. To retrieve enum value of posible values you can use Days::Monday --> 1
*/

enum Days {
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6
};

int main() {
    Days day;
    day = Friday;
    std::cout << "It is " << Days::Friday << std::endl;
    return 0;
}