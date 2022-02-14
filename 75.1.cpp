#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

class file
{
        ifstream inFile;
		       	
        public:
                file();
                ~file();
                void loop(); 
                void word();
};


file::file()
{
        inFile.open("tekst.txt"); 
        if (!inFile.good())
        {
                cerr << "Blad - pliku nie da sie otworzyc!\n";
                exit(1);
        }
}

file::~file()
{
        inFile.close();
}


void file::loop()
{


		
        string data; 
        while (!inFile.eof()) 
        {
            inFile >> data;
            //cout << data <<" ";
            //75.1
            if(data[0] == 'd' && data[data.length()-1] == 'd'){
            	cout << data << endl;
            	cout << endl;
			}
        }
        //75.2
        int a = 0;
        int b = 1;
        int x = 5;
		int y = 2;
	//	if(data.length() >= 10){
		for(int i=0; i<data.length(); i++){
 			int c = data[i] - a;
			c = c*x + y;
			c %= 26;
			data[i] = c + a;
			cout << data << endl;
		}
}



int main()
{
        file f;
        f.loop();
        return 0;
}
