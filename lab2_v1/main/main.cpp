#include "main-header.h"

#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

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
	cout << "zis path: " << fs::current_path() << endl;
	vector<string> files = GetFiles("giv me path"); //C:\papka\another\ в моем случае
	for (const auto& file : files) {
		ReadFile(file, data);
	}
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