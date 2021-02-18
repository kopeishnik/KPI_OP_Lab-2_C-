#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

void ReadFile(std::ifstream&, std::vector<std::pair<std::string, std::vector<int>>>&);
