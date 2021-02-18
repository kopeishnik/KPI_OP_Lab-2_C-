#include "main-header.h"

using namespace std;

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