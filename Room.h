#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
#include "ZorkUL.h"
#include "Monster.h"
using namespace std;
using std::vector;

class Room {

private:
	string description;
	map<string, Room*> exits;
	string exitString();
    vector <Item> itemsInRoom;
    Monster *monsterInRoom;


public:
    int numberOfItems();
	Room(string description);
    Room();
    ~Room();
	void setExits(Room *north, Room *east, Room *south, Room *west);
	string shortDescription();
	string longDescription();
    string getDescription();
    Room* nextRoom(string direction);
    void addItem(Item *inItem);
    string displayItem();
    int isItemInRoom(string inString);
    int getItemIndexByName(std::string itemName);
    void addMonster(Monster *Monster);
    string getItems();
    void removeItem(Item *item);
    Monster* getMonsterInRoom() const;
    string solveRiddle();
    Item* getItem();




};

#endif
