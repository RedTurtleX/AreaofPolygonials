//Working with 3 elements of a function


#include <iostream>
using namespace std;

void showMenu();
double calcAreaTrig(double, double);
void calcAreaRect(double, double);
void calcAreaCirc();
int main()
{
  double b = 0.0, h = 0.0, a = 0.0;
  int userInput = 0;
  showMenu();
  cin >> userInput;
  
//Triangle
  if(userInput == 1)
  {
    cout << "\nTriangle Area Claculator: " << endl;
    cout << "\nPlease enter base [space] height [enter]: ";
    cin >> b >> h;
    a = calcAreaTrig(b, h);
    cout << "\nThe area of the Triangle with base " << b << " and height " << h << "  is " << a << endl;
  }
    //Rectangle
  else if (userInput == 2)
  {
    calcAreaRect(b, h);
  }
    //Circle
  else if (userInput == 3)
  {
    calcAreaCirc();
  }
    //Clear Screen
  else if (userInput == 4)
  {
  cout << "\033[2J\033[1;1H"; //clear screen 
  }

    //Exit
  else if (userInput == 5)
  {
     cout << "\nGoodbye!" << endl;
  }




  
  return 0;


  
}

//Menu 
void showMenu()
{
  cout << "1. Calculate the area of a triangle" << endl;
  cout << "2. Calculate the area of a rectangle" << endl;
  cout << "3. Calculate the area of a circle" << endl;
  cout << "4. Clear Screen" << endl;
  cout << "5. Quit" << endl;
  cout << "Please enter your choice: ";
}
//Triangle
    double calcAreaTrig(double base, double height)
{
  
    return (0.5 * (base * height) );
} 

//Rectangle 

void calcAreaRect(double base, double height)
{
  cout << "\nRectangle Area Calculator: " << endl;
  cout << "\nPlease enter base [space] height [enter]: ";
  cin >> base >> height;
  cout << "\nThe area of the Rectangle with base " << base << " and height " << height << " is " << (base * height) << endl;
}

void calcAreaCirc() 
{
  double radius = 0.0;
  cout << "\nCircle Area Calculator: " << endl;
  cout << "\nPlease enter radius: ";
  cin >> radius;
  cout << "\nThe area of a Circle with radius " << radius << "is " << (3.14 * radius * radius) << endl;
}