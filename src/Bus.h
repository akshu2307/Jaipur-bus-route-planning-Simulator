#ifndef BUS_H
#define BUS_H

#include <string>

class Bus
{
public:
    int id;
    std::string currentStop;
    double speed;

    Bus(int i, std::string stop, double s);
};

#endif
