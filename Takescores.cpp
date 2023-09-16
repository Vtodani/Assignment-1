#include <iostream>
using namespace std;
void displayArray(int array[], int size);
void selectionSort(int array[], int size); 
int findMax(int array[], int size); 
int findMin(int array[], int size);
double findAvg(int array[], int size);
/*Array global init for global acess through methods




*/




/*takes in scot=res*/
int main() {
	int num;
	int arr[50];
	cout << "How many scores do you want to enter? : ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "\nEnter score #" << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "Original order scores are: ";
	displayArray(arr, num);
	selectionSort(arr, num);
	cout << "\nScores from highest to lowest are: ";
	displayArray(arr, num);
	cout << "\nHighest: " << findMax(arr, num) << endl;
	cout << "Lowest: " << findMin(arr, num) << endl;
	cout << "Average: " << findAvg(arr, num) << endl;
}
void displayArray(int array[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "  ";
	}
}
void selectionSort(int array[], int size) {
	int comp;
	for (int i = 0; i < size - 1; i++)
	{
		comp = i;
		for (int j = i + 1; j < size; j++)
			if (array[j] > array[comp]) {
				comp = j;
			}
		swap(array[comp], array[i]);
	}
}
int findMax(int array[], int size) {
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max) {
			max = array[i];
	 }
	}
	return max;
}
int findMin(int array[], int size) {
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] <min) {
			min = array[i];
		}
	}
	return min;
}
double findAvg(int array[], int size) {
	double ave;
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	ave = sum / (double)size;
	return ave;
}
int NumOfEmployees() {
	int numEmp;
	cout << "Please enter the number of employees in the company: ";
	cin >> numEmp;
	return numEmp;
}
int totDaysAbsent(int NumberOfEmplyees) {
	int empID;
	int empAbsent;
	int totAbsent = 0;
	for (int i = 0; i < NumberOfEmplyees; i++) {
		cout << "Please enter an employee ID: ";
		cin >> empID;
		cout << "Please enter the number of days this employee was absent: ";
		cin >> empAbsent;
		//error check as you cant have negative days
		while (empAbsent < 0) {
			cout << "The number of days must not be negative" << endl;
			cout << "Please re - enter the number of days absent:";
			cin >> empAbsent;
		}
		employeeAbsences << setw(4) << empID;
		employeeAbsences << "                   " << setw(5) << empAbsent << endl;
		//increment total days absent by each daysabsent input
		totAbsent += empAbsent;

	}
	return  totAbsent;
}



int colorNum;
double totalprice;
double basePrice;
char YesNo;
cout << "Enter the number of colors in the sign: ";
cin >> colorNum;
if (colorNum == 1)
{
	basePrice = 250;
}
else if (colorNum == 2)
{
	basePrice = 325;
}
else if (colorNum == 3)
{
	basePrice = 450;
}
else if (colorNum == 4)
{
	basePrice = 625;
}
else if (colorNum >= 5)
{
	basePrice = 850;
}
cout << "Do you want a lighted sign (y/n)? ";
cin >> YesNo;
totalprice = basePrice;
if (YesNo == 'y')
{
	totalprice = totalprice + (basePrice * .25);
}

cout << "Do you want a old sign removed (y/n)? ";
cin >> YesNo;

if (YesNo == 'y')
{
	totalprice = totalprice + (basePrice * .1);
}

cout << "The price is: $" << fixed << setprecision(2) << totalprice;
return 0;
}




