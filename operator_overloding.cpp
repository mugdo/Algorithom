#include<bits/stdc++.h>
using namespace std;
class Operator{
int a;
public:
    Operator(int b){
     a = b;
    }
    void operator ++(){
        a += 100;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){

 Operator obj(5);
 ++obj;
 obj.display();

}
