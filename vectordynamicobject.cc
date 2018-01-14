#include <iostream>
#include <cstdlib>
#include<vector>
using namespace std;
    
//Create an object that utilizes the standard vector and dynamically
//creates a vector. Your main code will call your object, fill it
//with 20 random numbers and display summary (first,last,avg,all),
// swap front and back and display summary again 
class array_object {
    vector<int> vec;
    public:
        array_object(int n) {
            vec = vector<int>(n); //vector of size n
    };
    int size() { return vec.size(); };
    void fill_random(int n){ //fill vector with n values
        for(int i = 0; i < n; i++){
            vec[i] = rand()%100; 
        }
    };
    int front() { return vec.front(); };
    int back() { return vec.back(); };
    int get(int n){ return vec[n]; };
    void swap(int a, int b){ //swap values
        int x = vec[a];
        vec[a] = vec[b];
        vec[b] = x;
    };
    void summary(){
        cout << "First element of vector is " << vec.front() << endl;
        cout << "Last element of vector is " << vec.back() << endl;
        int sum = 0;
        for(int i = 0; i< vec.size(); i++){
            sum += vec[i];
        }
        int average = sum/vec.size();
        cout << "Average of vector is " << average << endl;
        cout << "Vector contents: " << endl;
        for(int i = 0; i< vec.size(); i++){
            cout << vec[i] << " ";
        }
    }
};

int main() {
    srand((unsigned)time(0));
    array_object obj(7);
    obj.fill_random(20);
    obj.summary();
    obj.swap(0,obj.size());
    obj.summary();
}