#include<iostream>
#include<math.h>
#include<string>

using namespace std;

double add(double uinput[2], int length){
    double sum = 0;
    for(int i = 0; i < length; ++i){
        sum = uinput[i]+sum;
    }
    return sum;
}
double sub(double uinput[2], int length){
    double dif = 0;
    for(int i = 0; i < length; ++i){
        dif = uinput[i]-dif;
    }
    return dif;
}
double prod(double uinput[2], int length){
    double prod=uinput[0]*uinput[1];
    return prod;
}

double quo(double uinput[2], int length){
        double quo=uinput[0]/uinput[1];
    return quo;
}
double exp(double uinput[2], int length){
    double exp = pow(uinput[0], uinput[1]);
    return exp;
}

double sqr(double uinput[2], int length){
    double sqr = sqrt(uinput[0]);
    return sqr;
}

void funChoice(int choice){
    if (choice == 1){
        cout << "Which Two Numbers Would You Like To Add?" << endl;
    }
    else if (choice == 2){
        cout << "Which Two Numbers Would You Like To Subtract?" << endl;
    }
    else if (choice == 3){
        cout << "Which Two Numbers Would You Like To Multiply?" << endl;
    }
    else if (choice == 4){
        cout << "Which Two Numbers Would You Like To Divide?" << endl;
    }
    else if (choice == 5){
        cout << "Which Number Would You Like To Square?" << endl;
    }
    else if (choice == 6){
        cout << "Which Number Is Your Base? Which Number Is Your Power?" << endl;
    }
    else{
        cout << "You Must Enter Numbers!" << endl;
        
    }
}


void sfunction(){
    cout << "Choose the function you would like to use:" << endl;
    cout << "1) Addition" <<endl;
    cout << "2) Subtraction" << endl;
    cout << "3) Multiplication" << endl;
    cout << "4) Division" << endl;
    cout << "5) Square Root" << endl;
    cout << "6) Exponent (x^y)" << endl;
}


int main(){
    int ufunc;
    double uinput[2];

    while (1 == 1){
        
        sfunction();
        cin >> ufunc;

        funChoice(ufunc);

        if(ufunc == 1 || ufunc == 2 || ufunc == 3 || ufunc == 4 || ufunc == 6){
            cin>>uinput[0];
            cin>>uinput[1];
        }
        else{
            cin>>uinput[0];
        }

        if(ufunc == 1){
            cout << "Your answer is: " <<add(uinput, 2) << endl;
        }
        else if(ufunc == 2){
            cout << "Your answer is: " <<sub(uinput, 2) << endl;
        }
        else if(ufunc == 3){
            cout << "Your answer is: " <<prod(uinput, 2) << endl;
        }
        else if(ufunc == 4){
            cout << "Your answer is: " <<quo(uinput, 2) << endl;
        }
        else if(ufunc == 5){
            cout << "Your answer is: " <<sqr(uinput, 2) << endl;
        }
        else if(ufunc == 6){
            cout << "Your answer is: " <<exp(uinput, 2) << endl;
        }
        else{
            cout << "Please enter a real selection!" << endl;
            
        }

    }


return 0;
}

