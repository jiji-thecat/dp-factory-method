#ifndef BEAR_H
#define BEAR_H

#include <string>
#include "cook.h"

class Bear : public Cook
{
public:
    Bear();
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
    std::string soup = ":/assets/assets/bear-soup.png";
    std::string meat;
    std::string vegitable;
    std::string stock;
    std::string bowl;
};

#endif // BEAR_H
