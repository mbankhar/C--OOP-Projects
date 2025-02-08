#include "BitcoinExchange.hpp"


int main(int argc, char *argv[])
{
    if (argc != 2) {
        std::cerr << "Error: program requires an input file." << std::endl;
        return 1;
    }

    BitcoinExchange btc;
    if (!btc.loadRatios("data.csv")) return 1; // Load Bitcoin price data
    btc.process(argv[1]); // Process user input file

    return 0;
}
