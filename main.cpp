
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
/************************************************************************************************
Function for Challenge 1. 
Write a function that takes as an input an integer array and the size of the array.
The output is the sum of all the elements of the array.
************************************************************************************************/
int calculateSum(const int arr[], const std::size_t arr_size){
    int total_sum = 0;
    if(arr_size == 0)
        return 0;
    else if (arr_size == 1)
        return arr[0];
    else if (arr_size < 0)
        cout << "Size is less than 0.";
        return 0;
    
    for (size_t i = 0; i < arr_size; ++i){
        total_sum += arr[i];
    }
    return total_sum;
}

/************************************************************************************************
Functions for Challenge 2.
Write a function that prints all the prime numbers in an array of integers.
If a prime is found, add the prime to the vector passed as argument. 
************************************************************************************************/
bool isPrime(const int &p){
        // function to check if numer is primer.
    if (p < 2)
        return false;
        // Using Wilson theorem (p-1)! congruent with -1 mod p:
    size_t y = 1;
    // Calculate factorial of (p-1) i.e. (p-1)!
    size_t i = 1;
    while (i <= (p-1)){
        y *= i;
        i += 1;
    }
        // Apply Wilson theorem:
    if ((y + 1) % p == 0){
        return true;
    }
    else
        return false;
}
void findPrimes(const int arr[], size_t arr_size, std::vector<int> &primes){
        // function to append the prime numbers to a vector
    for(size_t i = 0; i < arr_size; ++i){
        int pos = 0;
        int p = arr[i];
        if (isPrime(p)){
            cout << p << " is prime!" << endl;
            primes.push_back(p);
            pos += 1;
        }
    }
};

int main(){
    // Challenge 1:
    /* 
    int arr[] = {1,2,3,4,5,6,7,8};
    int arr_size = 8;
    cout << "The sum is " << calculateSum(arr, arr_size) << endl;
    */
    //*********************************************************************
    // Challenge 2:
    std::vector<int> primes;
    cout << "Test"<<endl;
    int test_list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    findPrimes(test_list, 15, primes);
    size_t n = primes.size();
    cout << "There are "<< n << " primes"<< endl;
    
    for (size_t k = 0; k < n; ++k){
        cout << "Primes are: "<< primes[k] << endl;
    }
    return 0;
}