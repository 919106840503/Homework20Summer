//�����ļ����� �����������е���

#include <iostream>
#include <fstream>
using namespace std;
 
int main(int argc,char *argv[]){
	if(argc<3)
	return 0;
	fstream infile,outfile;
	infile.open(argv[1],ios::in|ios::binary);
	outfile.open(argv[2],ios::out|ios::binary);
	if(!argv[1]){
		cout<<"���ܴ������ļ���"<<argv[1]<<'\n'; 
		return 0;
	}
	if(!argv[2]){
		cout<<"���ܴ�Ŀ���ļ���"<<argv[2]<<'\n'; 
		return 0;
	}
	char buff[4096];
	int n;
	while(!infile.eof()){
		infile.read(buff,4096);
		n=infile.gcount();
		outfile.write(buff,n);
	} 
	infile.close();
	outfile.close();
	return 0;
}
