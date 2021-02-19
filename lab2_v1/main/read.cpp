#include "main-header.h"

using namespace std;

//ммм адекватное считывание
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
		int a;
		fin >> a;
		/*while (stream) {
			int x;
			fin >> x;
			votes.push_back(x);
			cout << x << ' ';
			//if (stream) fin.ignore(1);
		}*/
		data.push_back({ name, votes });
	}
}