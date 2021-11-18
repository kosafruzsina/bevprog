#include "std_lib_facilities.h"

struct Point 
{
	int x;
	int y;
};

void Print(string vectorN, vector<Point> vector)
{
	cout << vectorN << "vector elements: " << endl;
	for(const auto& points:vector)
	{
		cout << "(" << points.x << "," << points.y << ")"<< endl;
	}
}

int main()
{

try
{
	cout << "Type in 7 (x,y) values" << endl;

	char fbracket, lbracket, comma;
	int xcoord, ycoord;

	vector<Point> original_points ;	
// error

	while(original_points.size() != 7)
	{
		cin >> fbracket >> xcoord >> comma >> ycoord >> lbracket;
		if (fbracket != '(')
		{ 
		 	error(" '(' is required! ") ; 
		}
		if (!int(xcoord))
		{
		 	error("An integer is required!");
		}
		if (comma != ',')
		{
		 	error(" ',' is required!");
		}
		if (!int(ycoord))
		{
			error("An integer is required!");
		}
		if (lbracket != ')')
		{
			error(" '(' is required!");
		}
// storing x,y

		Point p;
		if (fbracket == '(' && int(xcoord) && comma == ',' && int(ycoord) && lbracket==')')
		{
			p.x = xcoord;
			p.y = ycoord;
			original_points.push_back(p);
		}
	}

	
	
// printing original_points

	Print("original_points", original_points);
	
// output

	string outputname = "mydata.txt";
	ofstream ofile {outputname};

	if(!ofile) 
	{
		error("Can't open ofile ", outputname);
	}

	for(const auto& points:original_points)
	{ 
		ofile << "(" << points.x << "," << points.y <<")";
	}
	ofile.close();

// new vector

	string inputname = outputname;
	ifstream ifile {inputname};
	if(!ifile) 
	{
		error("Can't open ifile ", inputname);
	}
	vector<Point> processed_points;

	Point p;
	while(ifile >> fbracket >> xcoord >> comma >> ycoord >> lbracket )
	{
		p.x = xcoord;
		p.y = ycoord;
		processed_points.push_back(p);
	}
	ifile.close();
	
// printing from both vectors
	cout << "Both vector elements: " << endl;

	Print("original_points ", original_points);
	Print("processed_points ", processed_points);

// comparing
	if(original_points.size() != processed_points.size())
	{
		cout << "Original vector size is not equal with processed vector size!" << endl;
	}


	return 0;
}

catch(exception& e)
{
	cerr << e.what()<< endl;
	return 1;
}
}