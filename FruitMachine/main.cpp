#include <iostream>

using namespace std;

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

class Fruit {
public:
    string name;
    int quantity;
};

/*
 * Администраторско меню:
 * 1 - Enter new fruit   (въвеждане на нов плод, трябва да се въведе име и количество,
 *                         новия плод и количеството му влизат в масивите)
 * 2 - Available quantity (изписва таблица или ред с наличността)
 * 3 - Exit (преминаване към основно меню)
 *
 * Основно меню:
=====================================
|  ID  |    Product    | Quantity   |
=====================================
|  0   |    Apple      |    10      |
|  1   |    Orange     |    5       |
|  2   |    Banana     |    8       |
|  3   |    Grapes     |    12      |
|  4   |    Mango      |    6       |
=====================================
Enter the product ID to select:  (след въвеждане на id, от наличното количество се изважда 1)
 *
 * ако за ID се въведе определен код, например -43213, се преминава към администраторско меню
 *
 */

int chooseFruit(string productNames[]) {
    int wish;
    for (int i = 0; i < 4; i++) {
        cout << "for " << productNames[i] << " press " << i << endl;
    }
    cout << "Choose product" << endl;
    cin >> wish;
    return wish;
}

int main() {
    // Apple   Orange   Grape
    //   9        100     82
    string fruitNames[20];
    int fruitQuantities[20];
    int choice;
    int numberOfFruits = 0;

    while (true) {
        cout << "\n1 - Enter new fruit" << endl << "2 - Available quantity" << endl << "3 - Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;
        switch (choice) {
            case 1:
                if (numberOfFruits < 20) {
                    cout << "Enter fruit name: ";
                    cin >> fruitNames[numberOfFruits];
                    cout << "Enter fruit quantity: ";
                    cin >> fruitQuantities[numberOfFruits];
                    numberOfFruits++;
                } else {
                    cout << "Too many fruits" << endl;
                }
                break;
            case 2:
                for (int i = 0; i < numberOfFruits; i++) {
                    cout << fruitNames[i]<<": "<<fruitQuantities[i]<< endl;
                }
                break;
            case 3:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    /*
        string productNames[] = {"Apple", "Orange", "Grape", "Watermelon"};
        int quantityAvailable[] = {2, 1, 3, 3};

        while (true) {
            int wish = chooseFruit(productNames);


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
        }*/
    return 0;
}
