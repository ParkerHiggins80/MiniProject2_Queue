#include <iostream>
using namespace std;

double add (double a, double b)
{
    return a+b;
}

double subtract (double a, double b)
{
    return a-b;
}

double multiply (double a, double b)
{
    return a*b;
}

double divide (double a, double b)
{
    return a/b;
}

double mod (int a, int b)
{
    return a%b;
}
    

int main() 
{
    int choice;

    do
    {
        
        cout << "Calculator" << endl;
        cout << "1: Add 2 Doubles" << endl;        
        cout << "2: Subtract 2 Doubles" << endl;
        cout << "3: Multiply 2 Doubles" << endl;
        cout << "4: Divide 2 Doubles" << endl;
        cout << "5: Mod 2 Doubles" << endl;
        cout << "0: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout <<"\n"<<endl;

            switch(choice)
            {
                case 0:
                {
                    break;
                }
                case 1:
                {
                    double x,y;
                    cout <<"Enter first double: ";
                    cin >> x;
                    cout <<"Enter second double: ";
                    cin >> y;

                    cout<<x<<" + "<<y<<" = "<<add(x,y) <<endl;
                    cout <<endl;
                    break;
                }
                case 2:
                {
                    double x,y;
                    cout <<"Enter first double: ";
                    cin >> x;
                    cout <<"Enter second double: ";
                    cin >> y;

                    cout<<x<<" - "<<y<<" = "<<subtract(x,y) <<endl;
                    cout <<endl;
                    break;
                }
                case 3:
                {
                    double x,y;
                    cout <<"Enter first double: ";
                    cin >> x;
                    cout <<"Enter second double: ";
                    cin >> y;

                    cout<<x<<" * "<<y<<" = "<<multiply(x,y) <<endl;
                    cout <<endl;
                    break;
                }
                case 4:
                {
                    double x,y;
                    y = 0;
                    while(y==0)
                    {
                    cout <<"Enter a double: ";
                    cin >> x;
                    cout <<"Enter an integer (Not Zero): ";
                    cin >> y;
                    }

                    cout<<x<<" / "<<y<<" = "<<divide(x,y) <<endl;
                    cout <<endl;
                    break;
                }
                case 5:
                {
                    double x,y;
                    cout <<"Enter first integer: ";
                    cin >> x;
                    cout <<"Enter second integer: ";
                    cin >> y;

                    cout<<x<<" % "<<y<<" = "<<mod(x,y) <<endl;
                    cout <<endl;
                    break;
                }
            }

    }
    while(choice!=0);
    return 0;
    
}
