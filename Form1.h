#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
//#include "Header2.h"
//#include"REPORT CASE.h"
//#include "Complaint.h"
//#include"admin.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }

  protected:



  private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
  private: System::Windows::Forms::Label^ label1;

  private: System::Windows::Forms::TabPage^ tabPage8;
  private: System::Windows::Forms::TabPage^ tabPage7;

  private: System::Windows::Forms::TabPage^ tabPage5;
  private: System::Windows::Forms::TabPage^ tabPage4;
  private: System::Windows::Forms::Button^ button6;
  private: System::Windows::Forms::Button^ button5;
  private: System::Windows::Forms::TextBox^ textBox12;
  private: System::Windows::Forms::TextBox^ textBox11;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::Label^ label17;
  private: System::Windows::Forms::Label^ label16;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::TabPage^ tabPage3;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::TabControl^ tabControl1;
  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label7;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;


private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NAME;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;





  private: System::ComponentModel::IContainer^ components;
  protected:
  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    
#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->components = (gcnew System::ComponentModel::Container());
        this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
        this->button28 = (gcnew System::Windows::Forms::Button());
        this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
        this->button18 = (gcnew System::Windows::Forms::Button());
        this->button17 = (gcnew System::Windows::Forms::Button());
        this->button11 = (gcnew System::Windows::Forms::Button());
        this->textBox20 = (gcnew System::Windows::Forms::TextBox());
        this->textBox21 = (gcnew System::Windows::Forms::TextBox());
        this->textBox22 = (gcnew System::Windows::Forms::TextBox());
        this->textBox23 = (gcnew System::Windows::Forms::TextBox());
        this->label29 = (gcnew System::Windows::Forms::Label());
        this->label30 = (gcnew System::Windows::Forms::Label());
        this->label31 = (gcnew System::Windows::Forms::Label());
        this->label32 = (gcnew System::Windows::Forms::Label());
        this->label33 = (gcnew System::Windows::Forms::Label());
        this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
        this->button27 = (gcnew System::Windows::Forms::Button());
        this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
        this->button20 = (gcnew System::Windows::Forms::Button());
        this->button19 = (gcnew System::Windows::Forms::Button());
        this->button10 = (gcnew System::Windows::Forms::Button());
        this->textBox19 = (gcnew System::Windows::Forms::TextBox());
        this->textBox18 = (gcnew System::Windows::Forms::TextBox());
        this->textBox17 = (gcnew System::Windows::Forms::TextBox());
        this->textBox16 = (gcnew System::Windows::Forms::TextBox());
        this->label28 = (gcnew System::Windows::Forms::Label());
        this->label27 = (gcnew System::Windows::Forms::Label());
        this->label26 = (gcnew System::Windows::Forms::Label());
        this->label25 = (gcnew System::Windows::Forms::Label());
        this->label24 = (gcnew System::Windows::Forms::Label());
        this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
        this->button26 = (gcnew System::Windows::Forms::Button());
        this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
        this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->button21 = (gcnew System::Windows::Forms::Button());
        this->button9 = (gcnew System::Windows::Forms::Button());
        this->button8 = (gcnew System::Windows::Forms::Button());
        this->textBox15 = (gcnew System::Windows::Forms::TextBox());
        this->textBox14 = (gcnew System::Windows::Forms::TextBox());
        this->textBox13 = (gcnew System::Windows::Forms::TextBox());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->label23 = (gcnew System::Windows::Forms::Label());
        this->label22 = (gcnew System::Windows::Forms::Label());
        this->label21 = (gcnew System::Windows::Forms::Label());
        this->label20 = (gcnew System::Windows::Forms::Label());
        this->label19 = (gcnew System::Windows::Forms::Label());
        this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
        this->button25 = (gcnew System::Windows::Forms::Button());
        this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
        this->NAME = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->button22 = (gcnew System::Windows::Forms::Button());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->label9 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->button6 = (gcnew System::Windows::Forms::Button());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->textBox12 = (gcnew System::Windows::Forms::TextBox());
        this->textBox11 = (gcnew System::Windows::Forms::TextBox());
        this->textBox10 = (gcnew System::Windows::Forms::TextBox());
        this->label18 = (gcnew System::Windows::Forms::Label());
        this->label17 = (gcnew System::Windows::Forms::Label());
        this->label16 = (gcnew System::Windows::Forms::Label());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->label14 = (gcnew System::Windows::Forms::Label());
        this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
        this->button24 = (gcnew System::Windows::Forms::Button());
        this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
        this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->button23 = (gcnew System::Windows::Forms::Button());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->label13 = (gcnew System::Windows::Forms::Label());
        this->label12 = (gcnew System::Windows::Forms::Label());
        this->label11 = (gcnew System::Windows::Forms::Label());
        this->label10 = (gcnew System::Windows::Forms::Label());
        this->textBox9 = (gcnew System::Windows::Forms::TextBox());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
        this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
        this->button29 = (gcnew System::Windows::Forms::Button());
        this->button12 = (gcnew System::Windows::Forms::Button());
        this->label36 = (gcnew System::Windows::Forms::Label());
        this->label35 = (gcnew System::Windows::Forms::Label());
        this->textBox25 = (gcnew System::Windows::Forms::TextBox());
        this->textBox24 = (gcnew System::Windows::Forms::TextBox());
        this->label34 = (gcnew System::Windows::Forms::Label());
        this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
        this->button7 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
        this->button31 = (gcnew System::Windows::Forms::Button());
        this->button30 = (gcnew System::Windows::Forms::Button());
        this->label38 = (gcnew System::Windows::Forms::Label());
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->button16 = (gcnew System::Windows::Forms::Button());
        this->button15 = (gcnew System::Windows::Forms::Button());
        this->button14 = (gcnew System::Windows::Forms::Button());
        this->button13 = (gcnew System::Windows::Forms::Button());
        this->label37 = (gcnew System::Windows::Forms::Label());
        this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
        this->tabPage8->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
        this->tabPage7->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
        this->tabPage5->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
        this->tabPage4->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
        this->tabPage3->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
        this->tabPage2->SuspendLayout();
        this->tabControl1->SuspendLayout();
        this->tabPage9->SuspendLayout();
        this->tabPage1->SuspendLayout();
        this->tabPage6->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->SuspendLayout();
        // 
        // notifyIcon1
        // 
        this->notifyIcon1->Text = L"notifyIcon1";
        this->notifyIcon1->Visible = true;
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::SystemColors::Control;
        this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
        this->label1->Location = System::Drawing::Point(168, 30);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(309, 30);
        this->label1->TabIndex = 3;
        this->label1->Text = L"FIR MANAEGMENT SYSTEM";
        this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
        // 
        // tabPage8
        // 
        this->tabPage8->Controls->Add(this->button28);
        this->tabPage8->Controls->Add(this->dataGridView2);
        this->tabPage8->Controls->Add(this->button18);
        this->tabPage8->Controls->Add(this->button17);
        this->tabPage8->Controls->Add(this->button11);
        this->tabPage8->Controls->Add(this->textBox20);
        this->tabPage8->Controls->Add(this->textBox21);
        this->tabPage8->Controls->Add(this->textBox22);
        this->tabPage8->Controls->Add(this->textBox23);
        this->tabPage8->Controls->Add(this->label29);
        this->tabPage8->Controls->Add(this->label30);
        this->tabPage8->Controls->Add(this->label31);
        this->tabPage8->Controls->Add(this->label32);
        this->tabPage8->Controls->Add(this->label33);
        this->tabPage8->Location = System::Drawing::Point(4, 22);
        this->tabPage8->Name = L"tabPage8";
        this->tabPage8->Padding = System::Windows::Forms::Padding(3);
        this->tabPage8->Size = System::Drawing::Size(645, 305);
        this->tabPage8->TabIndex = 8;
        this->tabPage8->Text = L"COURT";
        this->tabPage8->UseVisualStyleBackColor = true;
        this->tabPage8->Click += gcnew System::EventHandler(this, &Form1::tabPage8_Click);
        // 
        // button28
        // 
        this->button28->Location = System::Drawing::Point(21, 258);
        this->button28->Name = L"button28";
        this->button28->Size = System::Drawing::Size(75, 23);
        this->button28->TabIndex = 23;
        this->button28->Text = L"button28";
        this->button28->UseVisualStyleBackColor = true;
        this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
        // 
        // dataGridView2
        // 
        this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView2->Location = System::Drawing::Point(318, 93);
        this->dataGridView2->Name = L"dataGridView2";
        this->dataGridView2->Size = System::Drawing::Size(209, 174);
        this->dataGridView2->TabIndex = 22;
        // 
        // button18
        // 
        this->button18->Location = System::Drawing::Point(366, 64);
        this->button18->Name = L"button18";
        this->button18->Size = System::Drawing::Size(81, 23);
        this->button18->TabIndex = 21;
        this->button18->Text = L"DISPLAY ";
        this->button18->UseVisualStyleBackColor = true;
        // 
        // button17
        // 
        this->button17->Location = System::Drawing::Point(162, 209);
        this->button17->Name = L"button17";
        this->button17->Size = System::Drawing::Size(81, 23);
        this->button17->TabIndex = 20;
        this->button17->Text = L"UPDATE";
        this->button17->UseVisualStyleBackColor = true;
        // 
        // button11
        // 
        this->button11->Location = System::Drawing::Point(55, 209);
        this->button11->Name = L"button11";
        this->button11->Size = System::Drawing::Size(81, 23);
        this->button11->TabIndex = 19;
        this->button11->Text = L"SAVE ";
        this->button11->UseVisualStyleBackColor = true;
        // 
        // textBox20
        // 
        this->textBox20->Location = System::Drawing::Point(35, 157);
        this->textBox20->Name = L"textBox20";
        this->textBox20->Size = System::Drawing::Size(77, 20);
        this->textBox20->TabIndex = 18;
        // 
        // textBox21
        // 
        this->textBox21->Location = System::Drawing::Point(177, 80);
        this->textBox21->Name = L"textBox21";
        this->textBox21->Size = System::Drawing::Size(77, 20);
        this->textBox21->TabIndex = 17;
        // 
        // textBox22
        // 
        this->textBox22->Location = System::Drawing::Point(183, 157);
        this->textBox22->Name = L"textBox22";
        this->textBox22->Size = System::Drawing::Size(77, 20);
        this->textBox22->TabIndex = 16;
        // 
        // textBox23
        // 
        this->textBox23->Location = System::Drawing::Point(35, 80);
        this->textBox23->Name = L"textBox23";
        this->textBox23->Size = System::Drawing::Size(77, 20);
        this->textBox23->TabIndex = 15;
        // 
        // label29
        // 
        this->label29->AutoSize = true;
        this->label29->Location = System::Drawing::Point(32, 130);
        this->label29->Name = L"label29";
        this->label29->Size = System::Drawing::Size(88, 13);
        this->label29->TabIndex = 14;
        this->label29->Text = L"HEARING-DATE";
        // 
        // label30
        // 
        this->label30->AutoSize = true;
        this->label30->Location = System::Drawing::Point(183, 130);
        this->label30->Name = L"label30";
        this->label30->Size = System::Drawing::Size(77, 13);
        this->label30->TabIndex = 13;
        this->label30->Text = L"JUDGE-NAME";
        // 
        // label31
        // 
        this->label31->AutoSize = true;
        this->label31->Location = System::Drawing::Point(183, 55);
        this->label31->Name = L"label31";
        this->label31->Size = System::Drawing::Size(60, 13);
        this->label31->TabIndex = 12;
        this->label31->Text = L"FILENAME";
        // 
        // label32
        // 
        this->label32->AutoSize = true;
        this->label32->Location = System::Drawing::Point(32, 64);
        this->label32->Name = L"label32";
        this->label32->Size = System::Drawing::Size(49, 13);
        this->label32->TabIndex = 11;
        this->label32->Text = L"CASE-ID";
        // 
        // label33
        // 
        this->label33->AutoSize = true;
        this->label33->Location = System::Drawing::Point(231, 29);
        this->label33->Name = L"label33";
        this->label33->Size = System::Drawing::Size(45, 13);
        this->label33->TabIndex = 10;
        this->label33->Text = L"COURT";
        // 
        // tabPage7
        // 
        this->tabPage7->Controls->Add(this->button27);
        this->tabPage7->Controls->Add(this->dataGridView3);
        this->tabPage7->Controls->Add(this->button20);
        this->tabPage7->Controls->Add(this->button19);
        this->tabPage7->Controls->Add(this->button10);
        this->tabPage7->Controls->Add(this->textBox19);
        this->tabPage7->Controls->Add(this->textBox18);
        this->tabPage7->Controls->Add(this->textBox17);
        this->tabPage7->Controls->Add(this->textBox16);
        this->tabPage7->Controls->Add(this->label28);
        this->tabPage7->Controls->Add(this->label27);
        this->tabPage7->Controls->Add(this->label26);
        this->tabPage7->Controls->Add(this->label25);
        this->tabPage7->Controls->Add(this->label24);
        this->tabPage7->Location = System::Drawing::Point(4, 22);
        this->tabPage7->Name = L"tabPage7";
        this->tabPage7->Padding = System::Windows::Forms::Padding(3);
        this->tabPage7->Size = System::Drawing::Size(645, 305);
        this->tabPage7->TabIndex = 7;
        this->tabPage7->Text = L"Evidence";
        this->tabPage7->UseVisualStyleBackColor = true;
        this->tabPage7->Click += gcnew System::EventHandler(this, &Form1::tabPage7_Click);
        // 
        // button27
        // 
        this->button27->Location = System::Drawing::Point(24, 266);
        this->button27->Name = L"button27";
        this->button27->Size = System::Drawing::Size(75, 23);
        this->button27->TabIndex = 13;
        this->button27->Text = L"button27";
        this->button27->UseVisualStyleBackColor = true;
        this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
        // 
        // dataGridView3
        // 
        this->dataGridView3->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView3->Location = System::Drawing::Point(312, 99);
        this->dataGridView3->Name = L"dataGridView3";
        this->dataGridView3->Size = System::Drawing::Size(197, 190);
        this->dataGridView3->TabIndex = 12;
        // 
        // button20
        // 
        this->button20->Location = System::Drawing::Point(164, 202);
        this->button20->Name = L"button20";
        this->button20->Size = System::Drawing::Size(81, 23);
        this->button20->TabIndex = 11;
        this->button20->Text = L"UPDATE";
        this->button20->UseVisualStyleBackColor = true;
        this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
        // 
        // button19
        // 
        this->button19->Location = System::Drawing::Point(356, 70);
        this->button19->Name = L"button19";
        this->button19->Size = System::Drawing::Size(81, 23);
        this->button19->TabIndex = 10;
        this->button19->Text = L"DISPLAY";
        this->button19->UseVisualStyleBackColor = true;
        // 
        // button10
        // 
        this->button10->Location = System::Drawing::Point(42, 202);
        this->button10->Name = L"button10";
        this->button10->Size = System::Drawing::Size(81, 23);
        this->button10->TabIndex = 9;
        this->button10->Text = L"SAVE";
        this->button10->UseVisualStyleBackColor = true;
        // 
        // textBox19
        // 
        this->textBox19->Location = System::Drawing::Point(42, 150);
        this->textBox19->Name = L"textBox19";
        this->textBox19->Size = System::Drawing::Size(77, 20);
        this->textBox19->TabIndex = 8;
        // 
        // textBox18
        // 
        this->textBox18->Location = System::Drawing::Point(164, 86);
        this->textBox18->Name = L"textBox18";
        this->textBox18->Size = System::Drawing::Size(77, 20);
        this->textBox18->TabIndex = 7;
        // 
        // textBox17
        // 
        this->textBox17->Location = System::Drawing::Point(164, 150);
        this->textBox17->Name = L"textBox17";
        this->textBox17->Size = System::Drawing::Size(77, 20);
        this->textBox17->TabIndex = 6;
        // 
        // textBox16
        // 
        this->textBox16->Location = System::Drawing::Point(42, 86);
        this->textBox16->Name = L"textBox16";
        this->textBox16->Size = System::Drawing::Size(77, 20);
        this->textBox16->TabIndex = 5;
        // 
        // label28
        // 
        this->label28->AutoSize = true;
        this->label28->Location = System::Drawing::Point(39, 124);
        this->label28->Name = L"label28";
        this->label28->Size = System::Drawing::Size(60, 13);
        this->label28->TabIndex = 4;
        this->label28->Text = L"FILENAME";
        // 
        // label27
        // 
        this->label27->AutoSize = true;
        this->label27->Location = System::Drawing::Point(161, 124);
        this->label27->Name = L"label27";
        this->label27->Size = System::Drawing::Size(80, 13);
        this->label27->TabIndex = 3;
        this->label27->Text = L"DESCRIPTION";
        // 
        // label26
        // 
        this->label26->AutoSize = true;
        this->label26->Location = System::Drawing::Point(161, 70);
        this->label26->Name = L"label26";
        this->label26->Size = System::Drawing::Size(75, 13);
        this->label26->TabIndex = 2;
        this->label26->Text = L"EVIDENCE-ID";
        // 
        // label25
        // 
        this->label25->AutoSize = true;
        this->label25->Location = System::Drawing::Point(39, 70);
        this->label25->Name = L"label25";
        this->label25->Size = System::Drawing::Size(38, 13);
        this->label25->TabIndex = 1;
        this->label25->Text = L"NAME";
        // 
        // label24
        // 
        this->label24->AutoSize = true;
        this->label24->Location = System::Drawing::Point(220, 27);
        this->label24->Name = L"label24";
        this->label24->Size = System::Drawing::Size(64, 13);
        this->label24->TabIndex = 0;
        this->label24->Text = L"EVIDENCE ";
        // 
        // tabPage5
        // 
        this->tabPage5->BackColor = System::Drawing::Color::RosyBrown;
        this->tabPage5->Controls->Add(this->button26);
        this->tabPage5->Controls->Add(this->dataGridView4);
        this->tabPage5->Controls->Add(this->button21);
        this->tabPage5->Controls->Add(this->button9);
        this->tabPage5->Controls->Add(this->button8);
        this->tabPage5->Controls->Add(this->textBox15);
        this->tabPage5->Controls->Add(this->textBox14);
        this->tabPage5->Controls->Add(this->textBox13);
        this->tabPage5->Controls->Add(this->textBox6);
        this->tabPage5->Controls->Add(this->label23);
        this->tabPage5->Controls->Add(this->label22);
        this->tabPage5->Controls->Add(this->label21);
        this->tabPage5->Controls->Add(this->label20);
        this->tabPage5->Controls->Add(this->label19);
        this->tabPage5->Location = System::Drawing::Point(4, 22);
        this->tabPage5->Name = L"tabPage5";
        this->tabPage5->Padding = System::Windows::Forms::Padding(3);
        this->tabPage5->Size = System::Drawing::Size(645, 305);
        this->tabPage5->TabIndex = 5;
        this->tabPage5->Text = L"OFFICER ";
        // 
        // button26
        // 
        this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button26->Location = System::Drawing::Point(20, 257);
        this->button26->Name = L"button26";
        this->button26->Size = System::Drawing::Size(75, 23);
        this->button26->TabIndex = 13;
        this->button26->Text = L"BACK";
        this->button26->UseVisualStyleBackColor = true;
        this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
        // 
        // dataGridView4
        // 
        this->dataGridView4->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->Column8,
                this->Column9, this->Column10, this->Column12
        });
        this->dataGridView4->Location = System::Drawing::Point(105, 53);
        this->dataGridView4->Name = L"dataGridView4";
        this->dataGridView4->Size = System::Drawing::Size(446, 82);
        this->dataGridView4->TabIndex = 12;
        this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView4_CellContentClick);
        // 
        // Column8
        // 
        this->Column8->HeaderText = L"NAME";
        this->Column8->Name = L"Column8";
        // 
        // Column9
        // 
        this->Column9->HeaderText = L"OFFICER-ID";
        this->Column9->Name = L"Column9";
        // 
        // Column10
        // 
        this->Column10->HeaderText = L"POSITION";
        this->Column10->Name = L"Column10";
        // 
        // Column12
        // 
        this->Column12->HeaderText = L"AREA";
        this->Column12->Name = L"Column12";
        // 
        // button21
        // 
        this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button21->Location = System::Drawing::Point(274, 228);
        this->button21->Name = L"button21";
        this->button21->Size = System::Drawing::Size(80, 23);
        this->button21->TabIndex = 11;
        this->button21->Text = L"UPDATE";
        this->button21->UseVisualStyleBackColor = true;
        // 
        // button9
        // 
        this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button9->Location = System::Drawing::Point(385, 228);
        this->button9->Name = L"button9";
        this->button9->Size = System::Drawing::Size(85, 25);
        this->button9->TabIndex = 10;
        this->button9->Text = L"DISPLAY ";
        this->button9->UseVisualStyleBackColor = true;
        this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
        // 
        // button8
        // 
        this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button8->Location = System::Drawing::Point(166, 228);
        this->button8->Name = L"button8";
        this->button8->Size = System::Drawing::Size(75, 23);
        this->button8->TabIndex = 9;
        this->button8->Text = L"SAVE";
        this->button8->UseVisualStyleBackColor = true;
        // 
        // textBox15
        // 
        this->textBox15->Location = System::Drawing::Point(476, 182);
        this->textBox15->Name = L"textBox15";
        this->textBox15->Size = System::Drawing::Size(85, 20);
        this->textBox15->TabIndex = 8;
        // 
        // textBox14
        // 
        this->textBox14->Location = System::Drawing::Point(219, 182);
        this->textBox14->Name = L"textBox14";
        this->textBox14->Size = System::Drawing::Size(85, 20);
        this->textBox14->TabIndex = 7;
        // 
        // textBox13
        // 
        this->textBox13->Location = System::Drawing::Point(353, 182);
        this->textBox13->Name = L"textBox13";
        this->textBox13->Size = System::Drawing::Size(85, 20);
        this->textBox13->TabIndex = 6;
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(93, 182);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(85, 20);
        this->textBox6->TabIndex = 5;
        // 
        // label23
        // 
        this->label23->AutoSize = true;
        this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label23->Location = System::Drawing::Point(350, 157);
        this->label23->Name = L"label23";
        this->label23->Size = System::Drawing::Size(78, 16);
        this->label23->TabIndex = 4;
        this->label23->Text = L"POSITION";
        // 
        // label22
        // 
        this->label22->AutoSize = true;
        this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label22->Location = System::Drawing::Point(216, 157);
        this->label22->Name = L"label22";
        this->label22->Size = System::Drawing::Size(91, 16);
        this->label22->TabIndex = 3;
        this->label22->Text = L"OFFICER-ID";
        this->label22->Click += gcnew System::EventHandler(this, &Form1::label22_Click);
        // 
        // label21
        // 
        this->label21->AutoSize = true;
        this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label21->Location = System::Drawing::Point(473, 157);
        this->label21->Name = L"label21";
        this->label21->Size = System::Drawing::Size(48, 16);
        this->label21->TabIndex = 2;
        this->label21->Text = L"AREA";
        // 
        // label20
        // 
        this->label20->AutoSize = true;
        this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label20->Location = System::Drawing::Point(90, 157);
        this->label20->Name = L"label20";
        this->label20->Size = System::Drawing::Size(54, 16);
        this->label20->TabIndex = 1;
        this->label20->Text = L"NAME ";
        // 
        // label19
        // 
        this->label19->AutoSize = true;
        this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label19->Location = System::Drawing::Point(243, 24);
        this->label19->Name = L"label19";
        this->label19->Size = System::Drawing::Size(167, 26);
        this->label19->TabIndex = 0;
        this->label19->Text = L"POLICE OFFICER";
        // 
        // tabPage4
        // 
        this->tabPage4->BackColor = System::Drawing::Color::RosyBrown;
        this->tabPage4->Controls->Add(this->button25);
        this->tabPage4->Controls->Add(this->dataGridView5);
        this->tabPage4->Controls->Add(this->button22);
        this->tabPage4->Controls->Add(this->textBox5);
        this->tabPage4->Controls->Add(this->label9);
        this->tabPage4->Controls->Add(this->label7);
        this->tabPage4->Controls->Add(this->button6);
        this->tabPage4->Controls->Add(this->button5);
        this->tabPage4->Controls->Add(this->textBox12);
        this->tabPage4->Controls->Add(this->textBox11);
        this->tabPage4->Controls->Add(this->textBox10);
        this->tabPage4->Controls->Add(this->label18);
        this->tabPage4->Controls->Add(this->label17);
        this->tabPage4->Controls->Add(this->label16);
        this->tabPage4->Controls->Add(this->label15);
        this->tabPage4->Controls->Add(this->label14);
        this->tabPage4->Location = System::Drawing::Point(4, 22);
        this->tabPage4->Name = L"tabPage4";
        this->tabPage4->Padding = System::Windows::Forms::Padding(3);
        this->tabPage4->Size = System::Drawing::Size(645, 305);
        this->tabPage4->TabIndex = 4;
        this->tabPage4->Text = L" Accused";
        // 
        // button25
        // 
        this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button25->Location = System::Drawing::Point(31, 266);
        this->button25->Name = L"button25";
        this->button25->Size = System::Drawing::Size(75, 23);
        this->button25->TabIndex = 15;
        this->button25->Text = L"BACK";
        this->button25->UseVisualStyleBackColor = true;
        this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
        // 
        // dataGridView5
        // 
        this->dataGridView5->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->NAME, this->Column5,
                this->Column6, this->Column7
        });
        this->dataGridView5->Location = System::Drawing::Point(99, 45);
        this->dataGridView5->Name = L"dataGridView5";
        this->dataGridView5->Size = System::Drawing::Size(446, 93);
        this->dataGridView5->TabIndex = 14;
        this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView5_CellContentClick);
        // 
        // NAME
        // 
        this->NAME->HeaderText = L"NAME";
        this->NAME->Name = L"NAME";
        // 
        // Column5
        // 
        this->Column5->HeaderText = L"CNIC-NO";
        this->Column5->Name = L"Column5";
        // 
        // Column6
        // 
        this->Column6->HeaderText = L"ACCUSED-ID";
        this->Column6->Name = L"Column6";
        // 
        // Column7
        // 
        this->Column7->HeaderText = L"CHARGES";
        this->Column7->Name = L"Column7";
        // 
        // button22
        // 
        this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button22->Location = System::Drawing::Point(287, 225);
        this->button22->Name = L"button22";
        this->button22->Size = System::Drawing::Size(90, 23);
        this->button22->TabIndex = 13;
        this->button22->Text = L"UPDATE";
        this->button22->UseVisualStyleBackColor = true;
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(458, 181);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(87, 20);
        this->textBox5->TabIndex = 12;
        // 
        // label9
        // 
        this->label9->AutoSize = true;
        this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label9->Location = System::Drawing::Point(455, 155);
        this->label9->Name = L"label9";
        this->label9->Size = System::Drawing::Size(67, 16);
        this->label9->TabIndex = 11;
        this->label9->Text = L"charges ";
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label7->Location = System::Drawing::Point(197, 157);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(59, 16);
        this->label7->TabIndex = 10;
        this->label7->Text = L"Cnic-no";
        // 
        // button6
        // 
        this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button6->Location = System::Drawing::Point(416, 225);
        this->button6->Name = L"button6";
        this->button6->Size = System::Drawing::Size(81, 23);
        this->button6->TabIndex = 9;
        this->button6->Text = L"DISPLAY";
        this->button6->UseVisualStyleBackColor = true;
        // 
        // button5
        // 
        this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->button5->Location = System::Drawing::Point(163, 225);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(93, 23);
        this->button5->TabIndex = 8;
        this->button5->Text = L"SAVE";
        this->button5->UseVisualStyleBackColor = true;
        // 
        // textBox12
        // 
        this->textBox12->Location = System::Drawing::Point(327, 181);
        this->textBox12->Name = L"textBox12";
        this->textBox12->Size = System::Drawing::Size(87, 20);
        this->textBox12->TabIndex = 7;
        // 
        // textBox11
        // 
        this->textBox11->Location = System::Drawing::Point(191, 181);
        this->textBox11->Name = L"textBox11";
        this->textBox11->Size = System::Drawing::Size(87, 20);
        this->textBox11->TabIndex = 6;
        // 
        // textBox10
        // 
        this->textBox10->Location = System::Drawing::Point(71, 181);
        this->textBox10->Name = L"textBox10";
        this->textBox10->Size = System::Drawing::Size(87, 20);
        this->textBox10->TabIndex = 5;
        this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::textBox10_TextChanged);
        // 
        // label18
        // 
        this->label18->AutoSize = true;
        this->label18->Location = System::Drawing::Point(238, 144);
        this->label18->Name = L"label18";
        this->label18->Size = System::Drawing::Size(0, 13);
        this->label18->TabIndex = 4;
        // 
        // label17
        // 
        this->label17->AutoSize = true;
        this->label17->Location = System::Drawing::Point(144, 45);
        this->label17->Name = L"label17";
        this->label17->Size = System::Drawing::Size(0, 13);
        this->label17->TabIndex = 3;
        // 
        // label16
        // 
        this->label16->AutoSize = true;
        this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label16->Location = System::Drawing::Point(324, 155);
        this->label16->Name = L"label16";
        this->label16->Size = System::Drawing::Size(86, 16);
        this->label16->TabIndex = 2;
        this->label16->Text = L"Accused ID";
        // 
        // label15
        // 
        this->label15->AutoSize = true;
        this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label15->Location = System::Drawing::Point(68, 155);
        this->label15->Name = L"label15";
        this->label15->Size = System::Drawing::Size(50, 16);
        this->label15->TabIndex = 1;
        this->label15->Text = L"NAME";
        // 
        // label14
        // 
        this->label14->AutoSize = true;
        this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label14->Location = System::Drawing::Point(270, 18);
        this->label14->Name = L"label14";
        this->label14->Size = System::Drawing::Size(107, 24);
        this->label14->TabIndex = 0;
        this->label14->Text = L"ACCUSED";
        // 
        // tabPage3
        // 
        this->tabPage3->BackColor = System::Drawing::Color::RosyBrown;
        this->tabPage3->Controls->Add(this->button24);
        this->tabPage3->Controls->Add(this->dataGridView6);
        this->tabPage3->Controls->Add(this->button23);
        this->tabPage3->Controls->Add(this->textBox4);
        this->tabPage3->Controls->Add(this->label8);
        this->tabPage3->Controls->Add(this->button4);
        this->tabPage3->Controls->Add(this->button3);
        this->tabPage3->Controls->Add(this->label13);
        this->tabPage3->Controls->Add(this->label12);
        this->tabPage3->Controls->Add(this->label11);
        this->tabPage3->Controls->Add(this->label10);
        this->tabPage3->Controls->Add(this->textBox9);
        this->tabPage3->Controls->Add(this->textBox8);
        this->tabPage3->Controls->Add(this->textBox7);
        this->tabPage3->Location = System::Drawing::Point(4, 22);
        this->tabPage3->Name = L"tabPage3";
        this->tabPage3->Padding = System::Windows::Forms::Padding(3);
        this->tabPage3->Size = System::Drawing::Size(645, 305);
        this->tabPage3->TabIndex = 3;
        this->tabPage3->Text = L"Complaint";
        this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
        // 
        // button24
        // 
        this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button24->Location = System::Drawing::Point(15, 266);
        this->button24->Name = L"button24";
        this->button24->Size = System::Drawing::Size(75, 23);
        this->button24->TabIndex = 13;
        this->button24->Text = L"BACK";
        this->button24->UseVisualStyleBackColor = true;
        this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
        // 
        // dataGridView6
        // 
        this->dataGridView6->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
            this->Column1,
                this->Column2, this->Column3, this->Column4
        });
        this->dataGridView6->Location = System::Drawing::Point(95, 46);
        this->dataGridView6->Name = L"dataGridView6";
        this->dataGridView6->Size = System::Drawing::Size(444, 93);
        this->dataGridView6->TabIndex = 12;
        // 
        // Column1
        // 
        this->Column1->HeaderText = L"NAME";
        this->Column1->Name = L"Column1";
        this->Column1->ReadOnly = true;
        // 
        // Column2
        // 
        this->Column2->HeaderText = L"CNIC-NO";
        this->Column2->Name = L"Column2";
        this->Column2->ReadOnly = true;
        // 
        // Column3
        // 
        this->Column3->HeaderText = L"COMPAINT-ID";
        this->Column3->Name = L"Column3";
        this->Column3->ReadOnly = true;
        // 
        // Column4
        // 
        this->Column4->HeaderText = L"DETAIL";
        this->Column4->Name = L"Column4";
        this->Column4->ReadOnly = true;
        // 
        // button23
        // 
        this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button23->Location = System::Drawing::Point(265, 226);
        this->button23->Name = L"button23";
        this->button23->Size = System::Drawing::Size(90, 30);
        this->button23->TabIndex = 11;
        this->button23->Text = L"UPDATE ";
        this->button23->UseVisualStyleBackColor = true;
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(489, 183);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(94, 20);
        this->textBox4->TabIndex = 10;
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label8->Location = System::Drawing::Point(485, 158);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(128, 19);
        this->label8->TabIndex = 9;
        this->label8->Text = L"complaint details ";
        // 
        // button4
        // 
        this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button4->Location = System::Drawing::Point(413, 226);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(90, 26);
        this->button4->TabIndex = 8;
        this->button4->Text = L"DISPLAY";
        this->button4->UseVisualStyleBackColor = true;
        // 
        // button3
        // 
        this->button3->AutoSize = true;
        this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
        this->button3->Location = System::Drawing::Point(113, 226);
        this->button3->Name = L"button3";
        this->button3->Padding = System::Windows::Forms::Padding(0, 0, 0, 4);
        this->button3->Size = System::Drawing::Size(99, 30);
        this->button3->TabIndex = 7;
        this->button3->Text = L"SAVE";
        this->button3->UseVisualStyleBackColor = true;
        // 
        // label13
        // 
        this->label13->AutoSize = true;
        this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label13->Location = System::Drawing::Point(346, 161);
        this->label13->Name = L"label13";
        this->label13->Size = System::Drawing::Size(91, 16);
        this->label13->TabIndex = 6;
        this->label13->Text = L"complaint id";
        // 
        // label12
        // 
        this->label12->AutoSize = true;
        this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label12->Location = System::Drawing::Point(202, 161);
        this->label12->Name = L"label12";
        this->label12->Size = System::Drawing::Size(64, 19);
        this->label12->TabIndex = 5;
        this->label12->Text = L"Cnic -no";
        // 
        // label11
        // 
        this->label11->AutoSize = true;
        this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label11->Location = System::Drawing::Point(54, 158);
        this->label11->Name = L"label11";
        this->label11->Size = System::Drawing::Size(59, 19);
        this->label11->TabIndex = 4;
        this->label11->Text = L"Name ";
        this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
        // 
        // label10
        // 
        this->label10->AutoSize = true;
        this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label10->Location = System::Drawing::Point(261, 19);
        this->label10->Name = L"label10";
        this->label10->Size = System::Drawing::Size(128, 24);
        this->label10->TabIndex = 3;
        this->label10->Text = L"COMPLAINT";
        // 
        // textBox9
        // 
        this->textBox9->Location = System::Drawing::Point(206, 183);
        this->textBox9->Name = L"textBox9";
        this->textBox9->Size = System::Drawing::Size(94, 20);
        this->textBox9->TabIndex = 2;
        // 
        // textBox8
        // 
        this->textBox8->Location = System::Drawing::Point(349, 183);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(94, 20);
        this->textBox8->TabIndex = 1;
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(58, 183);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(94, 20);
        this->textBox7->TabIndex = 0;
        this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
        // 
        // tabPage2
        // 
        this->tabPage2->BackColor = System::Drawing::Color::RosyBrown;
        this->tabPage2->Controls->Add(this->textBox3);
        this->tabPage2->Controls->Add(this->label6);
        this->tabPage2->Controls->Add(this->label2);
        this->tabPage2->Controls->Add(this->button1);
        this->tabPage2->Controls->Add(this->label4);
        this->tabPage2->Controls->Add(this->textBox1);
        this->tabPage2->Controls->Add(this->textBox2);
        this->tabPage2->Controls->Add(this->label3);
        this->tabPage2->Cursor = System::Windows::Forms::Cursors::Default;
        this->tabPage2->Location = System::Drawing::Point(4, 22);
        this->tabPage2->Name = L"tabPage2";
        this->tabPage2->Padding = System::Windows::Forms::Padding(3);
        this->tabPage2->Size = System::Drawing::Size(645, 305);
        this->tabPage2->TabIndex = 1;
        this->tabPage2->Text = L"LOGIN";
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(380, 141);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(151, 20);
        this->textBox3->TabIndex = 8;
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label6->Location = System::Drawing::Point(377, 125);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(77, 16);
        this->label6->TabIndex = 7;
        this->label6->Text = L"PHONE-NO";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->BackColor = System::Drawing::Color::Transparent;
        this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
        this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label2->Location = System::Drawing::Point(414, 23);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(100, 35);
        this->label2->TabIndex = 4;
        this->label2->Text = L"LOGIN ";
        // 
        // button1
        // 
        this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
        this->button1->Location = System::Drawing::Point(420, 231);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(79, 29);
        this->button1->TabIndex = 2;
        this->button1->Text = L"Submit ";
        this->button1->UseVisualStyleBackColor = true;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->Location = System::Drawing::Point(383, 174);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(69, 16);
        this->label4->TabIndex = 6;
        this->label4->Text = L"PIN-CODE";
        this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(380, 94);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(151, 20);
        this->textBox1->TabIndex = 0;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(384, 190);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(147, 20);
        this->textBox2->TabIndex = 1;
        this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->Location = System::Drawing::Point(377, 75);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(62, 16);
        this->label3->TabIndex = 5;
        this->label3->Text = L"CNIC-NO";
        this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
        // 
        // tabControl1
        // 
        this->tabControl1->Controls->Add(this->tabPage2);
        this->tabControl1->Controls->Add(this->tabPage3);
        this->tabControl1->Controls->Add(this->tabPage4);
        this->tabControl1->Controls->Add(this->tabPage5);
        this->tabControl1->Controls->Add(this->tabPage7);
        this->tabControl1->Controls->Add(this->tabPage8);
        this->tabControl1->Controls->Add(this->tabPage9);
        this->tabControl1->Controls->Add(this->tabPage1);
        this->tabControl1->Controls->Add(this->tabPage6);
        this->tabControl1->Location = System::Drawing::Point(3, 60);
        this->tabControl1->Name = L"tabControl1";
        this->tabControl1->SelectedIndex = 0;
        this->tabControl1->Size = System::Drawing::Size(653, 331);
        this->tabControl1->TabIndex = 7;
        // 
        // tabPage9
        // 
        this->tabPage9->Controls->Add(this->button29);
        this->tabPage9->Controls->Add(this->button12);
        this->tabPage9->Controls->Add(this->label36);
        this->tabPage9->Controls->Add(this->label35);
        this->tabPage9->Controls->Add(this->textBox25);
        this->tabPage9->Controls->Add(this->textBox24);
        this->tabPage9->Controls->Add(this->label34);
        this->tabPage9->Location = System::Drawing::Point(4, 22);
        this->tabPage9->Name = L"tabPage9";
        this->tabPage9->Padding = System::Windows::Forms::Padding(3);
        this->tabPage9->Size = System::Drawing::Size(645, 305);
        this->tabPage9->TabIndex = 9;
        this->tabPage9->Text = L"FIR-MANAGEMENT-SYSTEM";
        this->tabPage9->UseVisualStyleBackColor = true;
        // 
        // button29
        // 
        this->button29->Location = System::Drawing::Point(17, 261);
        this->button29->Name = L"button29";
        this->button29->Size = System::Drawing::Size(75, 23);
        this->button29->TabIndex = 6;
        this->button29->Text = L"button29";
        this->button29->UseVisualStyleBackColor = true;
        this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
        // 
        // button12
        // 
        this->button12->Location = System::Drawing::Point(224, 200);
        this->button12->Name = L"button12";
        this->button12->Size = System::Drawing::Size(88, 38);
        this->button12->TabIndex = 5;
        this->button12->Text = L"LOGIN ";
        this->button12->UseVisualStyleBackColor = true;
        this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
        // 
        // label36
        // 
        this->label36->AutoSize = true;
        this->label36->Location = System::Drawing::Point(202, 140);
        this->label36->Name = L"label36";
        this->label36->Size = System::Drawing::Size(70, 13);
        this->label36->TabIndex = 4;
        this->label36->Text = L"PASSWORD";
        // 
        // label35
        // 
        this->label35->AutoSize = true;
        this->label35->Location = System::Drawing::Point(211, 81);
        this->label35->Name = L"label35";
        this->label35->Size = System::Drawing::Size(86, 13);
        this->label35->TabIndex = 3;
        this->label35->Text = L"OFFICER-NAME";
        // 
        // textBox25
        // 
        this->textBox25->Location = System::Drawing::Point(204, 156);
        this->textBox25->Name = L"textBox25";
        this->textBox25->Size = System::Drawing::Size(136, 20);
        this->textBox25->TabIndex = 2;
        // 
        // textBox24
        // 
        this->textBox24->Location = System::Drawing::Point(204, 97);
        this->textBox24->Name = L"textBox24";
        this->textBox24->Size = System::Drawing::Size(136, 20);
        this->textBox24->TabIndex = 1;
        // 
        // label34
        // 
        this->label34->AutoSize = true;
        this->label34->Location = System::Drawing::Point(202, 31);
        this->label34->Name = L"label34";
        this->label34->Size = System::Drawing::Size(151, 13);
        this->label34->TabIndex = 0;
        this->label34->Text = L"FIR-MANEGEMENT-SYSTEM";
        // 
        // tabPage1
        // 
        this->tabPage1->Controls->Add(this->button7);
        this->tabPage1->Controls->Add(this->button2);
        this->tabPage1->Controls->Add(this->label5);
        this->tabPage1->Location = System::Drawing::Point(4, 22);
        this->tabPage1->Name = L"tabPage1";
        this->tabPage1->Padding = System::Windows::Forms::Padding(3);
        this->tabPage1->Size = System::Drawing::Size(645, 305);
        this->tabPage1->TabIndex = 10;
        this->tabPage1->Text = L"DASHBOARD";
        this->tabPage1->UseVisualStyleBackColor = true;
        this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click_1);
        // 
        // button7
        // 
        this->button7->Location = System::Drawing::Point(246, 135);
        this->button7->Name = L"button7";
        this->button7->Size = System::Drawing::Size(132, 34);
        this->button7->TabIndex = 2;
        this->button7->Text = L"FIR MANAGEMENT ";
        this->button7->UseVisualStyleBackColor = true;
        this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
        // 
        // button2
        // 
        this->button2->Location = System::Drawing::Point(246, 78);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(132, 34);
        this->button2->TabIndex = 1;
        this->button2->Text = L"REPORT CASE";
        this->button2->UseVisualStyleBackColor = true;
        this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Location = System::Drawing::Point(277, 24);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(75, 13);
        this->label5->TabIndex = 0;
        this->label5->Text = L"DASHBOARD";
        // 
        // tabPage6
        // 
        this->tabPage6->Controls->Add(this->button31);
        this->tabPage6->Controls->Add(this->button30);
        this->tabPage6->Controls->Add(this->label38);
        this->tabPage6->Controls->Add(this->dataGridView1);
        this->tabPage6->Controls->Add(this->button16);
        this->tabPage6->Controls->Add(this->button15);
        this->tabPage6->Controls->Add(this->button14);
        this->tabPage6->Controls->Add(this->button13);
        this->tabPage6->Controls->Add(this->label37);
        this->tabPage6->Location = System::Drawing::Point(4, 22);
        this->tabPage6->Name = L"tabPage6";
        this->tabPage6->Padding = System::Windows::Forms::Padding(3);
        this->tabPage6->Size = System::Drawing::Size(645, 305);
        this->tabPage6->TabIndex = 11;
        this->tabPage6->Text = L"CONFIDENTIAL DATA";
        this->tabPage6->UseVisualStyleBackColor = true;
        this->tabPage6->Click += gcnew System::EventHandler(this, &Form1::tabPage6_Click);
        // 
        // button31
        // 
        this->button31->Location = System::Drawing::Point(525, 256);
        this->button31->Name = L"button31";
        this->button31->Size = System::Drawing::Size(103, 28);
        this->button31->TabIndex = 8;
        this->button31->Text = L"LOGOUT";
        this->button31->UseVisualStyleBackColor = true;
        this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
        // 
        // button30
        // 
        this->button30->Location = System::Drawing::Point(21, 260);
        this->button30->Name = L"button30";
        this->button30->Size = System::Drawing::Size(86, 25);
        this->button30->TabIndex = 7;
        this->button30->Text = L"button30";
        this->button30->UseVisualStyleBackColor = true;
        this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
        // 
        // label38
        // 
        this->label38->AutoSize = true;
        this->label38->Location = System::Drawing::Point(347, 56);
        this->label38->Name = L"label38";
        this->label38->Size = System::Drawing::Size(107, 13);
        this->label38->TabIndex = 6;
        this->label38->Text = L"DETAILS OF CASES";
        // 
        // dataGridView1
        // 
        this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Location = System::Drawing::Point(286, 82);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->Size = System::Drawing::Size(215, 178);
        this->dataGridView1->TabIndex = 5;
        // 
        // button16
        // 
        this->button16->Location = System::Drawing::Point(34, 189);
        this->button16->Name = L"button16";
        this->button16->Size = System::Drawing::Size(159, 25);
        this->button16->TabIndex = 4;
        this->button16->Text = L"SHOW COURT DETAILS ";
        this->button16->UseVisualStyleBackColor = true;
        // 
        // button15
        // 
        this->button15->Location = System::Drawing::Point(34, 143);
        this->button15->Name = L"button15";
        this->button15->Size = System::Drawing::Size(159, 25);
        this->button15->TabIndex = 3;
        this->button15->Text = L"SHOW OFFICER DETAILS";
        this->button15->UseVisualStyleBackColor = true;
        // 
        // button14
        // 
        this->button14->Location = System::Drawing::Point(34, 100);
        this->button14->Name = L"button14";
        this->button14->Size = System::Drawing::Size(159, 25);
        this->button14->TabIndex = 2;
        this->button14->Text = L"SHOW ACCUSED";
        this->button14->UseVisualStyleBackColor = true;
        // 
        // button13
        // 
        this->button13->Location = System::Drawing::Point(34, 59);
        this->button13->Name = L"button13";
        this->button13->Size = System::Drawing::Size(159, 25);
        this->button13->TabIndex = 1;
        this->button13->Text = L"SHOW COMPLAINTS";
        this->button13->UseVisualStyleBackColor = true;
        // 
        // label37
        // 
        this->label37->AutoSize = true;
        this->label37->Location = System::Drawing::Point(237, 17);
        this->label37->Name = L"label37";
        this->label37->Size = System::Drawing::Size(94, 13);
        this->label37->TabIndex = 0;
        this->label37->Text = L"FIR-CASES-DATA";
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::ScrollBar;
        this->ClientSize = System::Drawing::Size(688, 438);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->tabControl1);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->tabPage8->ResumeLayout(false);
        this->tabPage8->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
        this->tabPage7->ResumeLayout(false);
        this->tabPage7->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
        this->tabPage5->ResumeLayout(false);
        this->tabPage5->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
        this->tabPage4->ResumeLayout(false);
        this->tabPage4->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
        this->tabPage3->ResumeLayout(false);
        this->tabPage3->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
        this->tabPage2->ResumeLayout(false);
        this->tabPage2->PerformLayout();
        this->tabControl1->ResumeLayout(false);
        this->tabPage9->ResumeLayout(false);
        this->tabPage9->PerformLayout();
        this->tabPage1->ResumeLayout(false);
        this->tabPage1->PerformLayout();
        this->tabPage6->ResumeLayout(false);
        this->tabPage6->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.
 

  private: System::Void button_plus_1_Click(System::Object^ sender, System::EventArgs^ e)
  {
  }

  private: System::Void button_plus_2_Click(System::Object^ sender, System::EventArgs^ e)
  {
  }
  private: System::Void out_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    label9->Text = "Record saved successfully!";
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
    tabControl1->SelectedTab = tabPage5;
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;


    tabControl1->TabPages->Add(tabPage3);
    tabControl1->TabPages->Add(tabPage4);
    tabControl1->TabPages->Add(tabPage5);
    tabControl1->TabPages->Add(tabPage6);
    tabControl1->TabPages->Add(tabPage7);
    tabControl1->TabPages->Add(tabPage8);

    tabControl1->TabPages->Remove(tabPage1);


}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    
     System::String^ cnic = textBox1->Text;
    System::String^ phone = textBox3->Text;
    System::String^ pin = textBox2->Text;

    //  user input
    if (cnic == "123456" && phone == "03000" && pin == "123") {
        tabControl1->TabPages->Add(tabPage1);
      tabControl1->SelectedTab = tabPage1;
      tabControl1->TabPages->Remove(tabPage2);
    
    }
    else {
  
        MessageBox::Show("Your information is incorrect!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
    tabControl1->TabPages->Remove(tabPage1);
}
private: System::Void tabPage1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (!tabControl1->TabPages->Contains(tabPage9)) {
        tabControl1->TabPages->Add(tabPage9);
    }

    // Select tabPage9
    tabControl1->SelectedTab = tabPage9;

    // Remove tabPage1 if it exists
    if (tabControl1->TabPages->Contains(tabPage1)) {
        tabControl1->TabPages->Remove(tabPage1);
    }

    // Remove other unnecessary tabPages (if required)
    if (tabControl1->TabPages->Contains(tabPage8)) {
        tabControl1->TabPages->Remove(tabPage8);
    }
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
    tabControl1->SelectedTab = tabPage5;
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
 
}



private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
    tabControl1->SelectedTab = tabPage5;
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
    tabControl1->SelectedTab = tabPage5;
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
    tabControl1->SelectedTab = tabPage5;
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
    tabControl1->SelectedTab = tabPage5;
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
       private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
           tabControl1->SelectedTab = tabPage1;
           tabControl1->TabPages->Add(tabPage1);

           tabControl1->SelectedTab = tabPage3;
           tabControl1->SelectedTab = tabPage4;
           tabControl1->SelectedTab = tabPage5;
           tabControl1->SelectedTab = tabPage6;
           tabControl1->SelectedTab = tabPage7;
           tabControl1->SelectedTab = tabPage8;
           tabControl1->SelectedTab = tabPage9;

           tabControl1->TabPages->Remove(tabPage3);
           tabControl1->TabPages->Remove(tabPage4);
           tabControl1->TabPages->Remove(tabPage5);
           tabControl1->TabPages->Remove(tabPage6);
           tabControl1->TabPages->Remove(tabPage7);
           tabControl1->TabPages->Remove(tabPage8);
           tabControl1->TabPages->Remove(tabPage9);
       }
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Add(tabPage1);

    tabControl1->SelectedTab = tabPage3;
    tabControl1->SelectedTab = tabPage4;
    tabControl1->SelectedTab = tabPage5;
    tabControl1->SelectedTab = tabPage6;
    tabControl1->SelectedTab = tabPage7;
    tabControl1->SelectedTab = tabPage8;
    tabControl1->SelectedTab = tabPage9;

    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage4);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage6);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    System::String^ officer_name = textBox24->Text;
    System::String^ password = textBox25->Text;
   

    //  user input
    if (officer_name == "sakina" && password == "123") {
        tabControl1->TabPages->Add(tabPage6);
        tabControl1->SelectedTab = tabPage6;
        tabControl1->TabPages->Remove(tabPage5);

    }
    else {

        MessageBox::Show("Your information is incorrect!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
   
}


private: System::Void tabPage8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {

    tabControl1->SelectedTab = tabPage9;

    MessageBox::Show("You have been logged out successfully.", "Logout", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};

}; // end of class Form1
// end of namespace CppCLRWinFormsProject

