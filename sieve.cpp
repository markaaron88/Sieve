//Title:Sieve.cpp
//Abstract: Write a C++ program called sieve.cpp that implements the sieve of Eratosthenes algorithm 
 //Author: Mark Mariscal
 //ID: 7198
 //Date: 01/14/2020


#include <iostream>
#include <string>
using namespace std;


int main(){

    int *A; //ptr to hold value
    int n;
    cout << "Test case : ";
    cin >> n;

    A = new (nothrow) int[n + 1]; //number + 1 for array starts at 0
    for(int p = 2; p <= n; p++){
        A[p] = p;
    }

    int j;
    for(int p = 2; (p * p) <= n; p++){
        if(A[p] != 0){
            j = p * p;
            while (j <= n)
            {
                A[j] = 0;
                j += p;
                //copy the remaining elements of A to array L of the primes
            }
        }
    }

    cout << "Prime numbers are: ";

    for (int i = 0; i <= n; i++)
    {
        if (A[i] != 0)
        {

            cout << A[i] << ",";
        }
    }
    cout << "\n"; //new line
    delete[] A;

    return 0;
}