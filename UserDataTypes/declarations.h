#pragma once

// enums should be above where they're eused
enum MeatType {
	HAM,
	TURKEY,
	PASTRAMI,
	ROASTBEEF
};

class Sandwitch {
public: // classes are automatically private, must set public
	// anything below this is public

	MeatType mtpMeat;
	float fltWeight;

	void Toast();

private: // can make certain attributes private
	// anything below this is private
	bool blnIsToasted = false;

};