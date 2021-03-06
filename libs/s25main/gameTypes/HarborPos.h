// Copyright (c) 2005 - 2017 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.

#ifndef HarborPos_h__
#define HarborPos_h__

#include "gameTypes/MapCoordinates.h"
#include <array>
#include <vector>

struct HarborPos
{
    MapPoint pos;

    struct CoastalPoint
    {
        unsigned short seaId;
        CoastalPoint() : seaId(0) {}
    };
    std::array<CoastalPoint, 6> cps;

    struct Neighbor
    {
        unsigned id;
        unsigned distance;

        Neighbor() = default; //-V730
        Neighbor(unsigned id, unsigned distance) : id(id), distance(distance) {}

        bool operator<(const Neighbor& two) const { return (distance < two.distance) || (distance == two.distance && id < two.id); }
    };

    std::array<std::vector<Neighbor>, 6> neighbors;

    HarborPos() = default; //-V730
    HarborPos(const MapPoint pt) : pos(pt) {}
};

#endif // HarborPos_h__
