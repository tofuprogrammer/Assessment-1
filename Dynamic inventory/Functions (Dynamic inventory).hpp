#pragma once

#include <iostream>

inline void helpUser()
{
    std::cout << "view <index>: Shows details of the item in the slot specified by the slot index." << '\n';
    std::cout << "show_all: Shows all inventory slots and their details." << '\n';
    std::cout << "set <index> <itemID>: Sets the slot specified by the item index to the given item using the ID." << '\n';
    std::cout << "search_item <str>: Searches the item list for any item with the given name." << '\n';
    std::cout << "items: Shows all items." << '\n';
    std::cout << "exit: Exits the tool." << '\n';
    std::cout << "restart: Restarts the session." << '\n';
    std::cout << "help: Shows this list of commands." << '\n';
    std::cout << "clear: Clears your inventory." << '\n';
}

inline int exitProgram()
{
    return 0;
}
inline void viewInventorySlot()
{
    std::cout << "Inventory slot " << inventorySlotNumber << " details:" << '\n';
    std::cout << "Name: " << playerInventory[inventorySlotNumber].itemName << '\n';
}