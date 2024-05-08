#include <iostream>
#include <vector>

using namespace std;

vector<int> pluss(vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}

int main() {
    vector<int> vec = { 1, 2, 3, 4, 5 };
    int n = 10;
    vector<int> vec_res = pluss(vec, n);
    for (int num : vec_res) {
        cout << num << " ";
    }
    cout <<  endl;
    return 0;
}
 