/*
Zahir Ali
p73.cpp
12/9/23
Program Description: Type up the following code and fix the errors to produce
a proper output showing the weight of a labrador and 2 german shepards.
*/
#include <iostream> 
using namespace std; 
class Dog
{
    // private means that
    // only public methods can change the variables
    private:
        float weight; // instance variable, every instance has its own weight
    public:
        // constructor
        Dog(float newWeight)
        {
            weight = newWeight;
        }
        // method to change the weight
        void changeWeight(float newWeight)
        {
            weight = newWeight;
        }
        // method to return the weight
        float getWeight() { return weight; }
        // method to show the weight
        void showWeight() { cout << weight << endl; }
};

int main()
{
    // use constructor to create new instances
    // labrador and germanShepherd are the instance names 
    Dog labrador(20);
    Dog germanShepherd (50);
    //                 ^^^^CALLS THE CONSTRUCTOR
    cout << "labrador's weight = ";
    cout << labrador.getWeight() << endl;

    cout<<"germanShepherd weight = "; 
    germanShepherd.showWeight();

    germanShepherd.changeWeight(5);
    cout << "german Shepherd weight = ";
    cout << germanShepherd.getWeight() << endl;

    return 0;
}
/*
Program Output: 
labrador's weight = 20
germanShepherd weight = 50
germanShepherd weight = 5

*/