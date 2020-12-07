#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
#include <string>
using std::getline;
using std::string;
#include <iomanip>

class MyVector {
public:
	double length() { return sqrt(x * x + y * y + z * z); }

private:
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
};

int main() {
	MyVector pn;
	string fname = "vector.txt";
	string vector;
	string lname = "length.txt";
	string length;
	double x, y, z, v;

	// writes vector.txt file and stores info in the string vector
	ofstream fout(fname);
	if (!fout) { cout << "Error in wrtiting file"; exit(1); }
	if (fout) {
		for (size_t i = 0; i < 100; i++) {
			if (i % 3 == 0) {
				fout << endl;
			}
			fout << std::setw(3) << i;
		}
		cout << endl << "Successful run" << endl;
	}

	// reads from the string vector
	ifstream fin(fname);
	if (!fin) {
		cout << "Error opening vector.txt" << endl;
		exit(2);
	}
	while (getline(fin, vector)) {
		cout << vector << endl;
	}
	
	// writes length.txt file and stores the info in the string length
	ofstream ffout(lname);
	double fine = 99;
	getline(fin, vector);
	for (int i = 0; i < fine; i++) {
		if (!ffout) { cout << "Error openeing"; exit(3); }
		fin >> x >> y >> z;
		v = pn.length();
		ffout << v << endl;
	}
	
	// reads from the string length
	ifstream ffin(lname);
	if (!ffin) { cout << "Error opening length.txt"; exit(4); }
	cout << endl << "Length of 3D vectors:" << endl;
	while (getline(ffin, length)) {
		cout << length << endl;
	}
}