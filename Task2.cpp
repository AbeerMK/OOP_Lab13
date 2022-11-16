#include<vector>
#include<set>
#include<iostream>
#include<algorithm>
using namespace std;
namespace my_namespace{
    string str = "Abeer";
}

int main(void){
    string str = "Abeer";
    cout << "from main : " << str << endl;
    cout << "from my_namespace : " << my_namespace::str << endl;
}