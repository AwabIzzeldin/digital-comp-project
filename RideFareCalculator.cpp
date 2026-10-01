#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string>

int main()
{
    int pickupChoice;
    int pickupDistance;
    int styleChoice;
    int styleFee;
    int destinationChoice;
    int destinationDistance;
    std::string cancel;
    std::string y;
    std::string n;
    

    std::cout <<"Welcome to the Ride Fare Calculator\n";

    std::cout <<"Let's begin.\n";


    std::cout <<"Please select a pickup spot below.\n";
    // the user selects from these three options
    std::cout <<"1. MMU STC building.\n";
    std::cout <<"2. MMU Dewan Tun Canselor\n";
    std::cout <<"3. Starbees MMU\n";

    std::cout <<"Input the corresponding number of your destination.\n";
    std::cin >> pickupChoice;

    switch (pickupChoice)
    {
        case 1:
            pickupDistance = 1;
            break;
        
        case 2:
            pickupDistance = 2;
            break; 
        
        case 3:
            pickupDistance = 3;
            break;
        
    }

    std::cout <<"Pickup selected.\n";
    std::cout <<"What type of ride would you like?\n";

    std::cout <<"1. Standard (4 seats)  || 2RM\n";
    std::cout <<"2. Standard (6 seats)  || 3RM\n";
    std::cout <<"3. Luxury (4 seats)    || 4RM\n";
    std::cout <<"4. Luxury (6 seats)    || 6RM\n";

    std::cout <<"Input the number of your desired travel style.\n";
    std::cin >> styleChoice;

    switch (styleChoice)
    {
        case 1:
            styleFee = 2;
            break;
        
        case 2:
            styleFee = 3;
            break; 
        
        case 3:
            styleFee = 4;
            break;

        case 4:
            styleFee = 6;
            break;
        
    }

    
    std::cout <<"Ride selected, where would you like to go?\n";
    std::cout <<"Please select a destination from below\n";

    std::cout <<"1. IOI City Mall Putrajaya\n";
    std::cout <<"2. Tamarind Square\n";
    std::cout <<"3. DPULZE Shopping Center\n";
    
    std::cout <<"Input the number of your desired destination.\n";
    std::cin >> destinationChoice;

    switch (destinationChoice)
    {
        case 1:
            destinationDistance = 8;
            break;
        
        case 2:
            destinationDistance = 7;
            break; 
        
        case 3:
            destinationDistance = 6;
            break;

    }

    std::cout <<"Destination selected. Calculating fare...\n";

    double roadDistance = destinationDistance - pickupDistance;
    double price = (roadDistance * 2.8) + styleFee;

    std::cout <<"Fare calculated. Your ride fare costs" << price << "RM\n";
    
    srand(time(NULL));

    int drivers = (rand() % 4) + 1;


    std::cout << drivers << " drivers detected near your selected pickup spot.\n";


    std::cout <<"Would you like to cancel?\n";
    std::cout <<"y/n\n";

    std::cin >> cancel;

    if (cancel == n)
    {
        std::cout <<"Driver is on their way to the pick up point.\n";
    }
    
    else if (cancel == y)
    {
        std::cout <<"Understood. Cancelling order.\n";
    }

    else
    {
        std::cout <<"Please answer with either a 'yes' or 'no'.";
        std::cin >> cancel;
    }

    return 0;
}