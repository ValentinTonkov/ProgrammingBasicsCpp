#include <iostream>

using namespace std;
/*
int test(int a, int b) {
    return a + b;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


*/

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    string productNames[] = {"Apple", "Orange", "Grape", "Watermelon"};
    int quantityAvailable[] = {2, 1, 3, 3};

    int wish;
    while (true) {
        for (int i = 0; i < 4; i++) {
            cout<<"for "<<productNames[i]<<" press "<<i<<endl;
        }
        cout<<"Choose product"<<endl;
        cin>>wish;
        if (quantityAvailable[wish] > 0) {
            quantityAvailable[wish]--;
            cout<<"Take your fruit!"<<endl;
        } else {
            cout<<"No more "<<productNames[wish]<<endl;
        }

        if (sumOfArray(quantityAvailable, 4) == 0) {
            cout<<"No more products available!"<<endl;
            break;
        }
    }

    return 0;
}

