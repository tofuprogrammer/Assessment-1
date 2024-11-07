#pragma once

#include <iostream>

inline void viewInventorySlot()
{
    std::cout << "Inventory slot " << inventorySlotNumber << " details:" << '\n';
    std::cout << "Name: " << playerInventory.itemName[inventorySlotNumber] << '\n';
}