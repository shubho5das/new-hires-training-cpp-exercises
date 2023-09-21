#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

string convert_to_binary(int decimal_value){
    string solution;

    solution = "";
    while(decimal_value > 0){
        int current_bit = (decimal_value & 1);
        solution += to_string(current_bit);
        decimal_value >>= 1;
    }   

    reverse(solution.begin(), solution.end());

    return solution;
}


int main(){
    int num = 69;
    cout<<convert_to_binary(num)<<"\n";

    return 0;
}
