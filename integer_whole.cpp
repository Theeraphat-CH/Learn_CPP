#include <iostream>

int main() {
    // Initialize variables
    int age = 18;
    int year = 2023;
    int days = 2;
    int just_float = 5.5;


    //double
    double price = 9.99;
    double gpax = 3.86;

    //Single character
    char grade = 'A';
    char initial = 'BC';
    char currency = '$';

    //Boolean
    bool student = true;
    bool power = false;

    //string
    std::string name = "Theeraphat Chueanokkhum";
    std::string day  = "Thursday";

    ////////////////////////////////////////////////////////////////
    std::cout << "This Age : " << age << '\n';
    std::cout << "This Year : " << year << '\n';
    std::cout << "This days : " << days << '\n';
    std::cout << "This float but under int : " << just_float << '\n';

    ////////////////////////////////////////////////////////////////
    std::cout << "This Price : " << price << '\n';
    std::cout << "This Gpax : " << gpax << '\n';

    ////////////////////////////////////////////////////////////////
    std::cout << "This Grade : " << grade << '\n';
    std::cout << initial << '\n';
    std::cout << currency << '\n';

    ////////////////////////////////////////////////////////////////
    std::cout << "Your are student? : " << student << '\n';
    std::cout << "Light is : " << power << '\n';

    ////////////////////////////////////////////////////////////////
    std::cout << "Your name is : " << name << '\n';
    std::cout << "Day is : " << day << '\n';

    return 0;
}