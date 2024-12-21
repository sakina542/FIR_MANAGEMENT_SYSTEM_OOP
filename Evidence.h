#pragma once
#include "REPORT CASE.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

public ref class Evidence : public REPORT_CASE {
private:
    static List<Evidence^>^ accusedList = gcnew List<Evidence^>();

public:
    int AccusedID;
    String^ Name;
    String^ CNIC_No;
    String^ AccusationDetails;

    Evidence(int id, String^ name, String^ cnic, String^ details) {
        AccusedID = id;
        Name = name;
        CNIC_No = cnic;
        AccusationDetails = details;
    }

    static void Saveevidence(int id, String^ name, String^ cnic, String^ details) {

    }

    static void Updateevidence(int id, String^ name, String^ cnic, String^ details) {

    }

    static void Displayevidence(DataGridView^ dataGridView) {}

};

