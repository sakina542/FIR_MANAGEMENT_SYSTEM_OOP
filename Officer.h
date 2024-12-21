#pragma once
#include "REPORT CASE.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class Officer : public REPORT_CASE {
public:
    int OfficerID;               
    String^ Name;                
    String^ Position;            
    String^ Area;                

    static List<Officer^>^ officerList = gcnew List<Officer^>();

    Officer(int officerID, String^ name, String^ position, String^ area) {
        OfficerID = officerID;
        Name = name;
        Position = position;
        Area = area;
    }

    static void SaveOfficer(Officer^ officer) {

    }
    static void UpdateOfficerDetails(int id, String^ name, String^ position, String^ area) {
    
    }

    static void DisplayOfficerInfo(DataGridView^ dataGridViewofficer) {
      
    }

    void AssignArea(String^ area) {}
      
};



