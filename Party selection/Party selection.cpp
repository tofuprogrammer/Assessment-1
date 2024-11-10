#include "Functions (Party selection).hpp"

int main()
{
    struct Player
    {
        std::string playerName;
    	std::string playerRole;
    };
    Player players[3]; // Array of 3 players.
    std::cout << "Player 1, enter your name: ";
    std::cin >> players[0].playerName;
    std::cout << "Player 2, enter your name: ";
    std::cin >> players[1].playerName;
    std::cout << "Player 3, enter your name: ";
    std::cin >> players[2].playerName;

    struct Items // Stores the basic format of information on an item in the shop.
    {
        std::string itemName;
        int itemCost;
        int itemDamage;
        int itemStock;
    };

    // An array storing the items in the shop, with their respective costs and damage values.
    Items items[7];
    items[0].itemName = "Greatsword";
    items[0].itemCost = 40;
    items[0].itemDamage = 100;
	players[0].playerRole = "Knight";

    items[1].itemName = "Scimitar";
    items[1].itemCost = 35;
    items[1].itemDamage = 75;
	players[0].playerRole = "Knight";

    items[2].itemName = "Dagger";
    items[2].itemCost = 10;
    items[2].itemDamage = 35;
	players[0].playerRole = "Knight";

    items[3].itemName = "Longbow";
    items[3].itemCost = 20;
    items[3].itemDamage = 55;
	players[0].playerRole = "Archer";

    items[4].itemName = "Crossbow";
    items[4].itemCost = 40;
    items[4].itemDamage = 100;
	players[0].playerRole = "Archer";

    items[5].itemName = "Rusty spear";
    items[5].itemCost = 10;
    items[5].itemDamage = 35;
	players[0].playerRole = "Spearman";

    items[6].itemName = "Iron spear";
    items[6].itemCost = 20;
    items[6].itemDamage = 65;
	players[0].playerRole = "Spearman";

	int itemCode;
	int itemsBought[3];
	bool selectionConfirmed = false;
	std::string selectionCheck = "no";
	
    std::cout << '\n';

	while (selectionConfirmed == false)
	{
		for (int counter = 0; counter <= 6; counter++)
		{
			items[counter].itemStock = 1;
		}
		int partyGold = 100; // Initial gold amount for the party.
		std::cout << "Welcome to the shop, " << players[0].playerName << ", " << players[1].playerName << ", and " << players[2].playerName << "!\n";
		std::cout << "The party begins with " << partyGold << " gold.\n";
		std::cout << "Here's the items you can buy.\n";
		// List of items in the shop
		std::cout << "1. Greatsword (" << items[0].itemCost << " coins, " << items[0].itemDamage << " damage)\n";
		std::cout << "2. Scimitar (" << items[1].itemCost << " coins, " << items[1].itemDamage << " damage)\n";
		std::cout << "3. Dagger (" << items[2].itemCost << " coins, " << items[2].itemDamage << " damage)\n";
		std::cout << "4. Longbow (" << items[3].itemCost << " coins, " << items[3].itemDamage << " damage)\n";
		std::cout << "5. Crossbow (" << items[4].itemCost << " coins, " << items[4].itemDamage << " damage)\n";
		std::cout << "6. Rusty spear (" << items[5].itemCost << " coins, " << items[5].itemDamage << " damage)\n";
		std::cout << "7. Iron spear (" << items[6].itemCost << " coins, " << items[6].itemDamage << " damage)\n";
	
		std::cout << '\n';
		std::cout << players[0].playerName << ", enter the code for the item you want to buy: ";
		std::cin >> itemCode;
		while (itemCode < 1 || itemCode > 7 || std::cin.fail())
		{
			std::cerr << "Invalid item code" << '\n';
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << players[0].playerName << ", enter the code for the item you want to buy: ";
			std::cin >> itemCode;
		}

		while (!isItemAffordable(items[itemCode - 1].itemCost, partyGold) || !isItemAvailable(items[itemCode - 1].itemStock))
		{
			if (!isItemAffordable(items[itemCode - 1].itemCost, partyGold))
			{
				std::cerr << "You can't afford that item" << '\n';
			}
			if (!isItemAvailable(items[itemCode - 1].itemStock))
			{
				std::cerr << "That item is out of stock" << '\n';
			}
			std::cout << players[0].playerName << ", enter the code for the item you want to buy: ";
			std::cin >> itemCode;
		}
		itemsBought[0] = itemCode - 1;
		partyGold -= items[itemsBought[0]].itemCost;
		items[itemsBought[0]].itemStock--;
		std::cout << players[0].playerName << " just bought a " << items[itemsBought[0]].itemName << '\n';
		std::cout << "The party now has " << partyGold << " gold.\n";
		std::cout << '\n';
	
		std::cout << players[1].playerName << ", enter the code for the item you want to buy: ";
		std::cin >> itemCode;
		while (itemCode < 1 || itemCode > 7 || std::cin.fail())
		{
			std::cerr << "Invalid item code" << '\n';
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << players[1].playerName << ", enter the code for the item you want to buy: ";
			std::cin >> itemCode;
		}

		while (!isItemAffordable(items[itemCode - 1].itemCost, partyGold) || !isItemAvailable(items[itemCode - 1].itemStock))
		{
			if (!isItemAffordable(items[itemCode - 1].itemCost, partyGold))
			{
				std::cerr << "You can't afford that item" << '\n';
			}
			if (!isItemAvailable(items[itemCode - 1].itemStock))
			{
				std::cerr << "That item is out of stock" << '\n';
			}
			std::cout << players[1].playerName << ", enter the code for the item you want to buy: ";
			std::cin >> itemCode;
		}
		itemsBought[1] = itemCode - 1;
		partyGold -= items[itemsBought[1]].itemCost;
		items[itemsBought[1]].itemStock--;
		std::cout << players[1].playerName << " just bought a " << items[itemsBought[1]].itemName << '\n';
		std::cout << "The party now has " << partyGold << " gold.\n";
		std::cout << '\n';

		std::cout << players[2].playerName << ", enter the code for the item you want to buy: ";
		std::cin >> itemCode;
		while (itemCode < 1 || itemCode > 7 || std::cin.fail())
		{
			std::cerr << "Invalid item code" << '\n';
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << players[2].playerName << ", enter the code for the item you want to buy: ";
			std::cin >> itemCode;
		}

		while (!isItemAffordable(items[itemCode - 1].itemCost, partyGold) || !isItemAvailable(items[itemCode - 1].itemStock))
		{
			if (!isItemAffordable(items[itemCode - 1].itemCost, partyGold))
			{
				std::cerr << "You can't afford that item" << '\n';
			}
			if (!isItemAvailable(items[itemCode - 1].itemStock))
			{
				std::cerr << "That item is out of stock" << '\n';
			}
			std::cout << players[2].playerName << ", enter the code for the item you want to buy: ";
			std::cin >> itemCode;
		}
		itemsBought[2] = itemCode - 1;
		partyGold -= items[itemsBought[2]].itemCost;
		items[itemsBought[2]].itemStock--;
		std::cout << players[2].playerName << " just bought a " << items[itemsBought[2]].itemName << '\n';
		std::cout << "The party now has " << partyGold << " gold.\n";
		std::cout << '\n';

		std::cout << "The party:\n";
		std::cout << "- Player 1 (" << players[0].playerName << "), Role: " << players[0].playerRole << ", Weapon: " << items[itemsBought[0]].itemName << ", Damage: " << items[itemsBought[0]].itemDamage << '\n';
		std::cout << "- Player 2 (" << players[1].playerName << "), Role: " << players[1].playerRole << ", Weapon: " << items[itemsBought[1]].itemName << ", Damage: " << items[itemsBought[1]].itemDamage << '\n';
		std::cout << "- Player 3 (" << players[2].playerName << "), Role: " << players[2].playerRole << ", Weapon: " << items[itemsBought[2]].itemName << ", Damage: " << items[itemsBought[2]].itemDamage << '\n';
		std::cout << "Are you happy with your selection of weapons? Enter \"yes\" to continue: ";
		std::cin >> selectionCheck;
		if (selectionCheck == "yes")
		{
			selectionConfirmed = true;
		}
	}
	std::cout << "You find yourselves in a forest. Suddenly, a monster appears...";
}