#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> arr{5, 12, 6, 12, 64, 54, 13};
    for(int i = 1; i < arr.size(); ++i){
        int temp = arr[i];
        int j = i;
        while(j > 0 && arr[j - 1] > temp){
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    }

    for (auto& x : arr) {
		cout << x << " "; // 5 6 12 12 13 54 64
	}

    return 0;
}
