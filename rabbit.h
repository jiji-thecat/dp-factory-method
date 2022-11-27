#ifndef RABBIT_H
#define RABBIT_H

#include <string>
#include "cook.h"

class Rabbit : public Cook
{
public:
    Rabbit();
    std::string putMeat(Bowl *bowl);
    std::string putVegitables(Bowl *bowl);
    std::string putSoupStock(Bowl *bowl);
    std::string getSoup(Bowl *bowl);
    Bowl *createBowl();

    std::string getMeat();
    std::string getVegitables();
    std::string getSoupStock();
    std::string getBowl();

private:
    std::string soup = ":/assets/assets/rabbit-soup.png";
    std::string meat;
    std::string vegitable;
    std::string stock;
    std::string bowl;
};

#endif // RABBIT_H
