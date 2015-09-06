#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>

using namespace std;

/*
 * Function Name: 	Fibonacci
 * Description:		Calculates a fibonacci number using the golden-mean method
 */
int Fibonacci(int term)
{
	int termValue = 0;
	double Phi;
	double phi;
	
	Phi = (1 + sqrt(5))/2;
	phi = (1-sqrt(5))/2;
	
	termValue = (pow(Phi,term) - pow(phi,term))/sqrt(5);
	
	return termValue;
}

int main(int argc, char *argv[])
{
	ifstream inputFile(argv[1]);
	
	string inputString;
	
	int term = 0;
	int val = 0;
	
	if(inputFile.is_open() == false)
	{
		cout << "Error with input file" << endl;
	}
	else
	{
		while(getline(inputFile,inputString))
		{
			term = atoi(inputString.c_str());

			val = Fibonacci(term);
			
			cout << val << endl;
		}
	}

	return 0;
}