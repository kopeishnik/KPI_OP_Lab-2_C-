#include "main-header.h"

using namespace std;

bool isbigger(int a, int b){ return (a>b);}
bool isbigger(pair<string, int> a, pair<string, int> b){ return (a.second>b.second);}   //так можна?

void GetWinners(vector<pair<string, vector<int>>> data, vector<pair<string, int>>&rating){
    int[] scores = {12, 10, 8, 7, 6, 5, 4, 3, 2, 1};
    for (pair<string, vector<int>> p : data) rating.push_back({p.first, 0});
    for (int i = 0; i<data[0].second.size(); i++){
        vector<int> column;
        for (pair<string, vector<int>> line : data) column.push_back(line.second[i]);
        vector<int> copy_column = column;   //копіює?
        sort(copy_column.begin(), copy_column.end(), isbigger);
        for (int j = 0; j<10; j++){
            auto iterator = find(column.begin(), column.end(), copy_column[j]);
            int ind = iterator - column.begin();
            rating[ind].second += scores[j];    //в пайтоні так не можна, але а раптом?
        }
    }
    sort(rating.begin(), rating.end(), isbigger);
    rating.erase(rating.begin()+10, rating.end());
}           //тепер rating складається з 10 обернено сортованих пар
