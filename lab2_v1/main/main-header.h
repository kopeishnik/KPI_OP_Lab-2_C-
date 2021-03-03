#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

std::vector<std::string> GetFiles(const std::string);
void ReadFile(const std::string, std::vector<std::pair<std::string, std::vector<int>>>&);
void GetWinners(std::vector<std::pair<std::string, std::vector<int>>>, std::vector<std::pair<std::string, int>>&);
void OutWinners(std::ostream& stream, std::vector<std::pair<std::string, int>>&);
std::string ReadName(std::istream&);
// ���������
// ����� �����
