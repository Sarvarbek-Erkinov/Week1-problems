#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

//Problem 12

// int main() {
//
//     float angle1, angle2, angle3;
//
//     cout<<"Enter angle1: ";
//     cin>>angle1;
//     cout<<"Enter angle2: ";
//     cin>>angle2;
//     cout<<"Enter angle3: ";
//     cin>>angle3;
//
//     if (angle1 + angle2 + angle3 == 180) {
//         cout<<"The triangle is valid";
//     }else {
//         cout<<"The triangle is not valid";
//     }
//
//     return 0;
// }

//Problem 13

// int main() {
//
//     float a, b, c, discremenant;
//
//     cout << "Enter koefficent numbers of a quadratic function...: ";
//     cin >> a >> b >> c;
//
//     discremenant = b * b - 4 * a * c;
//
//     if (discremenant < 0) {
//         cout << "There is no answer when D < 0" << endl;
//     }else if (discremenant == 0) {
//         cout << "X = " << b/(2*a) << endl;
//     }else {
//         cout << "X1 = " << (b-sqrt(discremenant))/2*a << endl;
//         cout << "X2 = " << (b+sqrt(discremenant))/2*a << endl;
//     }
//
//     return 0;
// }

//Problem 14

// int main() {
//
//     char letter;
//     cout << "Enter a letter: ";
//     cin >> letter;
//
//     if (int(letter) >= 97 && int(letter) <= 122) {
//         cout << "Lowercase alphabet";
//     }else if (int(letter) >= 65 && int(letter) <= 90) {
//         cout << "Uppercase alphabet";
//     }else if (int(letter) >= 48 && int(letter) <= 57) {
//         cout << "It is a digit";
//     }else {
//         cout << "It is not a valid alphabet or a digit";
//     }
//
//     return 0;
// }

//Problem 15

// int main() {
//
//     float price1, price2, weigh1, weigh2;
//
//     cout<<"Enter weight and price for package 1: ";
//     cin>>price1>>weigh1;
//
//     cout<<"Enter weight and price for package 2: ";
//     cin>>price2>>weigh2;
//
//     if (price1 * weigh1 < price2 * weigh2) {
//         cout << "Package 1 has better price " << price1*weigh1 << " sum" << endl;
//     }else {
//         cout << "Package 2 has better price " << price2*weigh2 << " sum" << endl;
//     }
//
//     return 0;
// }

//Problem 16

// int main() {
//
//     int number;
//     cout << "Enter a number containing three digits...: ";
//     cin >> number;
//
//     if (number % 10 == number / 100) {
//         cout << number << " is a palindrome" << endl;
//     }else {
//         cout << number << " is not a palindrome" << endl;
//     }
//
//     return 0;
// }

//Problem 17

// int main() {
//
//     char key;
//     cout << "Choose a key alphabet among u e r g: ";
//     cin >> key;
//
//     if (key == 'u') {
//         cout << "Assalomu alaykum" << endl;
//     }else if (key == 'e') {
//         cout << "Hello" << endl;
//     }else if (key == 'r') {
//         cout << "Zdrastvyte" << endl;
//     }else if (key == 'g') {
//         cout << "Hand Hog" << endl;
//     }else {
//         cout << "You have entered an invalid key" << endl;
//     }
//
//     return 0;
// }

//Problem 18

// int main() {
//
//     const int radius = 10;
//     float x, y, distance;
//     cout << "Enter a value on the x-axis: ";
//     cin >> x;
//     cout << "Enter a value on the y-axis: ";
//     cin >> y;
//
//     distance = sqrt(pow(x, 2) + pow(y, 2));
//
//     if (distance <= radius) {
//         cout << "Point (" << x << ", " << y << ") is in circle" << endl;
//     }else {
//         cout << "Point (" << x << ", " << y << ") is not in circle" << endl;
//     }
//
//     return 0;
// }

//Problem 19

// #include <vector>
//
// int main() {
//
//     int dayNumber, futureDay;
//     vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//
//     cout << "Enter today's day: ";
//     cin >> dayNumber;
//     cout << "Enter the number of days elapsed since today (up to 6): ";
//     cin >> futureDay;
//
//     futureDay = (dayNumber + futureDay) % 7;
//
//     cout << "Today is " << days[dayNumber] << endl;
//     cout << "Future day is " << days[futureDay] ;
//
//     return 0;
// }

// Problem 20

// int main() {
//
//     float weight;
//     cout << "Please enter the weight of your package: ";
//     cin >> weight;
//
//     if (weight < 0) {
//         cout << "Invalid input";
//     }else if (weight > 20) {
//         cout << "The package cannot be shipped!";
//     }
//
//     if (weight > 0 && weight <= 1) {
//         cout << "3500 sum";
//     }else if (weight > 1 && weight <= 3) {
//         cout << "5500 sum";
//     }else if (weight > 3 && weight <= 10) {
//         cout << "8500 sum";
//     }else {
//         cout << "10500 sum";
//     }
//
//     return 0;
// }

//Problem 21

// int main() {
//
//     int monthNumber;
//     cout << "Enter a specific month number (1-12): ";
//     cin >> monthNumber;
//
//     switch (monthNumber) {
//         case 1: cout << "January \n New Year, 1 January"; break;
//         case 2: cout << "February \n Love day, 14 February"; break;
//         case 3: cout << "March \n Navruz, 21 March"; break;
//         case 4: cout << "April \n Amir Temur's Birthday, 9 April"; break;
//         case 5: cout << "May \n Brother's day, 22 May"; break;
//         case 6: cout << "June \n Young's day, 30 June"; break;
//         case 7: cout << "July \n Young's day Internationally, 30 July"; break;
//         case 8: cout << "August \n Police day, 12 August"; break;
//         case 9: cout << "September \n Independence day, 1 September"; break;
//         case 10: cout << "October \n Teacher's day, 1 October"; break;
//         case 11: cout << "November \n International Olymics Day, 16 November"; break;
//         case 12: cout << "December \n Konstitutuion book accepted, 8 December"; break;
//     }
//
//     return 0;
// }