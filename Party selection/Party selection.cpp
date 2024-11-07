#include <iostream>
#include <string>

int main()
{
    struct Player
    {
        std::string player_name;
    };
    Player players[3];
    int party_gold = 100;
    std::cout << "Player 1, enter your name: ";
    std::cin >> players[0].player_name;
    std::cout << "Player 2, enter your name: ";
    std::cin >> players[1].player_name;
    std::cout << "Player 3, enter your name: ";
    std::cin >> players[2].player_name;

    std::cout << '\n';
    std::cout << "Welcome to the shop, " << players[0].player_name << ", " << players[1].player_name << ", and " << players[2].player_name << "\n";
    std::cout << "The party begins with " << party_gold << " gold.\n";
    std::cout << "Here's the items you can buy.\n";
    std::cout << "1. Greatsword (40 coins, 100 damage)\n";
    std::cout << "2. Scimitar (35 coins, 75 damage)\n";
    std::cout << "3. Dagger (10 coins, 35 damage)\n";
    std::cout << "4. Longbow (20 coins, 55 damage)\n";
    std::cout << "5. Crossbow (40 coins, 100 damage)\n";
    std::cout << "6. Rusty spear (10 coins, 35 damage)\n";
    std::cout << "7. Iron spear (20 coins, 65 damage)\n";

    struct Items
    {
        std::string item_name;
        int item_cost;
    };
    Items items[7];
    items[0].item_name = "Greatsword";
    items[0].item_cost = 40;
    items[1].item_name = "Scimitar";
    items[1].item_cost = 35;
    items[2].item_name = "Dagger";
    items[2].item_cost = 10;
    items[3].item_name = "Longbow";
    items[3].item_cost = 20;
    items[4].item_name = "Crossbow";
    items[4].item_cost = 40;
    items[5].item_name = "Rusty spear";
    items[5].item_cost = 10;
    items[6].item_name = "Iron spear";
    items[6].item_cost = 20;
    int item_code;
    int items_bought [3];
    std::cout << '\n';
    std::cout << "Player 1, enter the code for the item you want to buy: ";
    std::cin >> item_code;
    while (item_code < 1 || item_code > 7 || std::cin.fail())
    {
        std::cerr << "Invalid item code" << '\n';
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << players[0].player_name << ", enter the code for the item you want to buy: ";
        std::cin >> item_code;
    }
    for (int counter : items_bought)
    {
        if (counter == item_code)
        {
            std::cout << "This item has already been purchased!";
        }
    }
    items_bought [0] = item_code;
    party_gold -= items[item_code].item_cost;
    std::cout << players[0].player_name << " just bought a " << items[item_code].item_name << " for " << items[item_code].item_cost << " gold. The party now has " << party_gold << " gold." << '\n';
}