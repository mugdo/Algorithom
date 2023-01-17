#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream f;
    f.open("test.txt",ios::app);
    if(f.is_open()){
        f << "hellp\n";
        f <<"this is the exta line";
        f.close();
    }
    f.open("test.txt", ios::in);
    if(f.is_open()){
        string s;
        while(getline(f,s)){
            cout<<s<<endl;
            f.close();
        }
    }
    return 0;
}
