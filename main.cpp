#include "main.h"

int main()
{
//    v_lista2();
    v_lista3();

    return 0;
} //int main()

void v_mod_tab(CTable *pcTab, int iNewSize)
{
    pcTab->bSetNewSize(iNewSize);
} //void v_mod_tab(CTable *pcTab, int iNewSize)

void v_mod_tab(CTable cTab, int iNewSize)
{
    cTab.bSetNewSize(iNewSize);
} //void v_mod_tab(CTable cTab, int iNewSize)

void v_lista2()
{
    CTable *pc_tab1, *pc_tab2;
    pc_tab1 = new CTable();
    pc_tab1->vSetName("pc_tab1");
    pc_tab2 = new CTable(*pc_tab1);
    cout << "Increase pc_tab2, result: " << boolalpha << pc_tab1->bSetNewSize(7) << endl;

    CTable c_tab;
    CTable *pc_new_tab, *pc_new_tab2;
    pc_new_tab = c_tab.pcClone();
    pc_new_tab2 = pc_tab1->pcClone();

    cout << endl << "pctab1.i_tab_length: " << pc_tab1->i_getTableSize() << endl;
    v_mod_tab(pc_tab1, 11);
    cout << "pctab1.i_tab_length: " << pc_tab1->i_getTableSize() << endl;
    v_mod_tab(*pc_tab1, 13);
    cout << "pctab1.i_tab_length: " << pc_tab1->i_getTableSize() << endl;

    pc_tab1->vPrint();
    pc_tab2->vPrint();

    delete pc_tab1;
    delete pc_tab2;
} //void v_lista2()

void v_lista3()
{
    // Zadanie 1
//    CTable c_tab_0, c_tab_1;
//    c_tab_0.bSetNewSize(6);
//    c_tab_1.bSetNewSize(4);
//
//    c_tab_0.vPrint();
//    c_tab_1.vPrint();
//
//    c_tab_0 = c_tab_1;
//
//    c_tab_0.vPrint();
//    c_tab_1.vPrint();

    //Zadanie 2
    // po usunięciu destruktora program się nie skompilował

    //Zadanie 3

    CTable c_tab_0, c_tab_1;
    c_tab_0.bSetNewSize(6);
    c_tab_1.bSetNewSize(4);
    c_tab_0.vSetValueAt(0,1);
    c_tab_0.vSetValueAt(1,2);
    c_tab_0.vSetValueAt(2,3);
    c_tab_0.vSetValueAt(3,4);
    c_tab_1.vSetValueAt(0,51);
    c_tab_1.vSetValueAt(1,52);
    c_tab_1.vSetValueAt(2,53);
    c_tab_1.vSetValueAt(3,54);
    c_tab_0.vPrint();
    c_tab_1.vPrint();
    /* initialize table */
    cout << endl << "c_tab_0 = c_tab_1" << endl;
    c_tab_0 = c_tab_1;
    cout << endl << "c_tab_1.vSetValueAt(2,123);" << endl;
    c_tab_1.vSetValueAt(2,123);
    c_tab_0.vPrint();
    c_tab_1.vPrint();

    //Zadanie 4
    cout << endl << "c_tab_0 + c_tab_1" << endl;
    c_tab_0.operator+(c_tab_1);
    c_tab_0.vPrint();

//    delete & c_tab_0;

} //void v_lista3()


