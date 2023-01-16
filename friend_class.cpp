#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int data_a;
    public:
        A(int a){
            data_a = a;
        }
        void disply(){
            cout<<data_a;
        }
    friend class B;
};

class B{
  private:
        int data_b;
    public:
        B(int b){
            data_b = b;
        }
        int disply(A obj){
            return obj.data_a + data_b;

        }
    friend int fun(A,B);
};


int main(){
    A a(2);
    B b(3);

    cout<< b.disply(a);
}
