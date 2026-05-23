#include <iostream>
using namespace std;
int main() {
    float penCost, pencilCost, eraserCost;
    cin>> penCost;
    cin>> pencilCost;
    cin>> eraserCost;
    float totalCost = penCost + pencilCost + eraserCost;
    cout<<"Total cost is: "<<totalCost<<endl;
    cout<<"total with GST Is="<<(totalCost*0.18)+totalCost<<endl;
    return 0;
}