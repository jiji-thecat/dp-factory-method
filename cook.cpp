#include "cook.h"

Cook::Cook()
{

}

Bowl *Cook::createBowl(){    
    return new Bowl();
}

std::string Cook::cookSoup(){
    std::string result = "";

    Bowl *bowl = createBowl();
    putMeat(bowl);
    putVegitables(bowl);
    putSoupStock(bowl);

    return getSoup(bowl);
}
