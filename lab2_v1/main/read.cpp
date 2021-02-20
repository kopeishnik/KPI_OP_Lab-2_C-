#include "main-header.h"

using namespace std;

//ммм адекватное считывание
void ReadFile(const string s, vector<pair<string, vector<int>>>& data) {
	ifstream fin(s);
	int n;
	fin >> n;
	for (int i = 0; i <= n; i++) {
		string str;
		getline(fin, str);
		stringstream stream(str);
		cout << str << endl;
		string name;
		vector<int> votes;
		getline(stream, name, ',');
		while (stream) {
			int x;
			stream >> x;
			votes.push_back(x);
			if (stream.peek() == ',') stream.ignore(1);
		}
		if (name.size() > 0) data.push_back({ name, votes });
	}
}