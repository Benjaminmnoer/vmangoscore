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

#ifndef MANGOS_PLAYERBOTACTION_H
#define MANGOS_PLAYERBOTACTION_H

#include <string>

class PlayerBotAction
{
public:
	PlayerBotAction() {};
	PlayerBotAction(std::string actionName, ) { name = actionName; };
	virtual bool canExecuteAction(WorldSession* session) = 0;
	virtual bool canExecuteActionGiven(WorldSession* session, uint8 given[64]) = 0;
	virtual bool executeAction() = 0;
private:
	std::string name;
	uint8 preconditions[64];
};

class KillEnemyAction : PlayerBotAction
{
public:
	KillEnemyAction() {};
	explicit KillEnemyAction(std::string actionName, uint32 targetGuid) : PlayerBotAction(actionName) 
	{
		_targetGuid = targetGuid;
	}

	bool canExecuteAction(WorldSession* session)
	{
		return true;
	}

	bool canExecuteActionGiven(WorldSession* session, uint8 given[64])
	{
		return true;
	}

	bool executeAction()
	{
		return true;
	}
private:
	uint32_t _targetGuid;
};

class GoToQuestPointAction : PlayerBotAction
{
public:
	explicit GoToQuestPointAction(std::string actionName, Position questPosition) : PlayerBotAction(actionName)
	{
		_questPosition = questPosition;
	}
	bool canExecutAction();
	bool canExecuteActionGiven();
	bool executeAction();
private:
	Position _questPosition;
};

class GoToPointAction : PlayerBotAction
{
public:
	bool canExecutAction();
	bool canExecuteActionGiven();
	bool executeAction();
private:
};
#endif