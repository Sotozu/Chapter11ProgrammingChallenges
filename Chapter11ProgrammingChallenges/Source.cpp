#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <iomanip>
#include <vector>
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


//Checkpoit page. 616

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


// Checkpoint 11.11 - 11.15

struct Rectangle {
	int length;
	int width;
};

void inPut(Rectangle&);
void outPut(Rectangle);
Rectangle changeSize();
void changeByReference(Rectangle*);

int main() {
	Rectangle r;
	cout << "Enter the dimensions of the rectangle.\n";
	inPut(r); //Passed by reference function. User inserts data into the structure

	cout << "The dimension and size of the rectangle is as follows.\n";
	outPut(r); //Outputs the values in the struct 'r'

	cout << endl;
	cout << "Enter new dimensions.\n";
	r = changeSize(); //function 'changeSize' of type 'Rectangle' asks user for new info and then return it to struct 'r'

	cout << endl;
	cout << "The dimension and size of the rectangle is as follows.\n";
	outPut(r);

	Rectangle* recPtr = nullptr; //Pointer of type Rectangle;

	recPtr = &r; //Pointer 'recPtr' hold the position of the structure variable 'r';


	changeByReference(recPtr); //Changing the contents of struct 'r' through a pointer to struct 'r'
	cout << endl;
	cout << "The dimension and size of the rectangle is as follows.\n";
	outPut(r);
	return 0;
}

void inPut(Rectangle &r) {
	cout << "Enter length (inches): ";
	cin >> r.length;
	cout << "Enter width (inches): ";
	cin >> r.width;

}
void outPut(Rectangle r) {
	cout << "Length: " << r.length << endl;
	cout << "Width: " << r.width << endl;
	cout << "Area: " << r.width * r.length << endl;
}

Rectangle changeSize() {
	Rectangle r;
	cout << "Enter length (inches): ";
	cin >> r.length;
	cout << "Enter width (inches): ";
	cin >> r.width;
	return r;
}
void changeByReference(Rectangle*recPtr) {
	recPtr->width = 1000;
	recPtr->length = 1000;
}

// 11.15 Answer is 'B' (*rptr).width


// Checkpoint 11.16 - 11.20

union ThreeTypes {
	char letter;
	int whole;
	double real;
};


int main() {

	const int SIZE = 50;

	ThreeTypes mylist[50];

	//------------------------------------

	for (int i = 0; i < SIZE; i++) {
		mylist[i].real = 2.37;
	}
	cout << "NEW" << endl;
	for (int i = 0; i < SIZE; i++) { 
		cout << mylist[i].real << endl;
	}

	//-----------------------------------

	for (int i = 0; i < SIZE; i++) {
		mylist[i].letter = 'A';
	}
	cout << "NEW" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << mylist[i].letter << endl;
	}

	//------------------------------------

	for (int i = 0; i < SIZE; i++) {
		mylist[i].whole = 10;
	}
	cout << "NEW" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << mylist[i].whole << endl;
	}

	return 0;
}


// Just testing sometings
enum Months {
	January, February, March, April, May, June, July, August, September, October, November, December
};

int main() {
	

	Months months;

	for (months = January; months <= December; months = static_cast<Months>(months + 1)) {

		cout << months << endl;
	 

	}
	return 0;
}



// Checkpoint 11.21 - 11.26

// 11.21: ROSE = 0, DAISY = 1 and PETUNIA = 2
// 11.22: It will display "1 7 8"
// 11.23: Anonymous
// 11.24: "Z is not greater than X."
// 11.25:

int main() {

	enum Color { RED, GREEN, BLUE };
	Color c;
	c = static_cast<Color>(0);
	if (c == RED) {
		cout << "The color is RED.\n";
	}
 
	c = static_cast<Color>(c+1);
	if (c == GREEN) {
		cout << "The color is GREEN.\n";
	}
	return 0;
}


// PROGRAMMING CHALLENGES


// 1. Movie Data

struct MovieData {
	string title;
	string director;
	int year_r;
	int run_t;
};
void outPut(const MovieData, int);
int main() {
	const int SIZE = 2;

	MovieData myfav[SIZE];

	//movie 1

	myfav[0].title = "alex THE MOVIE!";
	myfav[0].director = "alex";
	myfav[0].year_r = 1;
	myfav[0].run_t = 99;

	myfav[1].title = "ALEXANDER THE MOVIE!";
	myfav[1].director = "ALEXANDER";
	myfav[1].year_r = 2;
	myfav[1].run_t = 1;

	for (int i = 0; i < SIZE; i++) {
		outPut(myfav[i], SIZE);
		cout << endl;
	}
	

	return 0;
}
void outPut(const MovieData myfav, int SIZE) {
	cout << "Title: " << myfav.title << endl;
	cout << "Director: " << myfav.director << endl;
	cout << "Year Released: " << myfav.year_r << endl;
	cout << "Run Time: " <<myfav.run_t << endl;
}



// 2. Movie Profit

struct MovieData {
	string title;
	string director;
	int year_r;
	int run_t;
	int production_c;
	int first_y_p;

};
void outPut(const MovieData);
int main() {
	const int SIZE = 2;

	MovieData myfav[SIZE];

	//movie 1

	myfav[0].title = "alex THE MOVIE!";
	myfav[0].director = "alex";
	myfav[0].year_r = 1;
	myfav[0].run_t = 99;
	myfav[0].first_y_p = 1000000;
	myfav[0].production_c = 999999;

	myfav[1].title = "ALEXANDER THE MOVIE!";
	myfav[1].director = "ALEXANDER";
	myfav[1].year_r = 2;
	myfav[1].run_t = 1;
	myfav[1].first_y_p = 999999;
	myfav[1].production_c = 1000000;

	for (int i = 0; i < SIZE; i++) {
		outPut(myfav[i]);
		cout << endl;
	}


	return 0;
}
void outPut(const MovieData myfav) {
	cout << "Title: " << myfav.title << endl;
	cout << "Director: " << myfav.director << endl;
	cout << "Year Released: " << myfav.year_r << endl;
	cout << "Run Time: " << myfav.run_t << endl;
	cout << "First Year Profit/Loss: $" << myfav.first_y_p - myfav.production_c << endl;
}



// 3. Corporate Sales Data

struct Division {
	string div_name;
	double q1_s, q2_s, q3_s, q4_s;
	double total;
	double average;
};
void outPut(const Division);

int main() {
	const int SIZE = 4;
	Division myCompany[SIZE];
	myCompany[0].div_name = "East";
	myCompany[1].div_name = "West";
	myCompany[2].div_name = "North";
	myCompany[3].div_name = "South";

	for (int i = 0; i < SIZE; i++) {
		cout << myCompany[i].div_name << " Division" << endl;
		do {
			cout << "First Quarter Sales: $";
			cin >> myCompany[i].q1_s;
			if (myCompany[i].q1_s < 0) {
				cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q1_s < 0);

		do {
		cout << "Second Quarter Sales: $";
		cin >> myCompany[i].q2_s;
		if (myCompany[i].q2_s < 0) {
			cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q2_s < 0);
		
		do {
		cout << "Third Quarter Sales: $";
		cin >> myCompany[i].q3_s;
		if (myCompany[i].q3_s < 0) {
			cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q3_s < 0);

		do {
		cout << "Fourth Quarter Sales: $";
		cin >> myCompany[i].q4_s;
		if (myCompany[i].q4_s < 0) {
			cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q4_s < 0);

		cout << endl;
		myCompany[i].total = myCompany[i].q1_s + myCompany[i].q2_s + myCompany[i].q3_s + myCompany[i].q4_s;
		myCompany[i].average = (myCompany[i].total / 4);
	}
	cout << "--OUTPUT--" << endl;
	for (int i = 0; i < SIZE; i++) {
		outPut(myCompany[i]);
		cout << endl;
	}

	return 0;
}

void outPut(const Division myCompany) {
	cout << myCompany.div_name << " Division" << endl;
	cout << "First Quarter Sales: $" << myCompany.q1_s << endl;
	cout << "Second Quarter Sales: $" << myCompany.q2_s << endl;
	cout << "Third Quarter Sales: $" << myCompany.q3_s << endl;
	cout << "Fourth Quarter Sales: $" << myCompany.q4_s << endl;
	cout << "Total Sales: $" << myCompany.total << endl;
	cout << "Average Quartely Sales: $" << myCompany.average << endl;
}



// 4. Weather Statistics
enum months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

struct Weather {
	double total_r;
	double temp_h;
	double temp_l;
	double average;
};

string whichMonth(months);
void insertWeatherData(Weather&, string);
void outPut(Weather&, string);
int main() {
	string month_name, month_highest, month_lowest;
	months weather_months = JANUARY;
	const int SIZE = 12;
	Weather month[SIZE];
	double highest_temp, lowest_temp, total_rainfall = 0, total_average_temps = 0, 
		average_monthly_rainfall, average_of_average_monthly_temp ;






	
	cout << "Please enter the following data for each month.\n";

	for (int i = 0; i < SIZE; i++) {
		month_name = whichMonth(weather_months);
		insertWeatherData(month[i], month_name);
		cout << endl;
		cout << "--------------" <<endl << endl;
		weather_months = static_cast<months>(weather_months + 1);
	}
	cout << endl << endl;
	cout << "-----STATISTICS-----" << endl << endl;

	weather_months = JANUARY; // reset weather_months to JANUARY

	for (int i = 0; i < SIZE; i++) {
		total_rainfall += month[i].total_r;
		total_average_temps += month[i].average;
	}

	average_monthly_rainfall = total_rainfall / SIZE;
	average_of_average_monthly_temp = total_average_temps / SIZE;


	highest_temp = month[0].temp_h;
	month_highest = "January";
	lowest_temp = month[0].temp_l;
	month_lowest = "January";


	for (int i = 1; i < SIZE; i++) {
		if (highest_temp < month[i].temp_h) {
			highest_temp = month[i].temp_h;
			month_highest = whichMonth(static_cast<months>(i));
		}
		if (lowest_temp > month[i].temp_l) {
			lowest_temp = month[i].temp_l;
			month_lowest = whichMonth(static_cast<months>(i));
		}
	}

	cout << setprecision(2) << fixed << showpoint;

	cout << "Average Monthly Rainfall: " << average_monthly_rainfall << " inches" << endl;


	cout << "Total Rainfall: " << total_rainfall << " inches" << endl;
	cout << "Highest Temperature is " << highest_temp << "F " << " in " << month_highest <<  endl;
	cout << "Lowest Temprature is " << lowest_temp << "F" << " in " << month_lowest <<  endl;
	cout << "Average Monthly Temperature: " << average_of_average_monthly_temp << "F " << endl;


	return 0;

}

string whichMonth(months weather_months) {
	string month_name;
	switch (weather_months) {
	case JANUARY:
		month_name = "January";
		break;
	case FEBRUARY:
		month_name = "February";
		break;
	case MARCH:
		month_name = "March";
		break;
	case APRIL:
		month_name = "April";
		break;
	case MAY:
		month_name = "May";
		break;
	case JUNE:
		month_name = "June";
		break;
	case JULY:
		month_name = "July";
		break;
	case AUGUST:
		month_name = "August";
		break;
	case SEPTEMBER:
		month_name = "September";
		break;
	case OCTOBER:
		month_name = "October";
		break;
	case NOVEMBER:
		month_name = "November";
		break;
	case DECEMBER:
		month_name = "December";
		break;
	default:
		month_name = "ERROR";
		break;
	}
	return month_name;
}

void insertWeatherData(Weather& month, string month_name) {
	cout << month_name << " weather statistics." << endl;
	cout << "Total Rainfall (in): ";
	cin >> month.total_r;
	do {
		cout << "High Temperature (F): ";
		cin >> month.temp_h;
		if (month.temp_h > 140) {
			cout << "ERROR: Max temp is 140. Please enter a lower number.\n";
		}
	} while (month.temp_h > 140);
	do {
		cout << "Low Temperature (F): ";
		cin >> month.temp_l;
		if (month.temp_l < -100) {
			cout << "ERROR: MIN temp is -100. Please enter a higher number.\n";
		}
	} while (month.temp_l < -100);

	month.average = (month.temp_h + month.temp_l) / 2;
}
void outPut(Weather& month, string month_name) {

	double average_monthly_rainfall;
	double total_rainfall;
	double highest_temp;
	double lowest_temp;
	cout << month_name << " weather statistics." << endl;
	cout << "Total Rainfall (in): " << endl;
	cout << "High Temperature (F): " << endl;
	cout << "Low Temperature (F): " << endl;

} 


// 5. Weather Statistics Modification
// I had done this version on my first attempt and this version is a simple copy and paste

	// 4. Weather Statistics
	enum months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

	struct Weather {
		double total_r;
		double temp_h;
		double temp_l;
		double average;
	};

	string whichMonth(months);
	void insertWeatherData(Weather&, string);
	void outPut(Weather&, string);
	int main() {
		string month_name, month_highest, month_lowest;
		months weather_months = JANUARY;
		const int SIZE = 12;
		Weather month[SIZE];
		double highest_temp, lowest_temp, total_rainfall = 0, total_average_temps = 0,
			average_monthly_rainfall, average_of_average_monthly_temp;







		cout << "Please enter the following data for each month.\n";

		for (int i = 0; i < SIZE; i++) {
			month_name = whichMonth(weather_months);
			insertWeatherData(month[i], month_name);
			cout << endl;
			cout << "--------------" << endl << endl;
			weather_months = static_cast<months>(weather_months + 1);
		}
		cout << endl << endl;
		cout << "-----STATISTICS-----" << endl << endl;

		weather_months = JANUARY; // reset weather_months to JANUARY

		for (int i = 0; i < SIZE; i++) {
			total_rainfall += month[i].total_r;
			total_average_temps += month[i].average;
		}

		average_monthly_rainfall = total_rainfall / SIZE;
		average_of_average_monthly_temp = total_average_temps / SIZE;


		highest_temp = month[0].temp_h;
		month_highest = "January";
		lowest_temp = month[0].temp_l;
		month_lowest = "January";


		for (int i = 1; i < SIZE; i++) {
			if (highest_temp < month[i].temp_h) {
				highest_temp = month[i].temp_h;
				month_highest = whichMonth(static_cast<months>(i));
			}
			if (lowest_temp > month[i].temp_l) {
				lowest_temp = month[i].temp_l;
				month_lowest = whichMonth(static_cast<months>(i));
			}
		}

		cout << setprecision(2) << fixed << showpoint;

		cout << "Average Monthly Rainfall: " << average_monthly_rainfall << " inches" << endl;


		cout << "Total Rainfall: " << total_rainfall << " inches" << endl;
		cout << "Highest Temperature is " << highest_temp << "F " << " in " << month_highest << endl;
		cout << "Lowest Temprature is " << lowest_temp << "F" << " in " << month_lowest << endl;
		cout << "Average Monthly Temperature: " << average_of_average_monthly_temp << "F " << endl;


		return 0;

	}

	string whichMonth(months weather_months) {
		string month_name;
		switch (weather_months) {
		case JANUARY:
			month_name = "January";
			break;
		case FEBRUARY:
			month_name = "February";
			break;
		case MARCH:
			month_name = "March";
			break;
		case APRIL:
			month_name = "April";
			break;
		case MAY:
			month_name = "May";
			break;
		case JUNE:
			month_name = "June";
			break;
		case JULY:
			month_name = "July";
			break;
		case AUGUST:
			month_name = "August";
			break;
		case SEPTEMBER:
			month_name = "September";
			break;
		case OCTOBER:
			month_name = "October";
			break;
		case NOVEMBER:
			month_name = "November";
			break;
		case DECEMBER:
			month_name = "December";
			break;
		default:
			month_name = "ERROR";
			break;
		}
		return month_name;
	}

	void insertWeatherData(Weather & month, string month_name) {
		cout << month_name << " weather statistics." << endl;
		cout << "Total Rainfall (in): ";
		cin >> month.total_r;
		do {
			cout << "High Temperature (F): ";
			cin >> month.temp_h;
			if (month.temp_h > 140) {
				cout << "ERROR: Max temp is 140. Please enter a lower number.\n";
			}
		} while (month.temp_h > 140);
		do {
			cout << "Low Temperature (F): ";
			cin >> month.temp_l;
			if (month.temp_l < -100) {
				cout << "ERROR: MIN temp is -100. Please enter a higher number.\n";
			}
		} while (month.temp_l < -100);

		month.average = (month.temp_h + month.temp_l) / 2;
	}
	void outPut(Weather & month, string month_name) {

		double average_monthly_rainfall;
		double total_rainfall;
		double highest_temp;
		double lowest_temp;
		cout << month_name << " weather statistics." << endl;
		cout << "Total Rainfall (in): " << endl;
		cout << "High Temperature (F): " << endl;
		cout << "Low Temperature (F): " << endl;

	}


// 6. Soccer Scores

struct Soccer {
	string name;
	int num;
	int points;
};

void inputData(Soccer&);
void outPutData(Soccer&);

int main() {

	int total_points = 0;
	int index_of_mvp, most_points;
	

	const int SIZE = 12;
	Soccer player[SIZE];

	cout << "INSERT TEAM DATA" << endl;
	cout << "---------------------------------" << endl;


	for (int i = 0; i < SIZE; i++) {
		inputData(player[i]);
		cout << endl;
	}

	cout << "TEAM ROSTER" << endl;
	cout << "---------------------------------" << endl;
	for (int i = 0; i < SIZE; i++) {
		outPutData(player[i]);
		total_points += player[i].points;
		cout << endl;
	}

	most_points = player[0].points;
	index_of_mvp = 0;
	for (int i = 1; i < SIZE; i++) {
		if (most_points < player[i].points) {
			most_points = player[i].points;
			index_of_mvp = i;
		}
	}

	cout << "TEAM STATISTICS" << endl;
	cout << "---------------------------------" << endl;
	cout << "Total Points Scored: " << total_points << endl;
	cout << "MVP NAME: " << player[index_of_mvp].name << endl;
	cout << "MVP SCORED POINTS: " << player[index_of_mvp].points << endl;

	return 0;
}

void inputData(Soccer &player) {
	static int p_num = 1;
	cout << "Player " << p_num << endl;
	cout <<"NAME: ";
	getline(cin, player.name);

	do {
		cout << "NUMBER: ";

		cin >> player.num;

		if (player.num < 0) {
			cout << "ERROR: Player number can't be negative.\n";
		}
	} while (player.num < 0);

	do {
		cout << "POINTS SCORED: ";

		cin >> player.points;

		if (player.points < 0) {
			cout << "ERROR: Points scored can't be negative.\n";
		}
	} while (player.points < 0);

	p_num++;
	cin.ignore();
}

void outPutData(Soccer &player) {
	static int p_num = 1;
	cout << "Name: " << player.name << endl;
	cout << "Number: " << player.num << endl;
	cout << "Points: " << player.points << endl;
 }
 


// 7. Customer Accounts
enum cust_elements {NAME = 1, ADDRESS, CITY, STATE, ZIP, TELEPHONE_NUMBER, ACCOUNT_BALANCE, LAST_PAYMENT};
enum menu_options {ENTER_ALL_CUSTOMER_DATA = 1, ENTER_SPECIFIC_DATA, DISPLAY_ALL_CUSTOMER_DATA, DISPLAY_SPECIFIC_DATA, EXIT};
struct Customer {

	string name;
	string address;
	string city;
	string state;
	int zip;
	string telephone_number;
	double account_balance;
	string last_payment_date;
};

void inputData(Customer&, int);
void changeData(Customer&, int);
void showAllData(const Customer& , int);
void showSpecificData(const Customer&, int);
void initializeEmptyData(Customer&); // int variables need to be initialized to -1 so that they can be checked IF the user has inserted any data into them.

bool checkIfAllEmpty(const Customer&, int);

void menu();
void element();


int main() {
	int menu_choice, option2_choice, option4_choice, data_field;
	const int SIZE = 10;
	Customer customer[SIZE];

	for (int i = 0; i < SIZE; i++) {
		initializeEmptyData(customer[i]);
	}

	do {

		menu();
		cout << endl;
		cout << "ENTER OPTION: ";
		cin >> menu_choice;
		cin.ignore(); // flushing out the newline out of the buffer form 'cin >> menu_choice'
		cout << endl;
		switch (menu_choice) {
			case ENTER_ALL_CUSTOMER_DATA:
				for (int i = 0; i < SIZE; i++) {
					inputData(customer[i], i);
				}
				cout << endl;
				break;

			case ENTER_SPECIFIC_DATA:
				cout << "Which customer would you like to enter data for?\n";
				for (int i = 0; i < SIZE; i++) {
					cout << "CUSTOMER " << i + 1 << ": " << customer[i].name << endl;
				}
				cout << endl;
				cout << "ENTER CUSTOMER NUMBER: ";
				cin >> option2_choice;
				option2_choice -= 1;
				cout << endl;
	
				cout << "Which data field would you like to change?\n";
				element();
				cout << endl;
				cout << "ENTER DATA FIELD NUMBER: ";
				cin >> data_field;
				cout << endl;

				cin.ignore(); //flushing out newline from buffer;
				changeData(customer[option2_choice], data_field);
				cout << endl;
				break;

			case DISPLAY_ALL_CUSTOMER_DATA:

				for (int i = 0; i < SIZE; i++) {

					if (checkIfAllEmpty(customer[i], i) == true) {
						cout << "CUSTOMER " << i+1 << ": EMPTY" << endl;
					}
					else {
					
						showAllData(customer[i], i);

					}
					
					cout << endl;
				}

				cout << endl;
				break;

			case DISPLAY_SPECIFIC_DATA:
				cout << "ENTER CUSTOMER NUMBER: ";
				cin >> option4_choice;
				option4_choice -= 1;
				showSpecificData(customer[option4_choice], option4_choice);
				cout << endl;

				break;

			case EXIT:

				break;

			default:
				cout << "ERROR: Please enter a valid option.\n";
				break;

		}

	} while (menu_choice != EXIT);


	



	return 0;
}
void inputData(Customer &customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: ";
	getline(cin, customer.name);
	cout << "Address: ";
	getline(cin, customer.address);
	cout << "City: ";
	getline(cin, customer.city);
	cout << "State: ";
	getline(cin, customer.state);
	cout << "Zipcode: ";
	cin >> customer.zip;
	cin.ignore(); //flushing out the newline out of the buffer
	cout << "Telephone Number: ";
	getline (cin,customer.telephone_number);

	cout << "Account Balance: $";
	cin >> customer.account_balance;

	while (customer.account_balance < 0) {
	
		cout << "ERROR: Enter a positive value.\n";
		cout << "Account Balance: $";
		cin >> customer.account_balance;

	};


	cout << "Last Payment Date (xx/xx/xxxx): ";
	cin.ignore(); // flushing out the newline out of the buffer
	getline(cin, customer.last_payment_date);
	cout << endl;
}

void changeData(Customer& customer, int data_field) {
	switch (data_field) {
	case NAME:
		cout << "Name: ";
		getline(cin, customer.name);
		break;
	case ADDRESS:
		cout << "Address: ";
		getline(cin, customer.address);
		break;
	case CITY:
		cout << "City: ";
		getline(cin, customer.city);
		break;
	case STATE:
		cout << "State: ";
		getline(cin, customer.state);
		break;
	case ZIP:
		cout << "Zipcode: ";
		cin >> customer.zip;
		break;
	case TELEPHONE_NUMBER:
		cout << "Telephone Number: ";
		getline(cin,customer.telephone_number);
		break;
	case ACCOUNT_BALANCE:
		do {
			cout << "Account Balance: $";
			cin >> customer.account_balance;
			if (customer.account_balance < 0) {
				cout << "ERROR: Enter a positive value.\n";
			}
		} while (customer.account_balance < 0);
		break;
	case LAST_PAYMENT:
		cout << "Last Payment Date (xx/xx/xxxx): ";
		getline(cin, customer.last_payment_date);
		break;
	default:
		cout << "ERROR: changeData funcition.\n";
		break;
	}
}


void menu() {
	cout << "------------------------------\n";
	cout << "            MENU              \n";
	cout << "------------------------------\n";

	cout << "1. Enter ALL Customer Data\n";
	cout << "2. Edit Data For A Specific Customer\n";
	cout << "3. Display ALL Customer Data\n";
	cout << "4. Display A Specific Customers Data\n";
	cout << "5. EXIT\n";
	cout << "------------------------------\n";

}
void element() {
	cout << "DATA FIELDS\n";
	cout << "1. NAME\n";
	cout << "2. ADDRESS\n";
	cout << "3. CITY\n";
	cout << "4. STATE\n";
	cout << "5. ZIP\n";
	cout << "6. TELEPHONE NUMBER\n";
	cout << "7. ACCOUNT BALANCE.\n";
	cout << "8. LAST PAYMENT\n";
}

void showAllData(const Customer &customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: " << customer.name << endl;
	cout << "Address: " << customer.address << endl;
	cout << "City: " << customer.city << endl;
	cout << "State: " << customer.state << endl;
	cout << "Zipcode: " << customer.zip << endl;
	cout << "Telephone Number: " << customer.telephone_number << endl;
	cout << "Account Balance: $" << customer.account_balance << endl;
	cout << "Last Payment Date: " << customer.last_payment_date << endl;
}

bool checkIfAllEmpty(const Customer& customer, int cust_num) {
	bool is_empty = true;
	if (!customer.name.empty()) {
		is_empty = false;
	}
	if (!customer.address.empty()) {
		is_empty = false;

	}
	if (!customer.city.empty()) {
		is_empty = false;

	}
	if (!customer.state.empty()) {
		is_empty = false;

	}
	if (customer.zip != -1) {
		is_empty = false;

	}
	if (customer.telephone_number.empty()) {
		is_empty = false;

	}
	if (customer.account_balance != -1) {
		is_empty = false;

	}
	if (!customer.last_payment_date.empty()) {
		is_empty = false;

	}

	return is_empty;
}

void initializeEmptyData(Customer& customer) {
	customer.zip = -1;
	customer.account_balance = -1;
}

void showSpecificData(const Customer& customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: " << customer.name << endl;
	cout << "Address: " << customer.address << endl;
	cout << "City: " << customer.city << endl;
	cout << "State: " << customer.state << endl;
	cout << "Zipcode: " << customer.zip << endl;
	cout << "Telephone Number: " << customer.telephone_number << endl;
	cout << "Account Balance: $" << customer.account_balance << endl;
	cout << "Last Payment Date: " << customer.last_payment_date << endl;
}


// 8. Search Function For Customer Accounts Program


enum cust_elements { NAME = 1, ADDRESS, CITY, STATE, ZIP, TELEPHONE_NUMBER, ACCOUNT_BALANCE, LAST_PAYMENT };
enum menu_options { ENTER_ALL_CUSTOMER_DATA = 1, ENTER_SPECIFIC_DATA, DISPLAY_ALL_CUSTOMER_DATA, DISPLAY_SPECIFIC_DATA, FIND_CUSTOMER, EXIT };
struct Customer {

	string name; 
	string address;
	string city;
	string state;
	int zip;
	string telephone_number;
	double account_balance;
	string last_payment_date;
};

void inputData(Customer&, int);
void changeData(Customer&, int);
void showAllData(const Customer&, int);
void showSpecificData(const Customer&, int);
void initializeEmptyData(Customer&); // int variables need to be initialized to -1 so that they can be checked IF the user has inserted any data into them.
void findCustomer(string);

bool checkIfAllEmpty(const Customer&, int);

void menu();
void element();


int main() {
	int menu_choice, option2_choice, option4_choice, data_field;
	const int SIZE = 10;
	Customer customer[SIZE];

	string find_cust;

	char *p[30];

	bool found_match;

	for (int i = 0; i < SIZE; i++) {
		initializeEmptyData(customer[i]);
	}

	do {

		menu();
		cout << endl;
		cout << "ENTER OPTION: ";
		cin >> menu_choice;
		cin.ignore(); // flushing out the newline out of the buffer form 'cin >> menu_choice'
		cout << endl;
		switch (menu_choice) {
		case ENTER_ALL_CUSTOMER_DATA:
			for (int i = 0; i < SIZE; i++) {
				inputData(customer[i], i);
			}
			cout << endl;
			break;

		case ENTER_SPECIFIC_DATA:
			cout << "Which customer would you like to enter data for?\n";
			for (int i = 0; i < SIZE; i++) {
				cout << "CUSTOMER " << i + 1 << endl;
			}
			cout << endl;
			cout << "ENTER CUSTOMER NUMBER: ";
			cin >> option2_choice;
			cin.ignore();
			option2_choice -= 1;
			cout << endl;

			inputData(customer[option2_choice], option2_choice);

			//cout << "Which data field would you like to change?\n";
			//element();
			//cout << endl;
			//cout << "ENTER DATA FIELD NUMBER: ";
			//cin >> data_field;
			//cout << endl;

			//cin.ignore(); //flushing out newline from buffer;
			//changeData(customer[option2_choice], data_field);
			//cout << endl;
			break;

		case DISPLAY_ALL_CUSTOMER_DATA:
			for (int i = 0; i < SIZE; i++) {

				if (checkIfAllEmpty(customer[i], i) == true) {
					cout << "CUSTOMER " << i + 1 << ": EMPTY" << endl;
				}
				else {

					showAllData(customer[i], i);

				}

				cout << endl;
			}

			cout << endl;
			break;

		case DISPLAY_SPECIFIC_DATA:
			cout << "ENTER CUSTOMER NUMBER: ";
			cin >> option4_choice;
			option4_choice -= 1;
			showSpecificData(customer[option4_choice], option4_choice);
			cout << endl;

			break;

		case FIND_CUSTOMER:
			found_match = false;
			cout << "ENTER CUSTOMER NAME (OR PARTIAL NAME): ";
			getline(cin, find_cust);

			for (int i = 0; i < SIZE; i++) {

				//p = compare1.c_str();
				
				//cout << strstr(compare1.c_str(), find_cust.c_str()) << endl;
				int found = customer[i].name.find(find_cust, 0);
				if ( found != string::npos) {
					showSpecificData(customer[i], i);
					cout << endl;
					found_match = true;
				}
				//char cstring1[30] = customer[i].name;
				//p = strstr(customer[i].name, find_cust) << endl;
				//cout << customer[i].name.find(find_cust, 0) << endl;
				//mystring.c_str(customer[i].name)
				//cout << strstr(customer[i].name.c_str(), find_cust.c_str());
				//cout << customer[i].name.find(find_cust, 0) << endl;

			}

			if (found_match == true) {
				cout << "FOUND MATCHES\n";
			}
			else {
				cout << "NO MATCHING NAME.\n";
			}
			break;

		case EXIT:
			break;

		default:
			cout << "ERROR: Please enter a valid option.\n";
			break;

		}

	} while (menu_choice != EXIT);






	return 0;
}
void inputData(Customer& customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: ";
	getline(cin, customer.name);
	cout << "Address: ";
	getline(cin, customer.address);
	cout << "City: ";
	getline(cin, customer.city);
	cout << "State: ";
	getline(cin, customer.state);
	cout << "Zipcode: ";
	cin >> customer.zip;
	cin.ignore(); //flushing out the newline out of the buffer
	cout << "Telephone Number: ";
	getline(cin, customer.telephone_number);

	cout << "Account Balance: $";
	cin >> customer.account_balance;

	while (customer.account_balance < 0) {

		cout << "ERROR: Enter a positive value.\n";
		cout << "Account Balance: $";
		cin >> customer.account_balance;

	};


	cout << "Last Payment Date (xx/xx/xxxx): ";
	cin.ignore(); // flushing out the newline out of the buffer
	getline(cin, customer.last_payment_date);
	cout << endl;
}

void changeData(Customer& customer, int data_field) {
	switch (data_field) {
	case NAME:
		cout << "Name: ";
		getline(cin, customer.name);
		break;
	case ADDRESS:
		cout << "Address: ";
		getline(cin, customer.address);
		break;
	case CITY:
		cout << "City: ";
		getline(cin, customer.city);
		break;
	case STATE:
		cout << "State: ";
		getline(cin, customer.state);
		break;
	case ZIP:
		cout << "Zipcode: ";
		cin >> customer.zip;
		break;
	case TELEPHONE_NUMBER:
		cout << "Telephone Number: ";
		getline(cin, customer.telephone_number);
		break;
	case ACCOUNT_BALANCE:
		do {
			cout << "Account Balance: $";
			cin >> customer.account_balance;
			if (customer.account_balance < 0) {
				cout << "ERROR: Enter a positive value.\n";
			}
		} while (customer.account_balance < 0);
		break;
	case LAST_PAYMENT:
		cout << "Last Payment Date (xx/xx/xxxx): ";
		getline(cin, customer.last_payment_date);
		break;
	default:
		cout << "ERROR: changeData funcition.\n";
		break;
	}
}


void menu() {
	cout << "------------------------------\n";
	cout << "            MENU              \n";
	cout << "------------------------------\n";

	cout << "1. Enter ALL Customer Data\n";
	cout << "2. Edit Data For A Specific Customer\n";
	cout << "3. Display ALL Customer Data\n";
	cout << "4. Display A Specific Customers Data\n";
	cout << "5. Find A Customer\n";
	cout << "6. EXIT\n";
	cout << "------------------------------\n";

}
void element() {
	cout << "DATA FIELDS\n";
	cout << "1. NAME\n";
	cout << "2. ADDRESS\n";
	cout << "3. CITY\n";
	cout << "4. STATE\n";
	cout << "5. ZIP\n";
	cout << "6. TELEPHONE NUMBER\n";
	cout << "7. ACCOUNT BALANCE.\n";
	cout << "8. LAST PAYMENT\n";
}

void showAllData(const Customer& customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: " << customer.name << endl;
	cout << "Address: " << customer.address << endl;
	cout << "City: " << customer.city << endl;
	cout << "State: " << customer.state << endl;
	cout << "Zipcode: " << customer.zip << endl;
	cout << "Telephone Number: " << customer.telephone_number << endl;
	cout << "Account Balance: $" << customer.account_balance << endl;
	cout << "Last Payment Date: " << customer.last_payment_date << endl;
}

bool checkIfAllEmpty(const Customer& customer, int cust_num) {
	bool is_empty = true;
	if (customer.name != "-1") {
		is_empty = false;
	}
	if (customer.address != "-1") {
		is_empty = false;

	}
	if (customer.city != "-1") {
		is_empty = false;

	}
	if (customer.state != "-1") {
		is_empty = false;

	}
	if (customer.zip != -1) {
		is_empty = false;

	}
	if (customer.telephone_number != "-1") {
		is_empty = false;

	}
	if (customer.account_balance != -1) {
		is_empty = false;

	}
	if (customer.last_payment_date != "-1") {
		is_empty = false;

	}

	return is_empty;
}

void initializeEmptyData(Customer& customer) {
	customer.name = "-1";
	customer.address = "-1";
	customer.city = "-1";
	customer.state = "-1";
	customer.zip = -1;
	customer.telephone_number = "-1";
	customer.account_balance = -1;
	customer.last_payment_date = "-1";
}

void showSpecificData(const Customer& customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: " << customer.name << endl;
	cout << "Address: " << customer.address << endl;
	cout << "City: " << customer.city << endl;
	cout << "State: " << customer.state << endl;
	cout << "Zipcode: " << customer.zip << endl;
	cout << "Telephone Number: " << customer.telephone_number << endl;
	cout << "Account Balance: $" << customer.account_balance << endl;
	cout << "Last Payment Date: " << customer.last_payment_date << endl;
}


//9. Speakers' Bureau


enum menu {ENTER_ALL = 1, ENTER_SPECIFIC, DISPLAY_ALL, EXIT };
struct Speaker{
	string name;
	string telephone_number;
	string speaking_topic;
	double fee;
};

void insertData(Speaker&, int);
void menu();
void displayData(Speaker&, int);
void initializeData(Speaker&);
bool checkIfEmpty(Speaker&, int);
int main() {

	const int SIZE = 10;
	Speaker speaker[SIZE];

	int menu_choice;
	int spec_speak;

	for (int i = 0; i < SIZE; i++) {
		initializeData(speaker[i]);
	}
	do {
		menu();
		cout << "\nENTER CHOICE: ";
		cin >> menu_choice;
		cin.ignore();


		switch (menu_choice) {
		case (ENTER_ALL):
			cout << "\nENTER DATA\n\n";
			for (int i = 0; i < SIZE; i++) {
				insertData(speaker[i], i);
				cout << endl;
			}
			cout << endl;
			break;
		case (ENTER_SPECIFIC):
			cout << "WHICH SPEAKER\n";
			for (int i = 0; i < SIZE; i++) {
				cout << "SPEAKER " << i + 1 << endl;
			}
			cout << "ENTER CHOICE: " << endl;
			cin >> spec_speak;
			spec_speak -= 1;
			cin.ignore();
			insertData(speaker[spec_speak], spec_speak);
			cout << endl;
			break;
		case (DISPLAY_ALL):

			for (int i = 0; i < SIZE; i++) {
				if (checkIfEmpty(speaker[i], i) == true) {
					cout << "Speaker " << i + 1 << ": EMPTY" << endl;

				}
				else {
					displayData(speaker[i], i);
				}
			}
			cout << endl;
			break;
		case (EXIT):
			cout << "Thank you" << endl;
			break;
		default:
			break;
		}
	} while (menu_choice != EXIT);
	for (int i = 0; i < SIZE; i++) {

	}

	

	return 0;
}

void insertData(Speaker &speaker, int speaker_num) {
	cout << "Speaker " << speaker_num + 1 << endl;
	cout << "Name: ";
	getline(cin, speaker.name);
	cout << "Telephone Number: ";
	getline(cin, speaker.telephone_number);
	cout << "Speaking Topic: ";
	getline(cin, speaker.speaking_topic);
	do {
		cout << "Fee Required: $";
		cin >> speaker.fee;
		if (speaker.fee < 0) {
			cout << "ERROR: Please enter a positive value.\n";
		}
	} while (speaker.fee < 0);
	cin.ignore();

}

void menu() {
	cout << "-------MENU-------" << endl;
	cout << "1. ENTER ALL DATA" << endl;
	cout << "2. ENTER SPECIFIC DATA" << endl;
	cout << "3. DISPLAY ALL DATA" << endl;
	cout << "4. EXIT" << endl;
}

void displayData(Speaker& speaker, int speak_num) {
	cout << endl;
	cout << "SPEAKER " << speak_num + 1 << endl;
	cout << "Speaker: " << speaker.name << endl;
	cout << "Telephone Number: " << speaker.telephone_number << endl;
	cout << "Speaking Topic: " << speaker.speaking_topic << endl;
	cout << showpoint << setprecision(2) << fixed;
	cout << "Fee Required: $" << speaker.fee << endl;
	cout << endl;
}

void initializeData(Speaker& speaker) {
	speaker.name = "-1";
	speaker.telephone_number = "-1";
	speaker.speaking_topic = "-1";
	speaker.fee = -1;
}

bool checkIfEmpty(Speaker& speaker, int speaker_num) {
	bool is_empty = true;
	if (speaker.name != "-1") {
		is_empty = false;
	}
	if (speaker.speaking_topic != "-1") {
		is_empty = false;

	}
	if (speaker.telephone_number != "-1") {
		is_empty = false;

	}
	if (speaker.fee != -1) {
		is_empty = false;
	}
	return is_empty;
}


// 10. Search Function for the Speaker' Bureau Program

enum menu { ENTER_ALL = 1, ENTER_SPECIFIC, DISPLAY_ALL, TOPIC_SEARCH ,EXIT };
struct Speaker {
	string name;
	string telephone_number;
	string speaking_topic;
	double fee;
};

void insertData(Speaker&, int);
void menu();
void displayData(Speaker&, int);
void initializeData(Speaker&);
bool checkIfEmpty(Speaker&, int);

int main() {

	const int SIZE = 10;
	Speaker speaker[SIZE];

	int menu_choice;
	int spec_speak;
	double found_match;

	string find_topic;

	for (int i = 0; i < SIZE; i++) {
		initializeData(speaker[i]);
	}
	do {
		menu();
		cout << "\nENTER CHOICE: ";
		cin >> menu_choice;
		cin.ignore();


		switch (menu_choice) {
		case (ENTER_ALL):
			cout << "\nENTER DATA\n\n";
			for (int i = 0; i < SIZE; i++) {
				insertData(speaker[i], i);
				cout << endl;
			}
			cout << endl;
			break;
		case (ENTER_SPECIFIC):
			cout << "WHICH SPEAKER\n";
			for (int i = 0; i < SIZE; i++) {
				cout << "SPEAKER " << i + 1 << endl;
			}
			cout << "ENTER CHOICE: " << endl;
			cin >> spec_speak;
			spec_speak -= 1;
			cin.ignore();
			insertData(speaker[spec_speak], spec_speak);
			cout << endl;
			break;
		case (DISPLAY_ALL):

			for (int i = 0; i < SIZE; i++) {
				if (checkIfEmpty(speaker[i], i) == true) {
					cout << "Speaker " << i + 1 << ": EMPTY" << endl;

				}
				else {
					displayData(speaker[i], i);
				}
			}
			cout << endl;
			break;
		case (TOPIC_SEARCH):

			found_match = false;
			cout << "ENTER TOPIC TO SEARCH: ";
			getline(cin, find_topic);

			for (int i = 0; i < SIZE; i++) {

				int found = speaker[i].speaking_topic.find(find_topic, 0);

				if (found != string::npos) {

					displayData(speaker[i], i);
					cout << endl;
					found_match = true;
				}
			}
			if (found_match == true) {
				cout << "MATCH FOUND\n";
			}
			else {
				cout << "NO MATCH FOUND\n";
			}
			cout << endl;
			break;
		case (EXIT):
			cout << "Thank you" << endl;
			break;
		default:
			break;
		}
	} while (menu_choice != EXIT);




	return 0;
}

void insertData(Speaker& speaker, int speaker_num) {
	cout << "Speaker " << speaker_num + 1 << endl;
	cout << "Name: ";
	getline(cin, speaker.name);
	cout << "Telephone Number: ";
	getline(cin, speaker.telephone_number);
	cout << "Speaking Topic: ";
	getline(cin, speaker.speaking_topic);
	do {
		cout << "Fee Required: $";
		cin >> speaker.fee;
		if (speaker.fee < 0) {
			cout << "ERROR: Please enter a positive value.\n";
		}
	} while (speaker.fee < 0);
	cin.ignore();

}

void menu() {
	cout << "-------MENU-------" << endl;
	cout << "1. ENTER ALL DATA" << endl;
	cout << "2. ENTER SPECIFIC DATA" << endl;
	cout << "3. DISPLAY ALL DATA" << endl;
	cout << "4. FIND SPEAKER BY TOPIC" << endl;
	cout << "5. EXIT" << endl;

}

void displayData(Speaker& speaker, int speak_num) {
	cout << endl;
	cout << "SPEAKER " << speak_num + 1 << endl;
	cout << "Speaker: " << speaker.name << endl;
	cout << "Telephone Number: " << speaker.telephone_number << endl;
	cout << "Speaking Topic: " << speaker.speaking_topic << endl;
	cout << showpoint << setprecision(2) << fixed;
	cout << "Fee Required: $" << speaker.fee << endl;
	cout << endl;
}

void initializeData(Speaker& speaker) {
	speaker.name = "-1";
	speaker.telephone_number = "-1";
	speaker.speaking_topic = "-1";
	speaker.fee = -1;
}

bool checkIfEmpty(Speaker& speaker, int speaker_num) {
	bool is_empty = true;
	if (speaker.name != "-1") {
		is_empty = false;
	}
	if (speaker.speaking_topic != "-1") {
		is_empty = false;

	}
	if (speaker.telephone_number != "-1") {
		is_empty = false;

	}
	if (speaker.fee != -1) {
		is_empty = false;
	}
	return is_empty;
}
*/

// 11. Monthly Budget
/*
struct MonthlyBudget {
	double housing;
	double utilities;
	double household_expenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double miscellaneous;
};

void initializeSetBudget(MonthlyBudget&);
void insertData(MonthlyBudget&);
void compareBudgetAndExpenses(const MonthlyBudget&, MonthlyBudget&);


int main() {
	const int SIZE = 2;
	MonthlyBudget monthly[SIZE];
	initializeSetBudget(monthly[0]);

	cout << "ENTER YOUR EXPENSE FOR THE MONTH\n\n";
	insertData(monthly[1]);

	compareBudgetAndExpenses(monthly[0], monthly[1]);

	return 0;
}

void initializeSetBudget(MonthlyBudget& monthly) {
	monthly.housing = 500.00;
	monthly.utilities = 150.00;
	monthly.household_expenses = 65.00;
	monthly.transportation = 50.00;
	monthly.food = 250.00;
	monthly.medical = 30.00;
	monthly.insurance = 100.00;
	monthly.entertainment = 150.00;
	monthly.clothing = 75.00;
	monthly.miscellaneous = 50.00;
}

void insertData(MonthlyBudget& monthly) {
	cout << "Rent/Mortgage Expenses: $";
	cin >> monthly.housing;
	cout << "Utitilities Expenses: $";
	cin >> monthly.utilities;
	cout << "Household Expensess: $";
	cin >> monthly.household_expenses;
	cout << "Transportation Expenses: $";
	cin >> monthly.transportation;
	cout << "Food Expenses: $";
	cin >> monthly.food;
	cout << "Medical Expenses: $";
	cin >> monthly.medical;
	cout << "Insurance Expenses: $";
	cin >> monthly.insurance;
	cout << "Entertainment Expenses: $";
	cin >> monthly.entertainment;
	cout << "Clothing Expenses: $";
	cin >> monthly.clothing;
	cout << "Miscellaneous Expenses: $";
	cin >> monthly.miscellaneous;
}

void compareBudgetAndExpenses(const MonthlyBudget& budget, MonthlyBudget& expenses) {
	cout << endl;
	cout << "------BUDGET REPORT------" << endl;
	if (budget.housing < expenses.housing) {
		cout << "Rent/Mortage Expenses OVER BUDGET BY: $" << budget.housing - expenses.housing;
	}
	else if (budget.housing >= expenses.housing) {
		cout << "Rent/Mortage Expenses ON BUDGET (REMAINING): $" << budget.housing - expenses.housing;

	}

	cout << endl;

	if (budget.utilities < expenses.utilities) {
		cout << "Utilities Expenses OVER BUDGET BY: $" << budget.utilities - expenses.utilities;

	}
	else if (budget.utilities >= expenses.utilities) {
		cout << "Utilities Expenses ON BUDGET (REMAINING): $" << budget.utilities - expenses.utilities;

	}

	cout << endl;


	if (budget.household_expenses < expenses.household_expenses) {
		cout << "Houshold Expenses Expenses OVER BUDGET BY: $" << budget.household_expenses - expenses.household_expenses;
	}
	else if (budget.household_expenses >= expenses.household_expenses) {
		cout << "Houshold Expenses ON BUDGET (REMAINING): $" << budget.household_expenses - expenses.household_expenses;
	}

	cout << endl;

	if (budget.transportation < expenses.transportation) {
		cout << "Transportation Expenses OVER BUDGET BY: $" << budget.transportation - expenses.transportation;
	}
	else if (budget.transportation >= expenses.transportation) {
		cout << "Transportation Expenses ON BUDGET (REMAINING): $" << budget.transportation - expenses.transportation;
	}

	cout << endl;

	if (budget.food < expenses.food) {
		cout << "Food Expenses OVER BUDGET BY: $" << budget.food - expenses.food;
	}
	else if (budget.food >= expenses.food) {
		cout << "Food Expenses ON BUDGET (REMAINING): $" << budget.food - expenses.food;
	}

	cout << endl;

	if (budget.medical < expenses.medical) {
		cout << "Medical Expenses OVER BUDGET BY: $" << budget.medical - expenses.medical;
	}
	else if (budget.medical >= expenses.medical) {
		cout << "Medical Expenses ON BUDGET (REMAINING): $" << budget.medical - expenses.medical;
	}

	cout << endl;

	if (budget.insurance < expenses.insurance) {
		cout << "Insurance Expenses OVER BUDGET BY: $" << budget.insurance - expenses.insurance;
	}
	else if (budget.insurance >= expenses.insurance) {
		cout << "Insurance Expenses ON BUDGET (REMAINING): $" << budget.insurance - expenses.insurance;
	}

	cout << endl;

	if (budget.entertainment < expenses.entertainment) {
		cout << "Entertainment Expenses OVER BUDGET BY: $" << budget.entertainment - expenses.entertainment;
	}
	else if (budget.entertainment >= expenses.entertainment) {
		cout << "Entertainment Expenses ON BUDGET (REMAINING): $" << budget.entertainment - expenses.entertainment;
	}

	cout << endl;

	if (budget.clothing < expenses.clothing) {
		cout << "Clothing Expenses OVER BUDGET BY: $" << budget.clothing - expenses.clothing;
	}
	else if (budget.clothing >= expenses.clothing) {
		cout << "Clothing Expenses ON BUDGET (REMAINING): $" << budget.clothing - expenses.clothing;
	}

	cout << endl;

	if (budget.miscellaneous < expenses.miscellaneous) {
		cout << "Miscellaneous Expenses OVER BUDGET BY: $" << budget.miscellaneous - expenses.miscellaneous;
	}
	else if (budget.miscellaneous >= expenses.miscellaneous) {
		cout << "Miscellaneous Expenses ON BUDGET (REMAINING): $" << budget.miscellaneous - expenses.miscellaneous;
	}

	cout << endl;
}
*/

/*
// 12. Course Grade
struct Student {

	string stu_name;
	int stu_id;
	//double** ptr_testscores;
	double* ptr_testscores;
	double average;
	char course_grade;

};

void inputData(Student*, int, int, int);
void outPutData(Student&, int, int);

int main() {
	
	Student* student = nullptr;
	int student_num, test_num;
	cout << "How many students: ";
	cin >> student_num;

	int* int_ptr = nullptr;
	int_ptr = new int[45];
	int_ptr[0] = 0;

	student = new Student[student_num]; // Dynamically allocates 'student_num' Structures
	
	cout << "How many tests: ";
	cin >> test_num;
	

	

	for (int i = 0; i < student_num; i++) {
		cin.ignore();
		cout << endl;
		inputData(&student[i], student_num, test_num, i); //Passes the address of the dynamically allocated structure
		cout << endl;
	}

	for (int i = 0; i < student_num; i++) {
		cout << endl;
		outPutData(student[i], test_num, i);
		cout << endl;
	}

	return 0;
}

void inputData(Student* student, int student_num, int test_num, int stu_num) {
	double total_test_points = 0;
	
	double* dyn_test_scores = new double[test_num]; //dynamic array of size [test_num]

	student->ptr_testscores = dyn_test_scores;
	cout << "Student ["<< stu_num + 1  << "] Name: ";
	getline(cin, student->stu_name);
	cout << "Student ID: ";
	cin >> student->stu_id;
	cin.ignore();
	cout << endl;

	//student->ptr_testscores = new double* [test_num];
	cout << "---ENTER STUDENT TEST SCORES---" << endl;

	for (int i = 0; i < test_num; i++) {
		
		do {
			cout << "TEST GRADE " << i + 1 << ": ";
			cin >> student->ptr_testscores[i];


			if (student->ptr_testscores[i] < 0 || student->ptr_testscores[i] > 100) {
				cout << "ERROR: Please enter a valid grade (0-100).\n";
			}
			else {
				total_test_points += student->ptr_testscores[i];
			}

		} while (student->ptr_testscores[i] < 0 || student->ptr_testscores[i] > 100);
	}
		delete[] student->ptr_testscores;


	student->average = total_test_points / test_num;

	if (student->average >= 91) {
		student->course_grade = 'A';
	}
	else if (student->average >= 81) {
		student->course_grade = 'B';
	}
	else if (student->average >= 71) {
		student->course_grade = 'C';
	}
	else if (student->average >= 61) {
		student->course_grade = 'D';
	}
	else {
		student->course_grade = 'F';
	}

}
void outPutData(Student& student, int test_num, int stu_num) {
	cout << "-----STUDENT INFO-----" << endl;
	cout << "Student Name: " << student.stu_name << endl;
	cout << "Student ID: " << student.stu_id << endl;
	cout << showpoint << setprecision(2) << fixed << endl;
	cout << "Average Test Score: " << student.average << endl;
	cout << "Course Grade: " << student.course_grade << endl;
}
*/

/*
// 13. Drink Machine Simulator

struct DMachine {
	string drink_n;
	double drink_c;
	int num_drinks;
};
enum Machine { EXIT, OPERATING};

void DisplayMenu();
bool ValidInput(int);
bool ValidInput(double);

int main() {
	const int SIZE = 5;
	Machine machine_state;
	float user_money;
	int user_choice;
	float return_amount;
	float total_revenue = 0;

	machine_state = OPERATING;
	DMachine softdrinks[SIZE] = { 

	{ "Cola", .75, 20 } ,
	{ "Root Beer", .75, 20 } ,
	{ "Lemon-Lime", .75, 20 } ,
	{ "Grape Soda", .80, 20 } ,
	{ "Cream Soda", .80, 20 }

	};

	cout << showpoint << fixed << setprecision(2);

	do {

		DisplayMenu();

		do {
			cout << "ENTER OPTION: ";
			cin >> user_choice;

		} while (!ValidInput(user_choice));
		
		

		cout << endl;

		if (user_choice == 6) {
			machine_state = EXIT;

		}
		else if (softdrinks[user_choice].num_drinks == 0) {
			cout << "OUT OF DRINK CHOICE. CHOOSE ANOTHER PLEASE.\n";
		}
		else {

			do {
				cout << "Please enter coins (MAX $1.00): $";
				cin >> user_money;
			} while (!ValidInput(user_money));

			cout << endl;


			switch (user_choice) {
			case 1:
				return_amount = user_money - softdrinks[user_choice].drink_c ;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 2:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 3:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 4:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 5:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
			}
		}
		cout << endl;
	} while (machine_state != EXIT);

	if (total_revenue > 0) {
		cout << "Total Revenue: $" << total_revenue << endl;
		cout << "GOOD BYE.\n";
	}
	else {
		cout << "GOOD BYE.\n";
	}




	return 0;
}

void DisplayMenu() {
	cout << "----DRINK MACHINE MENU----" << endl;
	cout << "1. COLA" << endl;
	cout << "2. ROOT BEER" << endl;
	cout << "3. LEMON-LIME" << endl;
	cout << "4. GRAPE SODA" << endl;
	cout << "5. CREAM SODA" << endl;
	cout << "6. EXIT" << endl;
	cout << endl;
}

bool ValidInput(double user_money) {
	if (user_money < 0 || user_money > 1) {
		cout << "ERROR: Please enter a valid choice.\n";
		return false;
	}
	else {
		return true;
	}
}
bool ValidInput(int user_choice) {

	if (user_choice < 1 || user_choice > 6) {
		cout << "ERROR: Please enter a valid choice.\n";
		return false;
	}
	else {
		return true;
	}
}
*/

// 14. Inventory Bins

int main() {

	return 0;
}



