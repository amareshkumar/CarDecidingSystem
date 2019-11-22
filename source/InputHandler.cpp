#include "../include/InputHandler.h"

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void process_input(string input) {
	vector <string> refined_input;
	unordered_map <string, string> input_value_pairs;


	string del = ", ";
	size_t pos = 0;
	string token;

	while ((pos = input.find(del)) != string::npos) {
		token = input.substr(0, pos);
		refined_input.push_back(token);
		input.erase(0, pos + del.length());
	}


	for (auto v : refined_input) { cout << v << " "; }
	//process input further

	//CarOptionsToBuy* car;
	//
	//if (refined_input.find("Ford")) {
	//	car = new Ford();
	//}
}



void input_format() {
	cout << "Enter the requirement in follwing form: " << endl;

	cout << "Brand: <name> (optional), Budget: <inlac-rounded-figure> (required), Transmission: <manual/auto> (required), Gas-variant: <petrol/diesel> (req) , color: <colorchoice> (opt), Build-type: <SUV/CUV/HATCHBACK/SEDAN> (opt)";
	cout << "you can also provide json file path: ";

}