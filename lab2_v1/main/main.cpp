#include "main-header.h"

using namespace std;

int main() {
	vector<pair<string, vector<int>>> data;
	vector<pair<string, int>> rating;
	ifstream fin1("eurovision1.csv"), fin2("eurovision2.csv");
	ReadFile(fin1, data);
	ReadFile(fin2, data);
	vector<pair<string, int>> rating;
	for (const auto& r : data) rating.push_back({ r.first, 0 });
	ofstream fout("result.csv");
	//CalculateWinners(data, rating);
	//OutWinners(data);
	return 0;
}