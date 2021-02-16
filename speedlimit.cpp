#include <iostream>

using namespace std;

void compute(int &miles, int &n, int &previous)
{
    for(int i = 0; i < n; ++i){
            int s,t;
            cin >> s >> t;
            miles += s*(t-previous);
            previous = t;
        }
}

void print(int &miles)
{
   cout << miles << " miles" << endl;
}

int main(){
    int n;
    cin >> n;
    while(n != -1){
        int previous = 0;
        int miles = 0;
        compute(miles,n,previous);
        print(miles);        
        cin >> n;
    }
    return 0;
}