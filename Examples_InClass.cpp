#include <iostream>
using namespace std;

void greet()
{
    cout << "Hello from a function!" << endl;
}

int add(int a, int b)
{
    return a + b;
}

double area(double width, double height)
{
    return width * height;
}

int main() 
{
    
    int x1 = 5;
    int y1 = 7;

    cout << endl;
    cout << x1 + y1 << " " << x1*y1;
    cout << endl;

    
    int age; cout << "Enter your age: ";
    cin >> age;

    cout << "You entered: "<< age << endl;
    

    int a = 10;
    double b = 3.5;
    
    double result1 = (double)a / b; 
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "Result of a / b = " << result1 << endl;
    

    int x = 8;
    int y = 3;

    cout << "x + y = " << x + y <<endl;
    cout << "x - y = " << x - y <<endl;
    cout << "x * y = " << x * y <<endl;
    cout << "x / y = " << x / y <<endl;
    cout << "x % y = " << x % y <<endl;

    
    int temp = 30;
    if (temp>25)
        cout<<"Its hot outside!"<<endl;
    else
        cout<<"Its cool outside!"<<endl;


    int day = 3;

    switch(day)
    {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Invalid day"; break;
        
    }

    
    for(int i = 1; i<=5; i++)
    {
        cout << "Count: " <<i << endl;
    }


    greet();

    
    int result = add(4,6);
    cout<< "Sum = " << result << endl;
   
    
    double w,h;
    cout <<"Enter width: ";
    cin >> w;
    cout <<"Enter height: ";
    cin >> h;

    cout<<"Area = "<<area(w,h) <<endl;
    
    return 0;

}
