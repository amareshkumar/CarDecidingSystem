#include "../include/InputHandler.h"
#include "../include/CarOptions.h"

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

CarOptionsToBuy cars;

void EnterSetCriteria(unordered_map <string, string>& input) {
	cars.set_buyer_criteria(input);
}


void process_input(string input) {
	vector <string> refined_input;
	unordered_map <string, string> input_value_pairs; //key is crtiteria, value is user's input

	string del = ", ";
	size_t pos = 0;
	string token;

	while ((pos = input.find(del)) != string::npos) {
		token = input.substr(0, pos);
		refined_input.push_back(token);
		input.erase(0, pos + del.length());
	}

	string del2 = ": ";
	for (int i = 0; i < refined_input.size(); i++) {
		string this_ele = refined_input[i];
		string key_value;
		std::size_t current, previous = 0;
		current = this_ele.find(del2);
		string key, value;
		while (current != std::string::npos) {
			key = this_ele.substr(previous, current - previous);
			previous = current + 1;
			current = this_ele.find(del2, previous);
		}
		value = this_ele.substr(previous, current - previous);
		input_value_pairs.insert(std::make_pair(key, value));
	}

	//set criteria
	//EnterSetCriteria(input_value_pairs);
	CarOptionsToBuy cars(input_value_pairs);


	//Display the suggested cars: 
	cars.suggested_cars();
}



void input_format() {
	cout << "##### Car Deciding System #########\n\n";
	cout << "\nBrand: <name> (opt), Budget: <in lacs> (req), Transmission: <manual/auto> (req), FuelVariant: <petrol/diesel> (req) , Color: <colorchoice> (opt), VehicleType: <SUV/HATCHBACK> (opt)";


	cout << "\nEnter the requirement in above form: \n\n";
}