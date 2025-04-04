#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> arr{5, 12, 6, 12, 64, 54, 13};
	for (int i = 0; i < arr.size(); ++i) {
		for (int j = i; j < arr.size(); ++j) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (auto& x : arr) {
		cout << x << " "; // 5 6 12 12 13 54 64
	}
	return 0;
}
