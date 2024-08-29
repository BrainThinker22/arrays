#include <iostream>

int main()
{

    const char* salad[3];

    salad[0] = "tomato";
    salad[1] = "cucumber";
    salad[2] = "lettuce";

    std::cout << salad[0] << '\n';
    std::cout << salad[1] << '\n';
    std::cout << salad[2] << '\n';

    return 0;

}

