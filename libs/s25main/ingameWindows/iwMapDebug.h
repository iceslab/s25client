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

#ifndef iwMapDebug_h__
#define iwMapDebug_h__

#include "IngameWindow.h"

class GameWorldView;

class iwMapDebug : public IngameWindow
{
public:
    iwMapDebug(GameWorldView& gwv, bool allowCheating);
    ~iwMapDebug() override;

private:
    class DebugPrinter;

    void Msg_ComboSelectItem(unsigned ctrl_id, int select) override;
    void Msg_CheckboxChange(unsigned ctrl_id, bool checked) override;

    GameWorldView& gwv;
    DebugPrinter* printer;
};

#endif // iwMapDebug_h__
