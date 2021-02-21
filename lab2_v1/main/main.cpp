#include "main-header.h"

using namespace std;

template <typename key, typename value> //вместо OutWinners
ostream& operator<< (ostream& stream, vector<pair<key, value>> v) {
	int n = 0;
	if (v.size() >= 10) n = 10;
	else n = v.size();
	for (int i = 0; i < n; i++) {
		stream << i + 1 << ',' << v[i].first << ',' << v[i].second << endl;
	}
	return stream;
}

int main() {
	vector<pair<string, vector<int>>> data;
	setlocale(LC_ALL, "russian");
	vector<string> files = GetFiles("giv me path"); //C:\papka\another\ в моем случае
	for (const auto& file : files) {
		ReadFile(file, data);
	}
	vector<pair<string, int>> rating;
	GetWinners(data, rating);
	ofstream fout("results.csv");
	//OutWinners(fout, rating); //вместо него юзаю перегрузку оператора вывода
	fout << rating;
	return 0;
}