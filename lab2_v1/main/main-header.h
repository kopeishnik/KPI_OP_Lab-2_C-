#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

void ReadWhile(int, std::vector<std::pair<std::string, std::vector<int>>>&);
void ReadFile(std::ifstream&, std::vector<std::pair<std::string, std::vector<int>>>&);
void GetWinners(std::vector<std::pair<std::string, std::vector<int>>>, std::vector<std::pair<std::string, int>>&);
// ���������
// ����� �����
