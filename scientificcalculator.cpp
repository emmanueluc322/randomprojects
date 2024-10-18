#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout; using std::cin; using std::endl;

int main(){
    int userInput;
    cout << "1. absolute value" << endl;
    cout << "2. Square root" << endl;
    cout << "3. cube root" << endl;
    cout << "4. Power" <<endl;

    cout << "Select an Operation" <<endl;
    cin >> userInput;

    while (userInput ==1 || userInput == 2 || userInput ==3 || userInput ==4)
    {
        switch (userInput){
        case 1:{cout << "Enter value"<<endl;
            int a;
            cin >> a;
            int result = abs(a);
            cout << "The result is: "<<result<<endl;
            break; 
        }

        case 2:{
            cout << "Enter Value" << endl;
            double b;
            cin >> b;
            double result1 = sqrt(b);
            cout << "The result is: "<<result1<<endl;
            break;
        } 
           
        case 3:{
            cout << "Enter Value" << endl;
            double c;
            cin >> c;
            double result2 = cbrt(c);
            cout << "The result is: "<<result2<<endl;
            break;
        }
        case 4:{
            double x, y;
            cout << "Base: " <<endl;
            cin >> x;
            cout << "Enter exponent: " <<endl;
            cin >> y;
            double result3 = pow(x,y);
            cout << "The result is: "<<result3<<endl;
        }
           
        }


        cout << "Select an Operation" <<endl;
        cin >> userInput;
        
    }
    

}