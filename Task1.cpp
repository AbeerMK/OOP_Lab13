#include<vector>
#include<set>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[4] = {20, 4, 12, 16};
    set <int> st = {5, 11, 7};
    vector<int> vec(7);
    merge(arr, arr+4, st.begin(), st.end(), vec.begin());
    for(int u: vec){
        cout<< u << ' ';
    }
    cout << endl;
}

