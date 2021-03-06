/* IV.cpp generates a 64 bit random number from the /dev/random */
/* Use Cygwin or any Linux Distro in order to use /dev/random */

#include <iostream>
#include <climits>
#include <unistd.h> //Cygwin Header
#include <fcntl.h> // Cygwin Header
using namespace std;

unsigned long long InitialVec()
{
    int myFile = open("/dev/random", O_RDONLY);
    unsigned long long rand;
    unsigned long long randomNum = read(myFile, &rand, sizeof(rand)) ;
    //printf("%d", sizeof(rand)); //Shows 8 bytes for size of number
    //cout<<rand<<endl;
    close(myFile);
    return rand;
}

int main(){
   	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
   	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
   	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
	cout<<hex<<InitialVec()<<" "<<hex<<InitialVec()<<endl;
	return 0;
}