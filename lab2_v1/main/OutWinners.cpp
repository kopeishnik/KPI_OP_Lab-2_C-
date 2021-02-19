//вообще файл не нужен, хз зачем я его запушил
//но вообще тут функция, так шо да, пусть будет на всякий

#define nameSpaceX namespace std; // xD

#include "main-header.h"

using nameSpaceX; 

void OutWinners(ostream& stream, vector<pair<string, int>>& rating) {
	for (int i = 0; i < 10; i++) {
		stream << i + 1 << ',' << rating[i].first << ',' << rating[i].second << endl;
	}
}