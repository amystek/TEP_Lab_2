#ifndef LAB_2_CTABLE_H
#define LAB_2_CTABLE_H

#include <iostream>
#include <string>

using namespace std;

class CTable
{
public:
    CTable();
    CTable(string sName, int iTableLen);
    CTable (CTable &pcOther);
    ~CTable();
    void vSetName(string sName);
    bool bSetNewSize(int iTableLen);
    CTable *pcClone();
    int i_getTableSize();

private:
    string s_name;
    int i_tab_length;
    int* pi_table;
}; //class CTable


#endif //LAB_2_CTABLE_H
