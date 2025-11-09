/*
Write a program that calculates the sum of all elements in a given array of integers.
*/

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
Function for Challenge 2.
Write a function that prints all the prime numbers in an array of integers.
If a prime is found, add the prime to the vector passed as argument. 
************************************************************************************************/
void findPrimes(const int arr[], size_t arr_size, std::vector<int> &primes){
    switch (arr_size){
        case 0:
        case 1:
    }
};
bool checkIfPrime(int &x){
    return true;
}

int main(){
    // Challenge 1:
    // int arr[] = {1,2,3,4,5,6,7,8};
    // int arr_size = 8;
    // cout << "The sum is " << calculateSum(arr, arr_size) << endl;
    // return 0;
    //*********************************************************************
    // Challenge 2: Wri
}