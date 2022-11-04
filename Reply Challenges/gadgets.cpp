#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int testCases, typeGadgets;
	vector<vector<int> > data;
	
	cin >> testCases;
	cout << endl;
	
	for(int i = 0; i < testCases; i++){
		vector<int> temp;
		cin >> typeGadgets;
		
		for(int j = 0; j < typeGadgets; j++){
			int countGadgets;
			cin >> countGadgets;
			temp.push_back(countGadgets);
		}
		data.push_back(temp);
		cout << endl;
	}
	
	vector<int> results;
	
	for(int i = 0; i < data.size(); i++){
		vector<int> dtemp;
		int total = 0;
		for(int j = 0; j < data.at(i).size(); j++){
			int datatemp;
			int count;
			count = 1;
			datatemp = data.at(i).at(j);
			
			for(int z = 0; z < 1; z--) {
				if((datatemp != 2) && (datatemp % 2 == 0)){
					datatemp /= 2;
					count += 1;
				}else{
					break;
				}
			}
			
			dtemp.push_back(count);
		}
		sort(dtemp.begin(), dtemp.end());
		
		int max_number = 0;
		for(int rep = 0; rep < dtemp.size(); rep++){
			if(max_number < dtemp.at(i)){
				max_number = dtemp.at(i);
			}
		}
		
		results.push_back(max_number);
	}
	
	
	for(int dsp = 0; dsp < results.size(); dsp++)
	{
		cout << "Case #" << dsp + 1 << ": " << results.at(dsp) << endl;
	}
}
