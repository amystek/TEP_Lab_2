#include "main.h"

int main() {
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

    delete pc_tab1;
    delete pc_tab2;
    return 0;
}

void v_mod_tab(CTable *pcTab, int iNewSize) {
    pcTab->bSetNewSize(iNewSize);
}

void v_mod_tab(CTable cTab, int iNewSize) {
    cTab.bSetNewSize(iNewSize);
}
