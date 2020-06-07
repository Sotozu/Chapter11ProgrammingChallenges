#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
// Test
struct Address 
{
	int house_number;
	string street;
	string city;
	string state;
	int zip_code;
};

int main() {
	
	Address alex_address;

	alex_address.house_number = 1234;
	alex_address.street = "Awesome Road";
	alex_address.city = "City of Awesome";
	alex_address.state = "The Best State";
	alex_address.zip_code = 56789;

	cout << alex_address.house_number << endl;
	cout << alex_address.street << endl;
	cout << alex_address.city << endl;
	cout << alex_address.state << endl;
	cout << alex_address.zip_code << endl;



	return 0;
}
*/
/*
// Checkpoint
struct SavingsAccount {

	string account_number;
	double account_balance;
	double interest_rate;
	double average_m_balance;

};

struct Movie {
	string movie_name;
	string director;
	string producer;
	int year_released;
};

int main() {

	SavingsAccount alex_acc = { "ACZ42137-B12-7", 4512.59, .04, 4217.07};

	// define the structure variable here. 

	Movie fav_movie;

	cout << "Enter the following data about your\n";
	cout << "favorite movie.\n";
	cout << "name: ";
	// Write a statement here that lets the user enter the 
	// name of a favorite movie. Store the name in the 
	// structure variable. 
	getline(cin, fav_movie.movie_name);
	cout << "Director: ";
	// Write a statement here that lets the user enter the 
	// name of the movie's director. Store the name in the 
	// structure variable.
	getline(cin, fav_movie.director);

	cout << "Producer: ";
	// Write a statement here that lets the user enter the 
	// name of the movie's producer. Store the name in the 
	// structure variable. 
	getline(cin, fav_movie.producer);

	cout << "Year of release: ";
	// Write a statement here that lets the user enter the 
	// year the movie was released. Store the year in the 
	// structure variable. 
	cin >> fav_movie.year_released;

	cout << "Here is data on your favorite movie:\n";
	// Write statements here that display the data. 
	// just entered into the structure variable. 
	cout << "FAVORITE MOVIE\n";
	cout << "Name: " << fav_movie.movie_name << endl;
	cout << "Director: " << fav_movie.director << endl;
	cout << "Producer: " << fav_movie.producer << endl;
	cout << "Year Released: " << fav_movie.year_released << endl;


	return 0;
}
*/

/*
// Array of Structures
struct BookInfo {
	string title;
	string author;
	string publisher;
	double price;
};

int main() {
	const int SIZE = 5;
	BookInfo library[SIZE];

	cout << "Enter the following information.\n";
	cout << "For " << SIZE << " books.\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "BOOK " << i + 1 << endl;
		cout << "Book Title: ";
		getline(cin, library[i].title);
		cout << "Author: ";
		getline(cin, library[i].author);
		cout << "Publisher: ";
		getline(cin, library[i].publisher);
		cout << "PriceL: $";
		cin >> library[i].price;
		cout << endl;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "BOOK " << i + 1 << endl;
		cout << "Book Title: " << library[i].title << endl;
		cout << "Author: " << library[i].author << endl;
		cout << "Publisher: " << library[i].publisher << endl;
		cout << "PriceL: $" << library[i].price << endl;
		cout << endl;
	}



	return 0;
}
*/
/*
struct Date {
	int month;
	int day;
	int year;
};

struct Place {
	string address;
	string city;
	string state;
	string zip;
};

struct EmployeeInfo {
	string name;
	int employee_number;
	Date birthdate;
	Place residence;
};

int main() {
	EmployeeInfo emp_type1;
	cout << "Please enter the employee information." << endl;
	cout << "Name: ";
	getline(cin, emp_type1.name);
	cout << "Employee Number: ";
	cin >> emp_type1.employee_number;
	cout << "Birthday (Enter the numerical time. January = 1 and Decemeber = 12).\n" << endl;
	cout << "Month (xx): ";
	cin >> emp_type1.birthdate.month;
	cout << "Day (xx): ";
	cin >> emp_type1.birthdate.day;
	cout << "Year (xxxx): ";
	cin >> emp_type1.birthdate.year;
	cout << "Enter the employees residence.\n" << endl;
	cout << "Address: ";
	cin >> emp_type1.residence.address;
	cout << "City: ";
	cin >> emp_type1.residence.city;
	cout << "State: ";
	cin >> emp_type1.residence.state;
	cout << "Zip Code: ";
	cin >> emp_type1.residence.zip;

	cout << endl;
	cout << "Employee Information:\n";
	cout << "Name: " << emp_type1.name << endl;
	cout << "Employee Number: " << emp_type1.employee_number << endl;
	cout << "Birthday: " << emp_type1.birthdate.month << "/" << emp_type1.birthdate.day << "/" << emp_type1.birthdate.year << endl;
	cout << "Address: " << emp_type1.residence.address << " " << emp_type1.residence.city << " " << emp_type1.residence.state << " " << emp_type1.residence.zip << endl;

	cout << endl;
	cout << "Thank you!\n";

	return 0;
}
*/

//Checkpoit page. 616
/*
struct Product {
	string description;
	int partNum;
	double cost;
};

struct Measurement {
	int miles;
	long int meters;
};

struct Destination {
	string city;
	Measurement distance;
};

int main() {
	const int SIZE = 100;
	Product hardware_inv[SIZE];
	for (int i = 0; i < SIZE; i++) {
		hardware_inv[i].description = "";
		hardware_inv[i].partNum = 0;
		hardware_inv[i].cost = 0;
	}

	hardware_inv[0].description = "Claw hammer";
	hardware_inv[0].partNum = 547;
	hardware_inv[0].cost = 8.29;

	for (int i = 0; i < SIZE; i++) {
		cout << hardware_inv[i].description << endl;
		cout << hardware_inv[i].partNum << endl;
		cout << hardware_inv[i].cost << endl;
		cout << endl;
	}

	Destination city_facts;
	city_facts.city = "Tupelo";
	city_facts.distance.miles = 375;
	city_facts.distance.meters = 603375;

	cout << "City: " << city_facts.city << endl;
	cout << "Miles: " << city_facts.distance.miles << endl;
	cout << "Meters: " << city_facts.distance.meters << endl;
	return 0;
}

*/

