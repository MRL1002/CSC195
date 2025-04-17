#pragma once
#include <vector>
#include "Item.h"
using namespace std;

class Database {
public:

	vector<Item*> objects;

	~Database();

	void Create(Item::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(Item::eType type);

protected:



};

