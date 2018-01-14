#include <iostream>
#include <cmath>
using namespace std;

//Write class primesequence that contains members of the structure
//and functions nextprime, isprime. 
class ps {
	public:
        int npf; //number primes found
        int cn; //current number
        ps(int x, int y){ //class constructor
            npf = x; cn = y;
        };
    bool isPrime(int i) //check if prime
    {
        if(i==1 || i==0)
            return false;
        if(i==2 || i==3)
            return true;
        for(int j=2; j<=sqrt(abs(i)); j++){
            if(i%j == 0) return false;
        }
        return true;
    }

    int next(){ //find next prime number
        cn +=1;		
        while(!isPrime(cn)){
                cn += 1;
        }
        npf += 1;
        return cn;
    }
}; 



int main() {
	ps sequence(0,1);
	while(sequence.npf<50){
		int number = sequence.next();
		cout << "Number: " << number << endl;
	}
}



