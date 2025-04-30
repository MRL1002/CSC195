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
Vehicle* Database::Create(int intType)
{

	Vehicle* obj = nullptr;

	Vehicle::eType type = static_cast<Vehicle::eType>(intType);

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

	return obj;
}
void Database::DisplayName(const string& name)
{
	for (Vehicle* obj : objects) {
		if (obj->getName() == name) {
			cout << *obj;
		}
	}

}
// display all vehicles in a list
void Database::DisplayAll()
{
	for (Vehicle* obj : objects) {
		cout << *obj;
	}

}
// display vehicles by type
void Database::DisplayType(Vehicle::eType type)
{
	for (Vehicle* obj : objects) {
		if (obj->getType() == type) {
			cout << *obj;
		}
	}

}

void Database::Load(const string& fName)
{
	ifstream input(fName);
	if (input.is_open()) {
		Database::objects.clear();
		while (!input.eof()) {

			int type;
			input >> type;
			Vehicle* vehicle = Create(type);
			vehicle->Read(input);
			objects.push_back(vehicle);

		}
	}

}

void Database::Save(const string& fName)
{
	ofstream output(fName);
	if (output.is_open()) {

		for (Vehicle* vehicle : objects) {
			output << static_cast<int>(vehicle->getType()) << endl;
			vehicle->Write(output);
		}

	}
}
