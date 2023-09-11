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

int prodList(vector<int> list){
    int product = list[0];
    for(int i = 1;i < list.size();i++){
        product = product * list[i];
    }

    return product;
}

int main(){
    vector<int> ls;
    ls.push_back(2);
    ls.push_back(2);
    ls.push_back(1);

    int s = sumList(ls);
    int p = prodList(ls);
    cout << p;
    return 0;
}

