#include "main-header.h"

using namespace std;

//test feature
void ReadWhile(int x, vector<pair<string, vector<int>>>& data) {
	string filename = "eurovision" + to_string(x) + ".csv";
	ifstream fin(filename.c_str());
	ReadFile(fin, data);
	x++;
	filename = "eurovision" + to_string(x) + ".csv";
	ifstream fin1(filename.c_str());
	if (fin1.is_open()) {
		ReadWhile(x, data);
	}
}

void ReadFile(ifstream& fin, vector<pair<string, vector<int>>>& data) {
	int n;
	fin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		getline(fin, str);
		stringstream stream(str);
		string name;
		vector<int> votes;
		getline(stream, name, ',');
		while (stream) {
			int x = 0;
			fin >> x;
			votes.push_back(x);
			if (stream) fin.ignore(1);
		}
		data.push_back({ name, votes });
	}
}