#include "main-header.h"

using namespace std;
namespace fs = std::experimental::filesystem;

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

string GetDirectory(const string& request);

int main() {
	vector<pair<string, vector<int>>> data;
	string p = GetDirectory("giv me path");
	const fs::path path = p;
	setlocale(LC_ALL, "russian");
	//C:\\Материалы\\workspace\\contest-files
	//C:\Материалы\workspace\KPI_OP_Lab-2_C++\lab2_v1\main
	//C:\Материалы\workspace\contest-files
	cout << "zis path: " << fs::current_path() << endl;
	for (auto& entry : fs::directory_iterator(path)) {
		cout << entry.path() << endl;
		//ReadFile(entry.path().string(), data);
	}
	ReadFile("eurovision1.csv", data);
	ReadFile("eurovision2.csv", data);
	vector<pair<string, int>> rating;
	cout << endl;
	int it = 0;
	for (const auto& x : data) {
		cout << it << ' ' << x.first << ' ';
		for (auto y : x.second) cout << y << ' ';
		cout << endl;
		it++;
	}
	GetWinners(data, rating);
	for (const auto& x : rating) {
		cout << x.first << ' ' << x.second << endl;
	}
	ofstream fout("results.csv");
	//OutWinners(fout, rating); //вместо него юзаю перегрузку оператора вывода
	fout << rating;
	return 0;
}

string GetDirectory(const string& request) {
	string s;
	cout << request << ": ";
	cin >> s;
	return s;
}