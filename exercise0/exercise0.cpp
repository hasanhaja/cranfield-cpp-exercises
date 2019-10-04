#include "Box.h"

int main() { 

    Box b1(3, 5, 7);

    cout << b1.calVolume()<< endl;
    b1.display();

    Box b2;
    cout << b2.calVolume()<< endl;
    b2.display();

    Box* b3 = new Box(2, 4, 6); // create a box dynamically

    // create a dynamic array of three Box objects and initialise them
    Box* b4 = new Box[3]{ {1,2,3}, {3,4,5}, {4,5,6} };

    cout << b3->calArea() << endl;b3->display();

    b4[0].display();
    b4[1].display();
    b4[2].display();

    // free the dynamic memory
    delete b3;
    delete [] b4;


    return 0;
    
}