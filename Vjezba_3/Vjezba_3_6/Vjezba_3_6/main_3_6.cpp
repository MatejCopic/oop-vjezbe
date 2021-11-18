//napisite funckiju koja sringove koje korsnik unosi sprema u vektor stringova,
//svaki string preokrene te sortira vektor po preokrenutim sringovima
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "header_3_6.hpp"

using std::string;

int main() {

	std::vector<string> vek_str;
	funk(vek_str);
	ispis(vek_str);
	return 0;
}