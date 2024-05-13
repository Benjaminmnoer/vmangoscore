/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef MANGOS_PLAYERBOTSTATE_H
#define MANGOS_PLAYERBOTSTATE_H

#include <map>
#include "Platform/Define.h"
#include "Log.h"

enum QuestStatus
{
	QUEST_ACCEPTED = 0,
	QUEST_COMPLETED = 1
};

class PlayerBotState
{
public:
	PlayerBotState() {};
	bool SetPosition(float x, float y, float z, float o) { posX = x; posY = y; posZ = z; posO = o; }
	bool SetEmptyBagSlots(uint8 emptySlots) { emptyBagSlots = emptySlots; }
	uint32 GetQuest(uint8 index)
	{
		/*f (index <= activeQuests)
		{
			return quests[index];
		}*/

		return 0;
	}
	bool AddQuest(uint32 questGuid)
	{
		if (activeQuests < 20)
		{
			//quests.insert(std::pair<uint32, QuestStatus>(questGuid, QUEST_COMPLETED));
		}

		sLog.Out(LOG_BASIC, LOG_LVL_ERROR, "Quest limit reached");
		return false;
	}
	bool RemoveQuest(uint32 questGuid)
	{
		return quests.erase(questGuid);
	}
private:
	uint8 lvl;
	float posX;
	float posY;
	float posZ;
	float posO;
	uint8 emptyBagSlots;
	uint32 gold;
	uint8 activeQuests;
	std::map<uint32, QuestStatus> quests;
	std::map<uint32, uint8> creatureKillCount;
	std::map<uint32, uint8> itemCount;
	std::map<uint32, bool> areaExplored;
};
#endif