#include "main-header.h"

using namespace std;

void GetWinners(vector<pair<string, vector<int>>> data, vector<pair<string, int>>&rating){
    for (pair<string, vector<int>> p : data) rating.push_back({p.first, 0});
    for (int i = 0; i<data[0].second.size(); i++){
        vector<int> column;
        for (pair<string, vector<int>> line : data) column.push_back(line.second[i]);
    }
}
