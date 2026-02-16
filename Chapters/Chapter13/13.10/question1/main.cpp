#include <iostream>


struct Advertisement {
    int numWatchedAds {};
    double conversionRate {};
    double earningsPerClick {};
};

double earnings(const Advertisement& ad) {
    return ad.numWatchedAds * ad.conversionRate * ad.earningsPerClick;
}

int main() {
    std::cout << "Please enter the number of ads, percentage of users that clicked on it, and average erniegs per click\n";
    Advertisement ad {};
    std::cin >> ad.numWatchedAds;
    std::cin >> ad.conversionRate;
    std::cin >> ad.earningsPerClick;
    
    std::cout << "You made " << earnings(ad) << " today!" << std::endl;

    return 0;
}
