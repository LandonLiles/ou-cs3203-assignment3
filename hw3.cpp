#include <vector>
#include <iostream>
using namespace std;

// Function that returns the sum of a list's numbers
int sumList(vector<int> list){
    int sum = 0;
    for(int i = 0;i < list.size();i++){
        sum += list[i];
    }

    return sum;
}

// Function that returns the product of a list's numbers
int prodList(vector<int> list){
    int product = list[0];
    for(int i = 1;i < list.size();i++){
        product = product * list[i];
    }

    return product;
}


vector<int> revList(vector<int> list){
    vector<int> fin;
    int j = 0;

    for(int i = list.size() - 1;i >= 0;i--){
        fin.push_back(list[i]);
    }

    return fin;
}

// Main method .
int main(){
    vector<int> ls;
    int temp = 0;
    int ct = 0;

    // Loop that receives list input from the user until '-1' is entered
    while(temp != -1){
        cout << "enter a number, enter -1 to stop:";
        cin >> temp;
        if(temp != -1){
            ct++;
            ls.push_back(temp);
        }
    }
    
    int s = sumList(ls);
    int p = prodList(ls);
    vector<int> r = revList(ls);

    cout << "sum: " << s << endl;
    cout << "product: " << p << endl;
    
    return 0;
}

