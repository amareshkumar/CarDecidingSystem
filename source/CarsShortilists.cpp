#pragma once 
#include "../include/CarOptions.h"

//Concrete class Ford
class Ford : public CarOptionsToBuy {
private:
	string uniqueness;

public:
	//specific to class 
	virtual string whats_unique_about_it(CarOptionsToBuy& car) {
		return "Feel good, safe 6 air bags and super comfortable";
	}

	//specific to brand and cars variant, should return an enum Color 
	virtual vector <CarColors> colors_available() const {
		vector <CarColors> colors;
		colors.push_back(CarColors::BLACk);
		colors.push_back(CarColors::WHITE);
		colors.push_back(CarColors::RED);
		colors.push_back(CarColors::SILVER);

		//ToDo: add CANYON_RIDGE and WHITE GOLD
		return colors;
	}
	//specific to brand and cars variant, should return an enum FuelVariant 
	vector <FuelVariant> fuel_variant() {

	}

	//striclty specific to vehicle 
	virtual VehicleType vehicle_type() = 0 {
		return VehicleType::COMPACT;
	}
};