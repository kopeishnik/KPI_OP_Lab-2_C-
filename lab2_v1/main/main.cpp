#include "main-header.h"

using namespace std;

int main() {
	vector<pair<string, vector<int>>> data;
	int x = 1;
	ifstream fin1("eurovision" + to_string(x) + ".csv"), fin2("eurovision" + to_string(x+1) + ".csv");
	ReadFile(fin1, data);
	ReadFile(fin2, data);
	ofstream fout("result.csv");
	vector<pair<string, int>> rating;
	GetWinners(data, rating);
	//OutWinners(data);
	//короче позже там допишу вывод, я спать хочу
	return 0;
}
