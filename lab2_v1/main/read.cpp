#include "main-header.h"
#include <direct.h>
#include <io.h>

using namespace std;

string GetDirectory(const string& request) {
	string s;
	cout << request << ": ";
	cin >> s;
	return s;
}

vector<string> GetFiles(const string request) {
	vector<string> files;
	_finddata_t source;
	//C:\papka\another\ 
	string path = GetDirectory(request);
	if (path[path.size() - 1] != '\\') path += '\\';
	intptr_t handle = _findfirst((path + "*.csv").c_str(), &source);
	do {
		if (source.name != "results.csv")files.push_back(path + source.name);
		cout << path + source.name << endl;
	} while (_findnext(handle, &source) == 0);
	_findclose(handle);
	return files;
}

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