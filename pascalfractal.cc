#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
    
int sum(int n){
    if(n==0){return 0;}
    else if(n==1){return 1;}
    else{return n + sum(n-1);}
}    
    
class PT_object {
    vector<int> vec;
    string pt;
    int a;
    public:
        PT_object(int n) {
            vec = vector<int>(sum(n));
            for(int i = 1; i<(n+1); i++){
                vec[sum(i-1)] = 1; 
                for(int j = (sum(i-1)+1); j<(sum(i)-1); j++){
                    vec[j] = vec[j-i]+vec[j-i+1];
                }
                vec[sum(i)-1] = 1;
            }
            string pt[sum(n)];
            a = n;
        };
    void display(){ 
        for(int i = 1; i<(a+1); i++){
            cout << setw(a*1.5+2-i);
            for(int j = (sum(i-1)); j<(sum(i)); j++){
                cout << vec[j] << " " ;
            }
            cout << endl;
        }
    };
    void display(int z){ 
        for(int i = 0; i<(vec.size()); i++){
            if(vec[i]%z == 0){
                pt.replace(i,1," ");
            }
            else{
                pt.replace(i,1,"X");
            }
        }
        for(int i = 1; i<(a+1); i++){
            cout << setw(a+2-i);
            for(int j = (sum(i-1)); j<(sum(i)); j++){
                cout << pt[j] << " " ;
            }
            cout << endl;
        }
    };

};

int main() {
    int n;
    cout << "How many rows?" << endl;
    cin >> n;
    PT_object obj(n);
    obj.display();
    obj.display(2);
    obj.display(5);
    obj.display(10);
}