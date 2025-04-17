#include "Database.h"
#include "Item.h"
#include "Equipment.h"
#include "TranqWeapon.h"

Database::~Database()
{
	for (Item* obj : objects) {
	delete obj;
	}
}

void Database::Create(Item::eType type)
{

	Item* obj = nullptr;

	switch (type)
	{

	case Item::eType::STEALTH:
		obj = new Equipment;
		break;
	case Item::eType::TRANQ:
		obj = new TranqWeapon;
		break;
	}	

	obj->Read(cout, cin);
	objects.push_back(obj);

}
void Database::Display(const string& name)
{

	for (Item* obj : objects) {
		if (obj->getName() == name) {
			obj->Write(cout);
		}
	}
}
void Database::DisplayAll()
{



}



void Database::Display(Item::eType type)
{
}
