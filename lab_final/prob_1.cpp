//Talha Jubaer Prantor
#include <iostream>
using namespace std;

class ManchesterUnited
{
private:
    int coach;
    int player;
public:

    void getData(int a,int b)
    {
        coach =a;
        player= b;
    }
    void increament()
    {
        coach++;
        player++;

    }
    int display()
    {
        return coach+player;
    }
};

int main()
{
    ManchesterUnited ronaldo,fernandes;

    ronaldo.getData(4,5);
    fernandes.getData(5,6);

    cout<<"Before increament : "<<endl;
    if(ronaldo.display()>fernandes.display())
    {
        cout<<"Ronaldo is greater"<<endl;
    }
    else if(ronaldo.display()<fernandes.display())
    {
        cout<<"Fernandes is greater"<<endl;
    }
    else if(ronaldo.display()==fernandes.display())
    {
        cout<<"Two are equal"<<endl;
    }
    ronaldo.increament();

    cout<<endl;
    cout<<"After increament : "<<endl;
    if(ronaldo.display()>fernandes.display())
    {
        cout<<"Ronaldo is greater"<<endl;
    }
    else if(ronaldo.display()<fernandes.display())
    {
        cout<<"Fernandes is greater"<<endl;
    }
    else if(ronaldo.display()==fernandes.display())
    {
        cout<<"Two are equal"<<endl;
    }


    return 0;
}
