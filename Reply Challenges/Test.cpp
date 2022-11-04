//#include <iostream>
//#include <vector>
//#include <istream>
//using namespace std;
//
//int main()
//{
//	int arr[10];
//	int i = 0;
//	int data;
//	
//	while(getline(cin, data, '')){
//		arr[i] = data;
//		i++;
//	}
//	
//	cout << arr;
//}
//

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cout << "Enter an integer: ";
//    cin >> n;
//
//    if ( n % 2 == 0)
//        cout << n << " is even.";
//    else
//        cout << n << " is odd.";
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    string text = "this is a sample string";
//    string target = "sample";
//
//    int idx = text.find(target);
//
//    if (idx!=string::npos) {
//        cout << "find at index: " << idx << endl;
//    } else {
//        cout << "not found" << endl;
//    }
//
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//void displayDupliateStrings(vector<string> strings) {
//   unordered_set<string> s;
//   bool hasDuplicate = false;
//   for (int i = 0; i<strings.size(); i++) {
//      if (s.find(strings[i]) != s.end()) {
//         cout << strings[i] << endl;
//         hasDuplicate = true;
//      }
//      else
//         s.insert(strings[i]);
//   }
//   if (!hasDuplicate)
//      cout << "No Duplicate string has found" << endl;
//}
//int main() {
//   vector<string>strings{"Hello", "Kite", "Hello", "C++", "Tom", "C++"};
//   displayDupliateStrings(strings);
//}

#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string nama = "TestString";
	for(int i = 0; i < nama.length(); i++){
		cout << nama.at(i);
		cout << endl;
	}
//  std::string str ("Test string");
//  for (unsigned i=0; i<str.length(); ++i)
//  {
//    std::cout << str.at(i);
//    std::cout << "";
//  }
  return 0;
}
