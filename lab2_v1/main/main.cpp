#include "main-header.h"

using namespace std;

int main() {
	vector<pair<string, vector<int>>> data;
	int x = 1;
	ifstream fin("eurovision1.csv");
	while (fin.is_open()) {
		ReadFile(fin, data);
		x++;
		string filename = "eurovision" + to_string(x) + ".csv";
		cout << filename << endl;
		fin.open(filename);
	}
	//условно еще какие-то функции там, вывод какой-то
	return 0;
}