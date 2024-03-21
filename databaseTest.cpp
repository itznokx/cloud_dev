#include <iostream>
#include <pqxx/pqxx>
#include <string>
using namespace std;

int main (void){
	try{
		pqxx::connection C("user=rootgres password=dimitri191002 host=defaultdatabase1.crm8g62qilja.sa-east-1.rds.amazonaws.com dbname=postgres target_session_attrs=read-write");
		if (C.is_open()){
			cout << "Database opened with sucess!" << endl;
		}else {
			cout << "Can not open database" << endl;
		}

	}
	catch (const exception &e){
		cerr << e.what() << "\n";
		return 0;
	}
	return 1;
}
