#include<bits/stdc++.h>
using namespace std;
class Entity
{
public:
    virtual string getName() = 0;
};
class Player: public Entity
{
public:
    string getName(){return "Player";}
};
int main()
{
    Entity* e = new Player();

    cout<<e->getName()<<endl;
    return 0;
}
