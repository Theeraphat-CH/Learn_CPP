#include <iostream>

int bmi_cal(int weight, int height) {
    int bmi = weight / (height * height);
    return bmi;
}

int main() {
    int weight, height, result;

    std::cout << "BMI calculation\nEnter weight(KG) : ";
    std::cin >> weight;

    std::cout << "Enter height(CM) : ";
    std::cin >> height;
    height /= 10;

    result = bmi_cal(weight, height);

    if (result < 18.5) {
        std::cout << "\nBMI Is " << result << " Underweight\n" << std::endl;
    } else if (result >= 18.5 && result <= 22.9) {
        std::cout << "\nBMI Is " << result << " Normal\n" << std::endl;
    } else if (result >= 23.0 && result <= 24.9) {
        std::cout << "\nBMI Is " << result << " Overweight\n" << std::endl;
    } else if (result >= 25.0 && result <= 29.9) {
        std::cout << "\nBMI Is " << result << " Obesity\n" << std::endl;
    } else if (result >= 30.0) {
        std::cout << "\nBMI Is " << result << " Dangerous obesity\n" << std::endl;
    }
}