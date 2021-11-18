#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "header_3_5.hpp"

using std::string;

void repeat(const std::string str,const std::string podstr,int &cnt){

	for (int i = str.find(podstr, 0); i != string::npos; cnt++) {
		i = str.find(podstr, i + 1);
	}
}