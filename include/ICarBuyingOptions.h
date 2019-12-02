#pragma once

#include <iostream>
#include <unordered_map>

using namespace std;

class ICarBuyingOptions {

public:
	virtual void suggested_cars() = 0;
	virtual void set_buyer_criteria(unordered_map <string, string> user_input) = 0;
};
