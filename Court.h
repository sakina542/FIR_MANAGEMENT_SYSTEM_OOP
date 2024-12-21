#pragma once
#include "REPORT CASE.h"
ref class Court :
    public REPORT_CASE
{
public:
    int CaseID;
    String^ File;
    DateTime HearingDate;
    String^ JudgeName;

    // Constructor
    Court(int caseID, String^ file, DateTime hearingDate, String^ judgeName) {}
 

        // Methods
        void SaveCase() {}
        void UpdateCaseDetails() {}
        void DisplayCaseInfo(){}
        static int ScheduleHearing(DateTime date) {
            return 0;
        }
        int UpdateHearingDate(DateTime newDate) {
            return 0;
        }
        void AssignJudge(String^ judgeName) { }          
   
};

