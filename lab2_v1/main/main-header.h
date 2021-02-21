#pragma once

#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <experimental/filesystem>

void ReadFile(const std::string, std::vector<std::pair<std::string, std::vector<int>>>&);
void GetWinners(std::vector<std::pair<std::string, std::vector<int>>>, std::vector<std::pair<std::string, int>>&);
void OutWinners(std::ostream& stream, std::vector<std::pair<std::string, int>>&);
// ���������
// ����� �����
