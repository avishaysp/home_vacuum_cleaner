// Path.h
#pragma once

#include <vector>
#include "house.h"

class Path {
public:

    Path(const House::Location start_loc);

    void addEntry(const House::Location loc);

    size_t getLength() const;

    House::Location popStep();

    House::Location topStep() const;

    void cutPath(const size_t idx);

    House::Location getPrev() const;

    House::Location getLocation(const int idx) const;

private:

    std::vector<House::Location> vec;

};