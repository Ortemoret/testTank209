#include "Fileworker.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;



Fileworker::Filename(){
    strcpy(m_filename, "temp.txt");
    strcpy(m_data)
}

void Fileworker::setFilename()
{
    cout<<" enter File name "<<endl;
    cin>>m_filename;
    cin.get();
}
void Fileworker::setData()
{
    cout<<" enter TEXT "<<endl;
    cin.getline(m_data,Len);   //оператор доступу
}
//FAT-file alocation table
//NTFS-New table file system
void Fileworker::write()
{
   FILE * f = fopen(m_filename,"wt");
   int realLen = strlen(m_data);
   fwrite(m_data,sizeof(char),Len,f);
   fclose(f);


void Fileworker::readFromFile()
   FILE * f = fopen(m_filename,"rt");
strcpy(m_data,"");
memset(m_data, '\0', Len);
fread(m_data,sizeof(char),Len,f);
fclose(f);
cout<< "DATA from file  \n";
cout<< m_data <<endl;

//for(int i=0; m_data[i] !='\0' ; ++i ){
//   cout << m_data[i];
//}

}
