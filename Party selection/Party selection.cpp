#include "Functions (Party selection).hpp"

int main()
{
    struct Player
    {
        std::string playerName;
    };
    Player players[3];
    int partyGold = 100;
    std::cout << "Player 1, enter your name: ";
    std::cin >> players[0].playerName;
    std::cout << "Player 2, enter your name: ";
    std::cin >> players[1].playerName;
    std::cout << "Player 3, enter your name: ";
    std::cin >> players[2].playerName;

    struct Items
    {
        std::string itemName;
        int itemCost;
        int itemDamage;
        int itemStock;
    };

    Items items[7];
    items[0].itemName = "Greatsword";
    items[0].itemCost = 40;
    items[0].itemDamage = 100;

    items[1].itemName = "Scimitar";
    items[1].itemCost = 35;
    items[1].itemDamage = 75;

    items[2].itemName = "Dagger";
    items[2].itemCost = 10;
    items[2].itemDamage = 35;

    items[3].itemName = "Longbow";
    items[3].itemCost = 20;
    items[3].itemDamage = 55;

    items[4].itemName = "Crossbow";
    items[4].itemCost = 40;
    items[4].itemDamage = 100;

    items[5].itemName = "Rusty spear";
    items[5].itemCost = 10;
    items[5].itemDamage = 35;

    items[6].itemName = "Iron spear";
    items[6].itemCost = 20;
    items[6].itemDamage = 65;

    for (int counter = 0; counter <= 6; counter++)
    {
        items[counter].itemStock = 1;
    }

    std::cout << '\n';
    std::cout << "Welcome to the shop, " << players[0].playerName << ", " << players[1].playerName << ", and " << players[2].playerName << "\n";
    std::cout << "The party begins with " << partyGold << " gold.\n";
    std::cout << "Here's the items you can buy.\n";
    std::cout << "1. Greatsword (" << items[0].itemCost << " coins, " << items[0].itemDamage << " damage)\n";
    std::cout << "2. Scimitar (" << items[1].itemCost << " coins, " << items[1].itemDamage << " damage)\n";
    std::cout << "3. Dagger (" << items[2].itemCost << " coins, " << items[2].itemDamage << " damage)\n";
    std::cout << "4. Longbow (" << items[3].itemCost << " coins, " << items[3].itemDamage << " damage)\n";
    std::cout << "5. Crossbow (" << items[4].itemCost << " coins, " << items[4].itemDamage << " damage)\n";
    std::cout << "6. Rusty spear (" << items[5].itemCost << " coins, " << items[5].itemDamage << " damage)\n";
    std::cout << "7. Iron spear (" << items[6].itemCost << " coins, " << items[6].itemDamage << " damage)\n";

    int itemCode;
    int itemsBought[3];
    std::cout << '\n';
    std::cout << players[0].playerName << ", enter the code for the item you want to buy: ";
    std::cin >> itemCode;
    while (itemCode < 0 || itemCode > 7 || std::cin.fail())
    {
        std::cerr << "Invalid item code" << '\n';
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << players[0].playerName << ", enter the code for the item you want to buy: ";
        std::cin >> itemCode;
    }
    if (isItemAffordable(items[itemCode - 1].itemCost, partyGold))
    {
        if (isItemAvailable(items[itemCode - 1].itemStock))
        {
            itemsBought[0] = itemCode - 1;
            partyGold -= items[itemCode - 1].itemCost;
            items[itemCode - 1].itemStock--;
        }
        else
        {
            std::cerr << "That item is out of stock" << '\n';
        }
    }
    else
    {
        std::cerr << "You can't afford that item" << '\n';
    }
    std::cout << players[0].playerName << " just bought a " << items[itemsBought[0]].itemName << '\n';
    std::cout << "The party now has " << partyGold << " gold.\n";
}