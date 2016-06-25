#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//load config file
	string cfgpath = 
		string(getenv("HOME")) + 
		"/.config/i3sleep/config";
	ifstream opts(cfgpath.c_str());
	//get config
	string stropts = "";
	if(opts) //only if config file opened
	{
		getline(opts, stropts);
	}
	//run command
	string cmd = 
		"i3lock " + 
		stropts +
		" && systemctl suspend";
//	cout << cmd << endl;
	system(cmd.c_str());
	return 0;
}
