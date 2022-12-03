#include "line.h"
int main() {
line line1(8, 12, 16, 20);
line copyline(line1); 
line line2;
line2.SetPoint1(3, 4);
line2.SetPoint2(13, 14);
//cout << "The line is ";
line1.print();

cout << "Line1 distance: " << line1.Distance() << endl;
cout << "Line1 slope: " << line1.Slope() << endl;

line2.print();
cout << "Line3 distance: " << line2.Distance() << endl;
cout << "Line3 slope: " << line2.Slope() << endl;
if(line1.equalOperator(copyline)){
    cout << "Lines are equal" << endl;
}
else{
    cout << "Lines are not equal" << endl;
}
if(line1.equalOperator(line2)){
    cout << "Lines are equal" << endl;
}
else{
    cout << "Lines are not equal" << endl;
}
}