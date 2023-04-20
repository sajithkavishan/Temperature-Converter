#include <iostream>

using namespace std;

int main(){

double temp;
char beforeunit;
char afterunit;

cout << "****** Temperature Converter ****** \n";
cout << "Farenhite = F \n";
cout << "Celcius = C \n";
cout << "Kelvin = K \n";    

cout << "Enter your temp unit = ";
cin >> beforeunit;
cout << "Enter your temp = ";
cin >> temp;
cout << "Enter converter unit = ";
cin >> afterunit; 

if(beforeunit == 'F' || beforeunit == 'f'){
    if(afterunit == 'C' || afterunit == 'c'){
        temp = (temp - 32) * 5 / 9;
        cout << "Temp is " << temp << " C \n"; 
    }
    else if(afterunit == 'K' || afterunit == 'k'){
        temp = (temp - 32) * 5 / 9 + 273.15;
        cout << "Temp is " << temp << " K \n";
    }
}
if(beforeunit == 'C' || beforeunit == 'c'){
    if(afterunit == 'F' || afterunit == 'f'){
        temp = (temp * 9 / 5) + 32;
        cout << "Temp is " << temp << " F \n"; 
    }
    else if(afterunit == 'K' || afterunit == 'k'){
        temp = temp + 273.15;
        cout << "Temp is " << temp << " K \n";
    }
}
if(beforeunit == 'K' || beforeunit == 'k'){
    if(afterunit == 'C' || afterunit == 'c'){
        temp = temp - 273.15;
        cout << "Temp is " << temp << " C \n"; 
    }
    else if(afterunit == 'F' || afterunit == 'f'){
        temp = (temp - 273.15) * 9 / 5 + 32;
        cout << "Temp is " << temp << " F \n";
    }
}
else{
    cout << "Please enter F or C or K \n";
}

cout << "****** Temperature Converter ****** \n";

    return 0;
}
