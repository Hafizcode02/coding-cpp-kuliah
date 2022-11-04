#include <iostream>
#include <vector>

using namespace std;

void doCalculate(vector<vector<int> > friendCase)
{
	vector<int> results;
	
	for(int i = 0; i < friendCase.size(); i++)
	{
		int total = 0;
		for(int j = 0; j < friendCase.at(i).size(); j++)
		{
			total += (friendCase.at(i).at(j) > 0) ? friendCase.at(i).at(j) : 0;
		}
		results.push_back(total);
	}
	
	for(int i = 0; i < results.size(); i++)
	{
		cout << "Case #" << i + 1 << ": " << results.at(i) << endl;
	}
}

int main()
{
	int testCases, totalFriends, degreeFriend;
	vector<vector<int> > friendCase;
	
	cin >> testCases;
	cout << endl;
	
	if(testCases < 1000)
	{
		for(int i = 0; i < testCases; i++)
		{
			vector<int> tempFriends;
			cin >> totalFriends;
			
			for(int j = 0; j < totalFriends; j++){
				cin >> degreeFriend;
				tempFriends.push_back(degreeFriend);
			}
			friendCase.push_back(tempFriends);
			cout << endl;
		}
		doCalculate(friendCase);
	}
}
