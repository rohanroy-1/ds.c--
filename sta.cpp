#include <iostream>
using namespace std;
void print1(int n){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout <<"*";
        }
        cout <<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        print1(t);
    }

}