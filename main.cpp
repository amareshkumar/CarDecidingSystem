#include "include/CarOptions.h"
#include "include/InputHandler.h"

#include <iostream>
#include <string>

using namespace std;


int main() {
	string input;
	string filename;
	input_format();
	cin >> input;
	process_input(input);
}