#include <vector>
#include <iostream>
using namespace std;

int sumList(vector<int> list){
    int sum = 0;
    for(int i = 0;i < list.size();i++){
        sum += list[i];
    }

    return sum;
}

int main(){
    vector<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(2);

    int s = sumList(ls);
    cout << s;
    return 0;
}

