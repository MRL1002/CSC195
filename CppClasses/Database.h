#pragma once
#include <vector>
#include "Vehicle.h"
using namespace std;

class Database {
public:

	vector<Vehicle*> objects;

	~Database();

	void Create(Vehicle::eType type);
	void DisplayAll();
	void DisplayName(const std::string& name);
	void DisplayType(Vehicle::eType type);

protected:



};

