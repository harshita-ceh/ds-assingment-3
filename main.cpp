#include <iostream>
	using namespace std;
	int main() {
	    int a = 0;  //O(1)
      int N;      //O(1)
      int i=N;    //O(1)
			while (i > 0) {  //O(n+1)
			    a += i;    //O(n)
			    i /= 2;    //O(logn) since i/=2 has an  decline and will occur log base2(N)times.
			}
			return 0;
	}