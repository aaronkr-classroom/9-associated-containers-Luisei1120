#pragma once
#ifndef GUARD_split_h
#define GUARD_split_h

#include <algorithm> //find_if()
#include <cctype> //isspace()
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 인수가 공백일 때는 true, 그렇지 않을 대는 false
bool space(char);


// 인수가 공백일 때는 fasle, 그렇지 않을 대는 true
bool not_space(char);

vector<string> split(const string&);
#endif