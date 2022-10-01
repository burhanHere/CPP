#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//structures definitions
struct salesMenData {
	string ID;
	double salesQ[4] = { 0,0,0,0 };
	double totSaleOfThisID = 0;
};
struct salesMenSaleQTots {
	double totSaleQ[4] = { 0,0,0,0 };
};
//functions prototypes
int employeeCount(void);
void display(salesMenData*& data, salesMenSaleQTots& TSQ, int numberOfemployees);
void readData(salesMenData*& data, int numberOfemployees);
int ValidatingID(salesMenData*& data, int numberOfemployees, string tempID);
void totQ(salesMenData*& data, salesMenSaleQTots& TSQ, int numberOfemployees, int index);
void totSaleOfIDs(salesMenData*& data, int numberOfemployees);
//main function
int main() {
	int numberOfemployees = employeeCount();
	salesMenData* data = new salesMenData[numberOfemployees];
	salesMenSaleQTots TSQ;
	readData(data, numberOfemployees);
	for (int i = 0; i < 4; i++)
	{
		totQ(data, TSQ, numberOfemployees, i);
	}
	totSaleOfIDs(data, numberOfemployees);
	system("CLS");
	display(data, TSQ, numberOfemployees);
	delete[] data;
	return 0;
}
//function definitions
int employeeCount(void) {
	int numberOfemployees = 0;
	string temp;
	fstream read;
	string fileN_P = "salesMenIDs.txt";
	read.open(fileN_P, ios::in);
	if (read.is_open()) {
		cout << "Data File opened successfully..." << endl;
		while (!read.eof()) {
			cout << '.' << endl;
			if (getline(read, temp)) {
				numberOfemployees++;
			}
		}
	}
	else {
		cout << "Error opening data file!!!" << endl;
	}
	read.close();
	cout << "Number of employees: " << numberOfemployees << endl;
	return numberOfemployees;
}
void display(salesMenData*& data, salesMenSaleQTots& TSQ, int numberOfemployees) {
	cout << "------------ Annual Sales Report ------------" << endl;
	cout << "ID\t\tQT1\t\tQT2\t\tQT3\t\tQT4\t\tTotal" << endl;
	for (int i = 0; i < numberOfemployees; i++)
	{
		cout << data[i].ID << "\t\t" << data[i].salesQ[0] << "\t\t" << data[i].salesQ[1] << "\t\t" << data[i].salesQ[2] << "\t\t" << data[i].salesQ[3] << "\t\t" << data[i].totSaleOfThisID << endl;
	}
	cout << "Quarterly Total\t" << TSQ.totSaleQ[0] << "\t\t" << TSQ.totSaleQ[1] << "\t\t" << TSQ.totSaleQ[2] << "\t\t" << TSQ.totSaleQ[3] << endl;
}
void readData(salesMenData*& data, int numberOfemployees) {
	fstream read;
	string fileN_P = "salesMenIDs.txt";
	read.open(fileN_P, ios::in);
	if (read.is_open()) {
		cout << "Data File 1 opened successfully..." << endl << "Getting IDs..." << endl;
		for (int i = 0; i < numberOfemployees; i++) {
			read >> data[i].ID;
		}
		read.close();
		fileN_P = "salesData.txt";
		read.open(fileN_P, ios::in);
		if (read.is_open()) {
			cout << "Data File 2 opened successfully..." << endl << "Getting data of each ID..." << endl;
			int mounth = 0;
			string tempID;
			double tempSale = 0;
			//reading data
			for (int i = 0; !read.eof(); i++) {
				read >> tempID >> mounth >> tempSale;
				int indexOfID = ValidatingID(data, numberOfemployees, tempID);
				system("CLS");
				cout << indexOfID << endl;
				if (indexOfID > -1)
				{
					if (mounth == 1 || mounth == 2 || mounth == 3)
					{
						data[indexOfID].salesQ[0] = data[indexOfID].salesQ[0] + tempSale;
					}
					else if (mounth == 4 || mounth == 5 || mounth == 6)
					{
						data[indexOfID].salesQ[1] = data[indexOfID].salesQ[1] + tempSale;
					}
					else if (mounth == 7 || mounth == 8 || mounth == 9)
					{
						data[indexOfID].salesQ[2] = data[indexOfID].salesQ[2] + tempSale;
					}
					else if (mounth == 10 || mounth == 11 || mounth == 12)
					{
						data[indexOfID].salesQ[3] = data[indexOfID].salesQ[3] + tempSale;
					}
				}
			}
			read.close();
		}
		else {
			cout << "Error opening data file 2!!!" << endl;
		}
	}
	else {
		cout << "Error opening data file 1!!!" << endl;
	}
}
int ValidatingID(salesMenData*& data, int numberOfemployees, string tempID) {
	bool found = false;
	for (int i = 0; i < numberOfemployees; i++)
	{
		if (tempID == data[i].ID)
		{
			found = true;
			cout << "ID validated..." << endl << "redeeming data of this ID: " << tempID << endl;
			cout << "Processing..." << endl;
			return i;
		}
	}
	if (!found) {
		cout << "ID not validated..." << endl << "ID: " << tempID << endl << "Working on next ID.." << endl;
		cout << "Processing..." << endl;
	}
	return -1;
}
void totQ(salesMenData*& data, salesMenSaleQTots& TSQ, int numberOfemployees, int index) {
	//Calculate total sale of each quarter
	for (size_t i = 0; i < numberOfemployees; i++)
	{
		TSQ.totSaleQ[index] = TSQ.totSaleQ[index] + data[i].salesQ[index];
	}
}
void totSaleOfIDs(salesMenData*& data, int numberOfemployees) {
	//calculate total sale of each ID
	for (int i = 0; i < numberOfemployees; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			data[i].totSaleOfThisID = data[i].totSaleOfThisID + data[i].salesQ[j];
		}
	}
}