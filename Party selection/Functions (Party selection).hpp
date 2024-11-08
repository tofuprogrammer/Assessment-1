#pragma once

#include <iostream>
#include <string>

inline bool isItemAffordable(int itemCost, int partyGold)
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
inline bool isItemAvailable(int itemStock)
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