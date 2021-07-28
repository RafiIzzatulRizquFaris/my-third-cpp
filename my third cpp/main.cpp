//
//  main.cpp
//  my third cpp
//
//  Created by Rafi Izzatul Rizqu Faris on 29/07/21.
//

#include <iostream>

using namespace std;

int sum_of_digit(int n)
{
    if (n == 0) {
        return 0;
    }
    return (n % 10 + sum_of_digit(n / 10));
}

int main(int argc, const char * argv[]) {
    
//    int n, t1 = 0, t2 = 1, nextTerm = 0;
//
//    cout << "Enter the number of terms: ";
//    cin >> n;
//
//    cout << "Fibonacci Series: ";
//
//    for (int i = 1; i <= n; ++i) {
//        // Prints the first two terms.
//        if(i == 1) {
//            cout << t1 << ", ";
//            continue;
//        }
//        if(i == 2) {
//            cout << t2 << ", ";
//            continue;
//        }
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//
//        cout << nextTerm << ", ";
//    }
    
//    int n, result = 1;
//
//    cout << "Enter a non-negative number: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++){
//        result *= i;
//    }
//    cout << "Factorial of " << n << " = " << result << endl;
    
    int num = 12345;
    int result = sum_of_digit(num);
    cout << "Sum of digits in "<< num <<" is "<< result << endl;
    
    
    return 0;
}
