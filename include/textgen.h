// Copyright 2024 katione
#ifndef INCLUDE_TEXTGEN_H_
#define INCLUDE_TEXTGEN_H_

#include <string>
#include <iostream>
#include <deque>
#include <map>
#include <ctime>
#include <vector>
#pragma once
using namespace std;


class Text_Gen {
 public:
	 typedef deque<string> prefix;
	 prefix p_refix;
	 prefix p_prefix;
	 map<prefix, vector<string>> statetab;
	 void text_file(int NPREF, string& file);
	 string text_generation(int MAXGEN_lenght , int ti_me);
};

#endif  // INCLUDE_TEXTGEN_H_
