#include <iostream>
#include <string>
using namespace std;

class Movie{
	// Data Members / attributes
	private:
		string name;
		int  year;
		string genre;
	
	public:
		//Default Constructor
		Movie(){
			name = "";
			year = -1;
			genre = "";
			}
		// Parameterized Consturctor
		Movie(string s, int y, string g) {
			name = s;
			year = y;
			genre = g;
		}
		
		// getters and setter 
		
		void setTitle(string s) {
			name = s;
		}

		string getTitle() {
			return name;
		}

		void setYear(int y) {
			year = y;
		}

		int getYear() {
			return year;
		}

		string getGenre() {
			return genre;
		}

		void setGenre(string s) {
			genre = s;
		}
		
		void printDetails(){
			cout<< "Title is :" <<name <<endl;
			cout<< "Year is :" <<year <<endl;
			cout<< "Genre is :" <<genre <<endl;
		}
	};

	int main(){
		Movie movie("The Lion King" , 1994 , "Adventure");
		movie.printDetails();
		cout<<"_____" <<endl;

		movie.setTitle("Forrest Gump");
		cout<<"New Title :  " << movie.getTitle() <<endl;
}	
