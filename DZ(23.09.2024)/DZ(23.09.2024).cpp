#include <iostream>

using namespace std;

int main()
{
    // Good luck :)
}

/*
	// 1) ���������� �������� ��������� � ���������� �����.
    int num;
    cout << "input number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "your number even";
    }
    else {
        cout << "your number odd";
    }
*/
/*
    // 2.	������ ��� ����� � ����� ������� �� ���.
    int a, b;
    cout << "Input 2 numbers: ";
    cin >> a;
    cin >> b;
    if (a > b) {
        cout << "a > b";
    }
    else if (a == b) {
        cout << "a = b";
    }
    else {
        cout << "a < b";
    }
*/
/*
    // 3.���������� ���� ��������� �����.
    int a;
    cout << "Input number: ";
    cin >> a;
    if (a > 0)
    {
        cout << "this is +";
    }
    else if (a == 0)
    {
        cout << "this is 0";
    }
    else {
        cout << "this is -";
    }
*/
/*
// 4.	������ ��� ����� � ����� ���������� �� ���.
    int a, b, c;
    cout << "Input 3 number: ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b and a > c)
    {
        cout << "most big a = " << a;
    }
    else if (b > c and b > a)
    {
        cout << "most big b = " << b;
    }
    else if (c > a and c > b)
    {
        cout << "most big c = " << c;
    }
    else {
        cout << "error";
    }
*/
/*
    // 5.	����������� �����������. �������� 2 ������� ����� a � b. 
    int a, b, c;
    cout << "Input 2 number: ";
    cin >> a;
    cin >> b;
    cout << "What do you want: 1) a + b 2) a - b 3) a * b 4) a / b ";
    cin >> c;
    if (c == 1)
    {
        cout << a + b;
    }
    else if (c == 2)
    {
        cout << a - b;
    }
    else if (c == 3)
    {
        cout << a * b;
    }
    else if (c == 4)
    {
        cout << a / b;
    }
    else {
        cout << "error";
    }
*/
/*
  // 6.	������ � ���������� ����� � ���������, ����������� �� ��� ����� ��������� �� 1 �� 30
    int a;
    cout << "Input number: ";
    cin >> a;
    if (a >= 1 and a <= 30)
    {
        cout << "Yes, a is in diapason 1 - 30";
    }
    else {
        cout << "No, a isn't in diapason 1 - 30";
    }
*/
/*
    // 7.	�������� ��������� ��� �������� ��������� ����� X ����� Y (��� ����� �������� � ����������).
    int a, b;
    cout << "Input 2 numbers: ";
    cin >> a;
    cin >> b;
    if (a % b == 0)
    {
        cout << "Yes, A is a multiple of B";
    }
    else {
        cout << "No, A isn't a multiple of B";
    }
*/
/*
    // 8.	������ ����� � ���������� ������ �� ��� 3, 5, 7.
    int a;
    cout << "Input number: ";
    cin >> a;
    if (a % 3 == 0)
    {
        cout << "Yes, A is a multiple of 3";
    }
    else if (a % 5 == 0)
    {
        cout << "Yes, A is a multiple of 5";
    }
    else if (a % 7 == 0)
    {
        cout << "Yes, A is a multiple of 7";
    }
    else {
        cout << "No, A isn't a multiple of 3,5,7";
    }
*/
/*
    // 9.	���������� ������ ��������� �����.
    int number;
    cout << "Input number: ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }
    cout << "Module number: " << number << endl;
*/
/*
    // 10.	 �������� ����� ����� (�� ����� 4 ��������). ���������� ���������� ���� � ��, � �� �����.
    int number;
    int sum = 0, count = 0;
    cout << "Input numbers (no big four razryads): ";
    cin >> number;
    if (number < 0) {
        number = -number;
    }
    else if (number < 10) {  
        sum = number;
        count = 1;
    }
    else if (number < 100) {  
        sum = number / 10 + number % 10;
        count = 2;
    }
    else if (number < 1000) {  
        sum = number / 100 + (number / 10) % 10 + number % 10;
        count = 3;
    }
    else { 
        sum = number / 1000 + (number / 100) % 10 + (number / 10) % 10 + number % 10;
        count = 4;
    }
    cout << "Kolvo number: " << count << endl;
    cout << "Sum number: " << sum << endl;
*/
/*
// 11) ��������� �������� ���������� ���� � �����. ������ ���� � ���, ������� ��������� � ���, �������  �� ������� ��� �������� (��������� ��� = ���� - 110) . 
    int height, weight, idealWeight, dif;
    cout << "Input your height (in cm) : ";
    cin >> height;
    cout << "input your weight (in kg): ";
    cin >> weight;
    idealWeight = height - 110;
    dif = weight - idealWeight;
    if (dif == 0) {
        cout << "Your wheight is ideal  "<< endl;
    }
    else if (dif > 0) {
        cout << "you need mines " << dif << " kg" << endl;
    }
    else {
        cout << "You need plus " << -dif << " kg" << endl;
    }*/