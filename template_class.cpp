#include <iostream>
#define SIZE 10
using namespace std;
//original
class BubbleSort_O{
private:
    int* data;
public:
    BubbleSort_O();
    ~BubbleSort_O();
    void insertData();
    void show();
    void ascending();
    void descending();
};

BubbleSort_O::BubbleSort_O() {
    cout << "Origin constructor." << endl;
}
BubbleSort_O::~BubbleSort_O(){
    cout << "destructor." << endl;
}
void BubbleSort_O::insertData(){
    this->data = new int[SIZE];
    cout << "enter 10 integer." << endl;
    for(int i = 0; i < SIZE; i++){
        cout << "#" << i+1 << ": ";
        cin >> this->data[i];
    }

    cout << "\n\n" << endl;
}

void BubbleSort_O::show(){
    for(int i = 0; i < SIZE; i++){
        cout << "#" << i+1 << ": " << this->data[i] << endl;
    }

    cout << "\n\n" << endl;
}
void BubbleSort_O::ascending() {
    for(int i = 0; i < SIZE - 1; i++){
        for(int j = i; j < SIZE; j++){
            if(data[i] > data[j]){
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}
void BubbleSort_O::descending() {
    for(int i = 0; i < SIZE - 1; i++){
        for(int j = i; j < SIZE; j++){
            if(data[i] < data[j]){
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

//template class

template<typename T> class BubbleSort_T{
private:
    T* data;
public:
    BubbleSort_T();
    ~BubbleSort_T();
    void insertData();
    void show();
    void ascending();
    void descending();
};

template<typename T> BubbleSort_T<T>::BubbleSort_T(){
    cout << "template class constructor." << endl;
}

template<typename T> BubbleSort_T<T>::~BubbleSort_T(){
    cout << "template class destructor." << endl;
}
template<typename T> void BubbleSort_T<T>::insertData(){
    cout << "input data: " << endl;
    data = new T[SIZE];
    for(int i = 0; i < SIZE; i++){
        cout << "#" << i + 1 << ": ";
        cin >> data[i];
    }
    cout << "insert successful." << endl;
    cout << "\n\n" << endl;
}
template<typename T> void BubbleSort_T<T>::show() {
    for(int i = 0; i < SIZE; i++){
        cout << "#" << i+1 << ": " << data[i] << endl;
    }
    cout << "\n\n" << endl;
}
template<typename T> void BubbleSort_T<T>::ascending() {
    for(int i = 0; i < SIZE  - 1; i++){
        for(int j = i; j < SIZE; j++){
            if(data[i] > data[j]){
                T temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}
template <typename T> void BubbleSort_T<T>::descending(){
    for(int i = 0; i < SIZE  - 1; i++){
        for(int j = i; j < SIZE; j++){
            if(data[i] < data[j]){
                T temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

int main(){
    BubbleSort_O b1;
    b1.insertData();
    b1.ascending();
    cout << "b1 ascending: " << endl;
    b1.show();
    cout << "b1 descending: " << endl;
    b1.descending();
    b1.show();
    BubbleSort_T<double> b2;
    BubbleSort_T<int> b3;
    b2.insertData();
    b2.ascending();
    b2.show();
    b2.descending();
    b2.show();
    b3.insertData();
    b3.ascending();
    b3.show();
    b3.descending();
    b3.show();

}

