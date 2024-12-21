#pragma once
#include "REPORT CASE.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

public ref class Accused : public REPORT_CASE {
private:
    static List<Accused^>^ accusedList = gcnew List<Accused^>();

public:
    int AccusedID;
    String^ Name;
    String^ CNIC_No;
    String^ AccusationDetails;

    Accused(int id, String^ name, String^ cnic, String^ details) {
        AccusedID = id;
        Name = name;
        CNIC_No = cnic;
        AccusationDetails = details;
    }

    static void SaveAccused(int id, String^ name, String^ cnic, String^ details) {
       
    }

    static void UpdateAccused(int id, String^ name, String^ cnic, String^ details) {
    
    }

    static void DisplayAccused(DataGridView^ dataGridView) {}
        
};


