#include <iostream>
using std::cout; using std::cin; using std::endl;

double bmrWomen (double userWeight, double userHeight, double userAge);
double bmrMen (double userWeight, double userHeight, double userAge);

int main(){
    cout << "Hello welcome to the BMR Calculator" <<endl;
    cout << "Please enter your gender (M/F): " << endl;
    char userGender;
    cin >> userGender;
    cout << "Please enter your weight (in pounds): " << endl;
    double userWeight, userHeight;
    cin >> userWeight;
    cout << "Please enter your height (in feet and inches): " << endl; // ask for the foot and inches and convert it to inch for the bmr function
    int heightFoot, heightInches;
    cout << "Enter Feet: " <<endl;
    cin >> heightFoot;
    cout << "Enter Inches: \n";
    cin >> heightInches;
    userHeight = (heightFoot * 12) + heightInches;

    cout <<"Please enter your age (in years): " <<endl;
    int userAge;    
    cin >> userAge;
    const int cCalorie = 150;


    if(userGender == 'M' || userGender == 'm'){
        const double menBMR = bmrMen (userWeight, userHeight,userAge);
        cout << "Your BMR is: " <<  menBMR << endl; // enter male bmr calcualtor function here
        int cookieNum = menBMR/cCalorie;
        cout << "The number of cookies you can consume per day is: "<< cookieNum <<endl;
    }
    else if (userGender == 'F' || userGender == 'f'){
        const double womenBMR = bmrWomen (userWeight, userHeight,userAge);
        cout <<"Your BMR is "<< womenBMR << endl; //enter female bmr calculator function here
        int cookieNum1 = womenBMR/cCalorie;
        cout << "The number of cookies is "<< cookieNum1 <<endl;
    }
}

double bmrWomen (double userWeight, double userHeight, double userAge){
    return (655 + (4.35 * userWeight) + (4.7 * userHeight) - (4.7 * userAge));
}

double bmrMen (double userWeight, double userHeight, double userAge){
    return ( 66 + (6.23 * userWeight) + (12.7 * userHeight) - (6.8 * userAge));
}