// hello1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Task 0
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!\n";
}
*/
/*
* Task 1
#include <iostream>
using namespace std;

int main()
{
    int FirstNumber, SecondNumber, ThirdNumber;
    cout << "First number is: ";
    cin >> FirstNumber;
    cout << "Second number is: ";
    cin >> SecondNumber;
    cout << "Third number is: ";
    cin >> ThirdNumber;
    cout <<"sum"<<FirstNumber + SecondNumber + ThirdNumber;
    return 0;
}
*/
/* Task 2
#include <iostream>
using namespace std;

int main()
{
    int PointA, PointB;
    cout << "A=";
    cin >> PointA;
    cout << "B=";
    cin >> PointB;
    cout << "Distance is: " << abs(PointA) + abs(PointB);
    return 0;
}
*//*
Task4.1
#include <iostream>
using namespace std;
int main() {
    int Number1, Number2, Number3;
    cout << "Insert 3 numbers: ";
    cin >> Number1 >> Number2 >> Number3;
    cout <<"Your number is " << Number1 << Number2 << Number3 <<endl;
    cout << "Sum: " << Number1 + Number2 + Number3;
    return 0;
} */
//Task4.2
/*
#include <iostream>
using namespace std;
int main() {

} */
/*
#include <iostream>
#include <cmath>
int main() {
    int x1, y1, r1, 
        x2, y2, r2;

    int LargerRadius(r1 > r2) ? r1 : r2;
    
    int Distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1 - y2));

    if (Distance > r1 + r2) {
        std::cout << "nqma prese4ni to4ki";
    }
    else if (Distance == r1 + r2) {
        std::cout << "1 prese4na to4ka";
    }
    else if (Distance < r1 + r2) {

        if (Distance > LargerRadius) {
            std::cout << "2 prese4ni to4ki";
        }
    }


    return 0;
}
*/
/*  week 2 Task 1
#include <iostream>

int main() {
    int apples, bananas, pears;
    std::cout << "Amount of apples: ";
    std::cin >> apples;
    std::cout << "Amount of bananas: ";
    std::cin >> bananas;
    std::cout << "Amount of pears: ";
    std::cin >> pears;
    std::cout << "Trai4o, don't forget to buy " << apples << " apples, " << bananas << " bananas and " << pears << " pears!";
    return 0;
}
*/
 /*Task 2
#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cout << "a = ";
    std::cin >> a;
    std::cout <<"b = ";
    std::cin >> b;
    std::cout << "Sbor = " << a + b << std::endl;
    std::cout << "Razlika = " << a - b << std::endl;
    std::cout << "Proizvedenie = " << a * b;
    

    return 0;
}
*/
/*
Task 3
#include <iostream>

int main() {
    int seconds;
    std::cout << "Seconds: ";
    std::cin >> seconds;
    std::cout << seconds / (60 * 60 * 24) << " days, ";
    int divSec1 = seconds % (60 * 60 * 24);
    std::cout << divSec1 / 3600 << " hours, ";
    int divSec2 = divSec1 % 3600;
    std::cout << divSec2 / 60 << " minutes and ";
    int divSec3 = divSec2 % 60;
    std::cout << divSec3 << " seconds";

        return 0;
}
*/
/*Task 4

#include <iostream>
int main() {
    int num, firstDigit, secondDigit, thirdDigit;
    std::cout << "Write a 3-digit number: ";
    std::cin >> num;
    firstDigit = num / 100;
    secondDigit = num / 10 % 10;
    thirdDigit = num % 10;
    std::cout << "The reverse of " << num << " is " << thirdDigit << secondDigit << firstDigit;

    return 0;
}
*/

/*week 3
task 1

#include <iostream>

int main() {
    int a, b;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    if (a > b) {
        std::cout << a;
    }
    else {
        std::cout << b;
    }
        return 0;
}
*/
/*
task2
#include <iostream>

int main() {
    int a;
    std::cin >> a;
    switch (a) {
    case 1:1;
        std::cout << "january";
        break;
    case 2:2;
        std::cout << "february";
        break;
    case 3:3;
        std::cout << "march";
        break;
    case 4:4;
        std::cout << "april";
        break;
    case 5:5;
        std::cout << "may";
        break;
    case 6:6;
        std::cout << "june";
        break;
    case 7:7;
        std::cout << "july";
        break;
    case 8:8;
        std::cout << "august";
        break;
    case 9:9;
        std::cout << "september";
        break;
    case 10:10;
        std::cout << "octomber";
        break;
    case 11:11;
        std::cout << "november";
        break;
    case 12:12;
        std::cout << "december";
        break;
    default:std::cout<<"Nqma takuv mesec";
    }
    return 0;
}
*/
/*task3 a>b && b>a*/

//#include <iostream>
//int main() {
//    int a, b, x;
//    std::cout << "a = ";
//    std::cin >> a;
//    std::cout << "b = ";
//    std::cin >> b;
//    std::cout << "x = ";
//    std::cin >> x;
//    std::cout << (x > a && x < b) ? "da" : "ne";
//
//    return 0;
//}
//task4 symbol dali e bukva
//#include <iostream>
//
//int main() {
//return 0;
//}
//task 5
//#include <iostream>
//
//int main() {
//    int a, b;
//    std::cout << "Insert a ";
//    std::cin >> a;
//    std::cout << "Insert b ";
//    std::cin >> b;
//    if (a > 0 && b > 0) {
//        std::cout << "Both are positive!";
//    }
//    else if ((a < 0 && b > 0) || (a>0 && b<0)) {
//        std::cout << "One is negative!";
//    }
//    else {
//        std::cout << "Both are negative!";
//        }
//        
//        return 0;
//}
// seminar week4
//task1
//#include <iostream>
//
//int main() {
//    int num;
//    std::cout << "Pick a number between 1 and 7." << std::endl;
//    std::cin >> num;
//    switch (num) {
//        case 1:1;
//        std::cout << "Monday";
//            break;
//        case 2: 2;
//            std::cout << "Tuseday";
//            break;
//        case 3:3;
//            std::cout << "Wednesday";
//            break;
//        case 4:4;
//            std::cout << "Thursday";
//            break;
//        case 5:5;
//        std::cout << "Friday";
//        break;
//        case 6:6;
//            std::cout << "Saturday";
//            break;
//        case 7:7;
//            std::cout << "Sunday";
//            break;
//        default:std::cout << "Invalid day of the week!";
//    }
//        return 0;
//}
//task2 #short formula
//#include <iostream>
//int main() {
//    int year;
//    std::cout << "Year: ";
//    std::cin >> year;
//    std::cout << (year % 4 == 0 ? "leap year" : "not leap year");
//
//    return 0;
//}
//task3 
//#include <iostream>
//
//int main() {
//    int a, b;
//    std::cout << "Enter a: ";
//    std::cin >> a;
//    std::cout << "Enter b: ";
//    std::cin >> b;
//    std::cout << a << "x + " << b << " = 0\n";
//    if (a == 0) {
//        if (b == 0) {
//            std::cout << "Every x is a solution.\n";
//        }
//        else {
//            std::cout << "Not a solution.\n";
//        }
//    }
//    else {
//        std::cout << "Solution: " << ((-1) * b) / a << std::endl;
//    }
//    return 0;
//}
//task4