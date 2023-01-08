#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string file1, file2;
	int count1 =0, count2 =0;
	cout<<"Enter the name of the first file:";
	cin>>file1;
	cout<<"Enter the name of second file:";
	cin>>file2;
	ifstream input1(file1);
	ifstream input2(file2);
	if(!input1||!input2){
		cout<<"Error opening one of the files!"<<endl;
		return 1;
	}
	string word1, word2;
	if(word1==word2){
		count1++;
		count2++;
	}
	else{
		count1++;
		count2++;
	}
	cout<<"Total number of words in file1:"<<cont1<<endl;
	cout<<"Total number of words in file2:"<<count2<<endl;
}

