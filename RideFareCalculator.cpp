#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string>

int main()
{

    // initial values defined for the code to function. "int" is for storing numerical data. "std::string" is used for typed data
    int pickupDistance;
    int styleFee;
    int destinationDistance;
    std::string traffic;
    std::string pickupChoice;
    std::string styleChoice;
    std::string destinationChoice;
    std::string cancel;
    std::string y = "y";
    std::string n = "n";
    

    std::cout <<"Welcome to the Ride Fare Calculator\n";

    std::cout <<"Let's begin.\n";

    // stage 1 - pickup spot

    std::cout <<"Please select a pickup spot below.\n";
    // the user selects from these three options
    std::cout <<"1. MMU STC building.\n";
    std::cout <<"2. MMU Dewan Tun Canselor\n";
    std::cout <<"3. Starbees MMU\n";

    std::cout <<"Input the corresponding number of your destination.\n";
    std::cin >> pickupChoice; //user inputs their desired option here

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
    // "while" checks if the input from the user is valid enough to proceed. If the input from the user does not match any of the choice, the function will loop.
    } while (pickupChoice != "1" && pickupChoice != "2" && pickupChoice != "3");
    

    // stage 2 - style of ride

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

    // the function above is similar to stage 1
    

    // stage 3 - final destination

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

    srand(time(NULL));

    int roadDensity = (rand() % 5); //Random Number generator for the road density

    // from the options selected before, calculation begins here.

    double roadDistance = destinationDistance - pickupDistance;
    double price = (roadDistance * 2.2) + styleFee + roadDensity;

    std::cout <<"Fare calculated. Your ride fare costs [" << price << "RM]\n"; // price is displayed here
    
    if (roadDensity > 3)
    {
        traffic = "high";
    }

    else if (roadDensity < 3)
    {
        traffic = "low";
    }

    else
    {
        traffic = "modest";
    }

    std::cout <<"Traffic is " << traffic <<" right now.\n";

    srand(time(NULL));

    int drivers = (rand() % 4) + 1; // this is an Random Number Generator for the number of drivers near the pickup spot.


    std::cout << drivers << " drivers detected near your selected pickup spot.\n"; // number of drivers displayed here


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
    
    // the statements in the if/else if functions are the final strings before the program closes.

    else
    {
        std::cout <<"Please answer with a lowercase 'y' or 'n'.\n";
    }

    } while (cancel != "y" && cancel != "n"); // the program will continuously ask for a proper y/n answer
}