#pragma once
#include "REPORT CASE.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

public ref class Complaint :
    public REPORT_CASE
    {
    private:
        static List<Complaint^>^ complaintsList = gcnew List<Complaint^>();

    public:
        int ComplaintID;
        String^ Name;
        String^ CNIC_No;
        String^ ComplaintDetails;

        Complaint(int id, String^ name, String^ cnic, String^ details)
        {
            ComplaintID = id;
            Name = name;
            CNIC_No = cnic;
            ComplaintDetails = details;
        }
        static void SaveComplaint(int id, String^ name, String^ cnic, String^ details)
        {
        }
        static void UpdateComplaint(int id, String^ name, String^ cnic, String^ details)
        {
           
        }
        static void DisplayComplaints(DataGridView^ dataGridView)
        {
        }
           
    };



