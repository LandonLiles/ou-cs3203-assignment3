#include <vector>
#include <iostream>
using namespace std;

// Returns sum of list numbers
int sumList(vector<int> list){
    int sum = 0;
    for(int i = 0;i < list.size();i++){
        sum += list[i];
    }

    return sum;
}

// Returns product of list numbers
int prodList(vector<int> list){
    int product = list[0];
    for(int i = 1;i < list.size();i++){
        product = product * list[i];
    }

    return product;
}

// Main method
int main(){
    vector<int> ls;
    int temp = 0;
    
    // Loop that inputs numbers into list, enter -1 to stop 
    while(temp != -1){
        cout << "enter a number, enter -1 to stop:";
        cin >> temp;
        if(temp != -1){
            ls.push_back(temp);
        }
    }
    
    int s = sumList(ls);
    int p = prodList(ls);
    cout << "sum: " << s << endl;
    cout << "product: " << p << endl;
    return 0;
}

