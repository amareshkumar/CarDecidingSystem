#pragma once

#include "ICarBuyingOptions.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum CarsBrandList {
	Maruti, Ford, Tata, Volkswagon, Honda, Hyundai
};

enum CarColors { RED, BLACk, WHITE, BLUE, YELLOW, SILVER };
enum FuelVariant { PETROL, DIESEL, ELECTRIC, CNG };
enum VehicleType { SUV, HATCHBACK, SEDAN, COMPACT, CUV };



class CarOptionsToBuy : ICarBuyingOptions {
private:
	string m_brand;
	VehicleType m_vehicle_type;
	CarColors m_car_colors;
	FuelVariant m_fuel_variant;
	double m_budget;

	//user input
	unordered_map <string, string> m_buyer_criteria;

	//container of car depending upon criteria
	vector < vector <string> > shortlistedcars;


public:
	CarOptionsToBuy() {
		//check if m_buyer_criteria is set
		if (!m_buyer_criteria.empty()) {
			m_brand = m_buyer_criteria["Brand"];
			m_vehicle_type = static_cast <VehicleType> (atoi((m_buyer_criteria["VehicleType"]).c_str()));
			m_car_colors = static_cast <CarColors> (atoi((m_buyer_criteria["Color"]).c_str()));;
			m_fuel_variant = static_cast <FuelVariant> (atoi((m_buyer_criteria["FuelVariant"]).c_str()));;
			m_budget = stol(m_buyer_criteria["Budget"]);
		}
	}


	explicit CarOptionsToBuy(unordered_map <string, string> user_input) : m_buyer_criteria(user_input) {
		m_brand = user_input["Brand"];
		m_vehicle_type = static_cast <VehicleType> (atoi((user_input["VehicleType"]).c_str()));
		m_car_colors = static_cast <CarColors> (atoi((user_input["Color"]).c_str()));;
		m_fuel_variant = static_cast <FuelVariant> (atoi((user_input["FuelVariant"]).c_str()));;
		m_budget = stol(user_input["Budget"]);
	}

	//implement inherited pure virtual functions
	void set_buyer_criteria(unordered_map <string, string> user_input) {
		m_buyer_criteria = user_input;
	}

	void suggested_cars() {
		for (auto v : shortlistedcars) { for (auto v_v : v) { cout << v_v << " "; }; }
	}
};