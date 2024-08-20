#include <iostream>
#include <vector>
#include <iomanip>

// Define a class for handling the investment calculations
class InvestmentCalculator {
private:
    double initialInvestmentAmount;
    double monthlyDeposit;
    double annualInterest;
    int numberOfYears;
    int months;
    double monthlyInterestRate;

    // Calculate the monthly interest based on the current balance
    double calculateMonthlyInterest(double amount) {
        return amount * monthlyInterestRate;
    }

    // Calculate the total balance and interest without monthly deposits
    void calculateWithoutDeposits(std::vector<double>& balances, std::vector<double>& interests) {
        double balance = initialInvestmentAmount;

        for (int year = 1; year <= numberOfYears; ++year) {
            double earnedInterest = 0.0;
            for (int month = 1; month <= 12; ++month) {
                double interest = calculateMonthlyInterest(balance);
                balance += interest;
                earnedInterest += interest;
            }
            balances.push_back(balance);
            interests.push_back(earnedInterest);
        }
    }

    // Calculate the total balance and interest with monthly deposits
    void calculateWithDeposits(std::vector<double>& balances, std::vector<double>& interests) {
        double balance = initialInvestmentAmount;

        for (int year = 1; year <= numberOfYears; ++year) {
            double earnedInterest = 0.0;
            for (int month = 1; month <= 12; ++month) {
                balance += monthlyDeposit;
                double interest = calculateMonthlyInterest(balance);
                balance += interest;
                earnedInterest += interest;
            }
            balances.push_back(balance);
            interests.push_back(earnedInterest);
        }
    }

public:
    // Constructor to initialize the investment parameters
    InvestmentCalculator(double initAmount, double deposit, double interest, int years)
        : initialInvestmentAmount(initAmount), monthlyDeposit(deposit), annualInterest(interest), numberOfYears(years) {
        months = numberOfYears * 12;
        monthlyInterestRate = (annualInterest / 100) / 12;
    }

    // Function to start the calculation process and display results
    void run() {
        std::vector<double> balancesWithoutDeposits;
        std::vector<double> interestsWithoutDeposits;
        std::vector<double> balancesWithDeposits;
        std::vector<double> interestsWithDeposits;

        calculateWithoutDeposits(balancesWithoutDeposits, interestsWithoutDeposits);
        calculateWithDeposits(balancesWithDeposits, interestsWithDeposits);

        std::cout << std::fixed << std::setprecision(2);

        std::cout << "Balance and Interest Without Additional Monthly Deposits\n";
        std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
        for (int i = 0; i < numberOfYears; ++i) {
            std::cout << (i + 1) << "\t$" << balancesWithoutDeposits[i] << "\t\t$" << interestsWithoutDeposits[i] << "\n";
        }

        std::cout << "\nBalance and Interest With Additional $" << monthlyDeposit << " Monthly Deposits\n";
        std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
        for (int i = 0; i < numberOfYears; ++i) {
            std::cout << (i + 1) << "\t$" << balancesWithDeposits[i] << "\t\t$" << interestsWithDeposits[i] << "\n";
        }
    }
};

// Main function to interact with the user and start the investment calculation
int main() {
    double initialInvestmentAmount;
    double monthlyDeposit;
    double annualInterest;
    int numberOfYears;

    // Input from user
    std::cout << "Initial Investment Amount: ";
    std::cin >> initialInvestmentAmount;
    std::cout << "Monthly Deposit: ";
    std::cin >> monthlyDeposit;
    std::cout << "Annual Interest (%): ";
    std::cin >> annualInterest;
    std::cout << "Number of Years: ";
    std::cin >> numberOfYears;

    // Create an InvestmentCalculator object and run the calculations
    InvestmentCalculator calculator(initialInvestmentAmount, monthlyDeposit, annualInterest, numberOfYears);
    calculator.run();

    std::cout << "Press any key to continue...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
