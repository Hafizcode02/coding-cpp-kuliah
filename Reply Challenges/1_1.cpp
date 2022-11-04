#include <iostream>
#include <vector>

using namespace std;

void doChecker(vector<vector<int> > friendList) {

    vector<int> totals;

    for (int i = 0; i < friendList.size(); ++i) {
        int total = 0;
        for (int j = 0; j < friendList.at(i).size(); ++j) {
            if (friendList.at(i).at(j) > 0) {
                total += friendList.at(i).at(j);
            }
        }
        totals.push_back(total);
    } 

    for (int i = 0; i < totals.size(); ++i) {
        cout << "Case #" << i+1 << ": " << totals.at(i) << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int> > friendList;

    for (int i = 0; i < n; ++i) {
        int temp;
        vector<int> tempFriendList;
        cin >> temp;
        for (int j = 0; j < temp; ++j) {
            int tempFriend;
            cin >> tempFriend;
            tempFriendList.push_back(tempFriend);
        }
        friendList.push_back(tempFriendList);
    }

    doChecker(friendList);
}