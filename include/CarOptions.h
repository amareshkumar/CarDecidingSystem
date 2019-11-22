#pragma once

//Wishlist of cars
enum Liked_Cars {
	Maruti_Swift = 0,
	Ford_FreeStyle = 1,
	Tata_Nexon = 2,
	Wolkswagon = 3,
	Honda_WRV = 4,
	Hyndai_Elite_i20 = 5
};

//cars available colors 
enum CarColors { RED, BLACk, WHITE, BLUE, YELLOW, SILVER };
enum FuelVariant { PETROL, DIESEL, ELECTRIC, CNG };
enum VehicleType { SUV, HATCHBACK, SEDAN, COMPACT, CUV };

using namespace std;
#include <iostream>
//#include <list> 
#include <vector>

class CarOptionsToBuy {
	double budget;
	//subject to be observed from CarsConsidering
	// bool special_discount;

	// //list of observers 
	// list < CarObservers> carobservers; 
public:
	bool is_in_budget(double budget) {
		if (getBudget() <= budget) return true; else return false;
	}

	double getBudget() {
		return this->budget;
	}
	double setBudget(double budget) {
		this->budget = budget;
	}
	void verdict() {

		if (is_in_budget(getBudget())) { cout << "Yes, go for it" << endl; }
		else { cout << "You could explore alternatives!"; }
	}

	//specific to class 
	virtual string whats_unique_about_it(CarOptionsToBuy & car) = 0;

	//specific to brand and cars variant, should return list of colors available 
	virtual vector <CarColors> colors_available() const = 0;
	//specific to brand and cars variant, should return an enum FuelVariant 
	virtual vector <FuelVariant> fuel_variant() const = 0;

	//striclty specific to vehicle 
	virtual VehicleType vehicle_type() = 0;
};