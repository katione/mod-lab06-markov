// Copyright 2024 katione
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "textgen.h"

int main() {
	const int NPREF = 2;
	const int MAXGEN = 1000;
	string line;
	string str;
	ifstream input("text.txt.txt");
	if (!input) {
		cout << "Error!" << endl;
	}
	while (getline(input,line)) {
		str += line + " ";
	}
	Text_Gen text_gen;
	text_gen.text_file(NPREF, str);
	string result = text_gen.text_generation(MAXGEN, time(0));
	ofstream out("outtext.txt");
	out << result << endl;
	cout << result;
	return 0;
}
