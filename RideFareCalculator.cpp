#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string>

int main()
{
    std::string pickupChoice;
    int pickupDistance;
    std::string styleChoice;
    int styleFee;
    std::string destinationChoice;
    int destinationDistance;
    std::string cancel;
    std::string y = "y";
    std::string n = "n";
    

    std::cout <<"Welcome to the Ride Fare Calculator\n";

    std::cout <<"Let's begin.\n";


    std::cout <<"Please select a pickup spot below.\n";
    // the user selects from these three options
    std::cout <<"1. MMU STC building.\n";
    std::cout <<"2. MMU Dewan Tun Canselor\n";
    std::cout <<"3. Starbees MMU\n";

    std::cout <<"Input the corresponding number of your destination.\n";
    std::cin >> pickupChoice;

    do
    {
        if (pickupChoice == "1")
    {
        pickupDistance = 1;
    }

    else if (pickupChoice == "2")
    {
        pickupDistance = 2;
    }

    else if (pickupChoice == "3")
    {
        pickupDistance = 3;
    }

    else
    {
        std::cout << "Invalid input. Please try again and enter 1, 2, or 3 to select your pickup point.\n";
        std::cin >> pickupChoice;
    }

    } while (pickupChoice != "1" && pickupChoice != "2" && pickupChoice != "3");
    

    std::cout <<"Pickup selected.\n";
    std::cout <<"What type of ride would you like?\n";

    std::cout <<"1. Standard (4 seats)  || 2RM\n";
    std::cout <<"2. Standard (6 seats)  || 3RM\n";
    std::cout <<"3. Luxury (4 seats)    || 4RM\n";
    std::cout <<"4. Luxury (6 seats)    || 6RM\n";

    std::cout <<"Input the number of your desired travel style.\n";
    std::cin >> styleChoice;

    do
    {
        if (styleChoice == "1")
    {
        styleFee = 2;
    }

    else if (styleChoice == "2")
    {
        styleFee = 3;
    }

    else if (styleChoice == "3")
    {
        styleFee = 4;
    }

    else if (styleChoice == "4")
    {
        styleFee = 6;
    }

    else
    {
        std::cout << "Invalid input. Please try again and enter 1, 2, 3, or 4 to select your style of ride.\n";
        std::cin >> styleChoice;
    }

    } while (styleChoice != "1" && styleChoice != "2" && styleChoice != "3" && styleChoice != "4");


    
    std::cout <<"Ride selected, where would you like to go?\n";
    std::cout <<"Please select a destination from below\n";

    std::cout <<"1. IOI City Mall Putrajaya\n";
    std::cout <<"2. Tamarind Square\n";
    std::cout <<"3. DPULZE Shopping Center\n";
    
    std::cout <<"Input the number of your desired destination.\n";
    std::cin >> destinationChoice;

    do
    {
        if (destinationChoice == "1")
    {
        destinationDistance = 8;
    }

    else if (destinationChoice == "2")
    {
        destinationDistance = 7;
    }

    else if (destinationChoice == "3")
    {
        destinationDistance = 6;
    }

    else
    {
        std::cout << "Invalid input. Please try again and enter 1, 2, or 3 to select your destination.\n";
        std::cin >> destinationChoice;
    }

    } while (destinationChoice != "1" && destinationChoice != "2" && destinationChoice != "3");

    std::cout <<"Destination selected. Calculating fare...\n";

    double roadDistance = destinationDistance - pickupDistance;
    double price = (roadDistance * 2.8) + styleFee;

    std::cout <<"Fare calculated. Your ride fare costs [" << price << "RM]\n";
    
    srand(time(NULL));

    int drivers = (rand() % 4) + 1;


    std::cout << drivers << " drivers detected near your selected pickup spot.\n";


    std::cout <<"Would you like to cancel?\n";
    std::cout <<"y/n\n";

    do
    {
        std::cin >> cancel;

        if (cancel == "n")
    {
        std::cout <<"Driver is on their way to the pick up point.\n";
        return 0;
    }
    
    else if (cancel == "y")
    {
        std::cout <<"Understood. Cancelling order.\n";
        return 0;
    }

    else
    {
        std::cout <<"Please answer with a lowercase 'y' or 'n'.\n";
    }

    } while (cancel != "y" && cancel != "n");
}