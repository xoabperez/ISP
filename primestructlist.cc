#include <iostream>
#include <cmath>
using namespace std;

//Rewrite the exercise that found a predetermined # of primes
//Put #_of_primes_found and last_#_tested variables in struct
struct ps { //prime sequence
	int npf; //number primes found
	int cn; //current number
}; 

bool isPrime(int i)
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

int next(struct ps &sequence) { //find next prime number
	sequence.cn +=1;		
	while(!isPrime(sequence.cn)){ //check if next number prime
			sequence.cn += 1; //continue if not
	}
	sequence.npf += 1;
	return sequence.cn;
}

int main() {
	struct ps sequence;
	sequence = {0,1}; //0 primes found; current number is 1
	while(sequence.npf<50){
		int next_prime = next(sequence);
		cout << "Next prime: " << sequence.cn << endl;
	}
}


