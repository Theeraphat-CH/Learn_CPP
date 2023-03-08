#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string book_name;
    std::vector<std::string> books;
    std::vector<int> price_per_days;
    std::vector<int> borrowed_days;
    std::vector<int> total_prices;
    std::vector<int> fine;
    std::vector<int> summary_of_total_minus_fine;

    int summary_of_total = 0; // initialize to zero

    int book_list_size;
    std::cout << "Enter book list : ";
    std::cin >> book_list_size;

    std::cout << "\n__________________________________________\n";

    for (int i = 0; i < book_list_size; i++) {
        std::cout << "\n";

        std::cout << "Enter Book Name : ";
        std::cin >> book_name;
        books.push_back(book_name);

        int price_per_day;
        std::cout << "Enter Price / Day : ";
        std::cin >> price_per_day;
        price_per_days.push_back(price_per_day);

        int borrowed_day;
        std::cout << "Enter Borrowed Date : ";
        std::cin >> borrowed_day;
        borrowed_days.push_back(borrowed_day);

        int fine_borrowed;
        std::cout << "Enter Fine : ";
        std::cin >> fine_borrowed;
        fine.push_back(fine_borrowed);

        total_prices.push_back(price_per_day * borrowed_day);
    }

    std::cout << "__________________________________________\n";

    for (int i = 0; i < book_list_size; i++) {
        std::cout << "\nBook: " << books[i] << std::endl;
        std::cout << "Price per day: " << price_per_days[i] << " Bath" << std::endl;
        std::cout << "Borrowed Days: " << borrowed_days[i] << std::endl;
        std::cout << "Total Price: " << total_prices[i] << " Bath" << std::endl;
        std::cout << "Fine: " << fine[i] << " Bath" << std::endl;
    }

    std::cout << "__________________________________________\n";

    for (int i = 0; i < book_list_size; i++) {
        summary_of_total += total_prices[i];
    }

    summary_of_total_minus_fine.push_back(summary_of_total);

    for (int i = 0; i < book_list_size; i++) {
        summary_of_total_minus_fine[i] -= fine[i];
    }

    //เหลือทำให้แสดง fine
    std::cout << "\nYou borrowed " << book_list_size << " - Books in total " << summary_of_total_minus_fine[0] << " bath - Fine " << fine[0] << " - Pay : " << summary_of_total ;

    return 0;
}
