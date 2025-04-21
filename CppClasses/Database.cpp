#include "Database.h"
#include "Car.h"
#include "Bike.h"

Database::~Database()
{
	for (Vehicle* obj : objects) {
	delete obj;
	}
}

void Database::Create(Vehicle::eType type)
{

	Vehicle* obj = nullptr;

	switch (type)
	{
	case Vehicle::eType::BICYCLE:
		obj = new Bike;
		break;

	case Vehicle::eType::CAR:
		obj = new Car;
		break;

	default:
		cout << "invalid input" << endl;
		return;
	}

	obj->Read(cout, cin);
	objects.push_back(obj);

}
void Database::DisplayName(const string& name)
{
	for (Vehicle* obj : objects) {
		if (obj->getName() == name) {
			obj->Write(cout);
		}
	}

}
// display all vehicles in a list
void Database::DisplayAll()
{
	for (Vehicle* obj : objects) {
		obj->Write(cout);
	}

}
// display vehicles by type
void Database::DisplayType(Vehicle::eType type)
{
	for (Vehicle* obj : objects) {
		if (obj->getType() == type) {
			obj->Write(cout);
		}
	}

}
