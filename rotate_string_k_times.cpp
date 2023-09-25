#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string rotate_string_k_times(string str,int k){
    int n = str.length();
    k = k % n;

    string rotated_string = "";
    for(int i=k ; i<n ; i++){
        rotated_string += str[i];
    }

    for(int i=0 ; i<k ; i++){
        rotated_string += str[i];
    }

    return rotated_string;
}

int main(){
    string str = "abcdef";
    int k = 7;

    cout<<"Original String: "<<str<<"\n";
 
    string rotated_str = rotate_string_k_times(str, k);
    cout<<"Rotated String: "<<rotated_str<<"\n";   

    return 0;
}