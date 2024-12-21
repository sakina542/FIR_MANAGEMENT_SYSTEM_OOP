#pragma once
#include"Officer.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class Admin
{
public:
    property String^ AdminName;
    property String^ Password;

    static List<Officer^>^ officersList = gcnew List<Officer^>();  

    Admin(String^ adminName, String^ password)
    {
        AdminName = adminName;
        Password = password;
    }

    bool ValidateLogin(String^ enteredName, String^ enteredPassword)
    {
        return 0;
    }

    // Method to store officer data
    static void StoreOfficerData(int officerID, String^ officerName, String^ position, String^ area)
    {
    }

    // Method to display all officers
    static void DisplayOfficers()
    {
        
    }

    // Method to find an officer by their ID
    static Officer^ FindOfficerByID(int officerID)
    {
    }

   
};



