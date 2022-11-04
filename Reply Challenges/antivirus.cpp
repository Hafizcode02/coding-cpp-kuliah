#include <iostream>
#include <vector>
#include <string>

using namespace std;

void doSomething(vector<vector<string> >charCount, vector<int> countTxtVirus){
	vector<vector<int> > result;
	
	for(int i = 0; i < charCount.size(); i++){
		
		for(int j = 0; j < charCount.at(i).size(); j++)
		{
			
		}
	}
}

int main()
{
	int testCases;
	vector<vector<string> >charCount;
	vector<int> countTxtVirus;
	
	
	cin >> testCases;
	cout << endl;
	
	if(testCases < 1000){
		for(int i = 0; i < testCases; i++){
			vector<int> temp;
			for(int j = 0; j < 4; j++){
				int tempDatac;
				cin >> tempDatac;
				temp.push_back(tempDatac);
			}
			
			int txvirus = 0;
			cin >> txvirus;
			countTxtVirus.push_back(txvirus);
			
			vector<string> tempString;
			for(int k = 0; k < 4; k++)
			{
				string textvirus;
				cin >> textvirus;
				tempString.push_back(textvirus);
			}
			
			charCount.push_back(tempString);
			cout << endl;
		}
		doSomething(charCount, countTxtVirus);
	}
}
