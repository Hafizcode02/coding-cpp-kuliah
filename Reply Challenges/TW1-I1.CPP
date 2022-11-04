#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int testCases;
	int sumFriend, sumFriendArr[100][100] = {}, canInvited[100] = {};
	
	cin >> testCases;
	cout << endl;
	
	if(testCases < 1000)
	{
		for(int i = 0; i < testCases; i++)
		{
			cin >> sumFriend;
			for(int j = 0; j < sumFriend; j++)
			{
				scanf("%d", &sumFriendArr[i][j]);
			}
			for(int rep = 0; rep < sumFriend; rep++)
			{
				canInvited[i] += (sumFriendArr[i][rep] > 0) ? sumFriendArr[i][rep] : 0;
			}
			cout << endl;
		}
		
		cout << endl;
		
		for(int dsp = 0; dsp < testCases; dsp++){
			cout << "Case #" << dsp + 1 << ": " << canInvited[dsp] << endl;
		}
	}
	
	getch();
}
