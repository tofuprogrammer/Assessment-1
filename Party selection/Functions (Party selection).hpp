#pragma once

#include <iostream>
#include <string>

bool isItemAffordable(int itemCost, int partyGold)
{
	if (partyGold >= itemCost)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isItemAvailable(int itemStock)
{
	if (itemStock > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}