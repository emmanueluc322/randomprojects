#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <cstdlib>
#include <ctime>

int main(){
    char alphabetLower[]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 
                        'w', 'x', 'y', 'z'};
    char alphabetUpper[]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                         'W', 'X', 'Y', 'Z'};
    char num[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char specialChar[]={'!', '@', '#', '$', '%', '&', '{', '}', '/','?', '-','_'};
    int aLowerSize = 26;
    int aUpperSize = 26;
    int numSize = 10;
    int specialCharSize = 12;
    srand(time(nullptr));
    cout << "Enter password size"<<endl;
    cout <<"Yout password size should be 8 characters or more"<<endl;
    int passwordSize;
    cin >> passwordSize;
    if (passwordSize >= 8){
        for(int i =0; i <passwordSize; i++){
        int switchCase = rand()%4+1;
        switch (switchCase){
            case 1:
            cout << alphabetLower[rand() % aLowerSize];
            break;
            case 2:
            cout << alphabetUpper[rand()% aUpperSize];
            break;
            case 3:
            cout << num[rand()% numSize];
            break;
            case 4:
            cout << specialChar[rand()% specialCharSize];
            break;
        }
            
    }
    }
    else{
        cout <<"Your password size should be 8 characters or more"<<endl;
    }
    

}