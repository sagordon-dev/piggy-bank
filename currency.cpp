#include <iostream>

int main(int argc, char const *argv[])
{
    double pesos = 0, reais = 0, soles = 0;
    const double pesos_usd = 0.048, reais_usd = 0.18, soles_usd = 0.25;

    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazillian Reais: ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    double total_amount = (pesos * pesos_usd) + (reais * reais_usd) + (soles * soles_usd);
    std::cout << "US Dollars = $" << total_amount << "\n";

    return 0;
}
