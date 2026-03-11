#include <gpiod.h>
#include <iostream>
#include <unistd.h>
#include "SignalTransformation/SignalTransformation.h"
#include "SignalTransformation/ReadDataFromPi.h"
#include "SignalTransformation/FileReadWrite.h"
using namespace std;

int DiscreteFourierTransform(string Dataset, string Outputfile);
//int ReadDataFromPi(string filename);
string filename; 
string Outputfile;
int main(){
    cout << "Inputfilename: " ;
    cin >> filename;
    cout << endl << "Outputfilename: ";
    cin >> Outputfile;
    while (true){
        ReadDataFromPi(filename);
        DiscreteFourierTransform(filename, Outputfile);
        //PlotData();
        
    }
    return 0;

}
