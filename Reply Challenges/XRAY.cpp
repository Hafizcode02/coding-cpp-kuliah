#include <iostream>
#include <vector>

using namespace std;

void doCalculate(vector<vector<int> > boneData)
{
	vector<int> results;
	int a, b;
	
	for(int i = 0; i < boneData.size(); i++)
	{
		int calc = 0;
		for(int j = 0; j < boneData.at(i).size(); j++){
			if(boneData.at(i).at(j) > 0){
				if(j % 2 == 0){
					b = boneData.at(i).at(j);
				}else{
					a = boneData.at(i).at(j);
				}
				
				if((j <= 2) && (j % 2 == 0))
				{
					if(a <= b)
					{
						calc += b;
					}else {
						calc += a;
					}
					a = 0;
					b = 0;
				}else{
					calc += a;
				}
			}
		}
		results.push_back(calc);
	}
	
	for (int i = 0; i < results.size(); i++)
	{
		cout << "Case #" << i+1 << ": " << results.at(i) << endl;
	}
}

int main()
{
	int testCases, countData;
	
	vector<vector<int> > boneData;
	
	cin >> testCases;
	cout << endl;
	
	if(testCases < 1000)
	{
		for(int i = 0; i < testCases; i++){
			cin >> countData;
			vector<int> temp;
			for(int j = 0; j < countData; j++){
				int tempData;
				cin >> tempData;
				temp.push_back(tempData);
			}
			boneData.push_back(temp);
		}
		doCalculate(boneData);
	}
}
