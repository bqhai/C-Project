//#pragma once
#include <math.h>
#include <omp.h>
#include <time.h>
#include <stdlib.h>
#define m 100000000
int arr[m];
int arr2[m];
int arr3[m];
int arr4[m];
int x;
int dem = 1;
namespace TestForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::TextBox^  txtSLPhanTu;
	private: System::Windows::Forms::Button^  btnChaySongSong;

	private: System::Windows::Forms::ListBox^  lstMang;
	private: System::Windows::Forms::ListBox^  lstMang2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnTaoMang;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbThoiGianChay;
	private: System::Windows::Forms::Button^  btnChayTuanTu;


	private: System::Windows::Forms::ListBox^  lstMang3;

	private: System::Windows::Forms::Label^  lbThoiGianChay2;
	private: System::Windows::Forms::CheckBox^  chk_ShowArray;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lbTongThoiGianChay1;
	private: System::Windows::Forms::Label^  lbTongThoiGianChay2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  btnThemKetQua;
	private: System::Windows::Forms::ListBox^  lstKetQua;
	private: System::Windows::Forms::Button^  btnClearResult;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lbTongThoiGianChay3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lbThoiGianChay3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ListBox^  lstMang4;
	private: System::Windows::Forms::Button^  btnParallelQuickSortVersionCuiBap;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::CheckBox^  chkBatTat;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtSLPhanTu = (gcnew System::Windows::Forms::TextBox());
			this->btnChaySongSong = (gcnew System::Windows::Forms::Button());
			this->lstMang = (gcnew System::Windows::Forms::ListBox());
			this->lstMang2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTaoMang = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbThoiGianChay = (gcnew System::Windows::Forms::Label());
			this->btnChayTuanTu = (gcnew System::Windows::Forms::Button());
			this->lstMang3 = (gcnew System::Windows::Forms::ListBox());
			this->lbThoiGianChay2 = (gcnew System::Windows::Forms::Label());
			this->chk_ShowArray = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbTongThoiGianChay1 = (gcnew System::Windows::Forms::Label());
			this->lbTongThoiGianChay2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnThemKetQua = (gcnew System::Windows::Forms::Button());
			this->lstKetQua = (gcnew System::Windows::Forms::ListBox());
			this->btnClearResult = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lbTongThoiGianChay3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbThoiGianChay3 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lstMang4 = (gcnew System::Windows::Forms::ListBox());
			this->btnParallelQuickSortVersionCuiBap = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->chkBatTat = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// txtSLPhanTu
			// 
			this->txtSLPhanTu->Location = System::Drawing::Point(120, 64);
			this->txtSLPhanTu->Name = L"txtSLPhanTu";
			this->txtSLPhanTu->Size = System::Drawing::Size(119, 20);
			this->txtSLPhanTu->TabIndex = 4;
			// 
			// btnChaySongSong
			// 
			this->btnChaySongSong->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnChaySongSong->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnChaySongSong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnChaySongSong->Location = System::Drawing::Point(507, 100);
			this->btnChaySongSong->Name = L"btnChaySongSong";
			this->btnChaySongSong->Size = System::Drawing::Size(77, 62);
			this->btnChaySongSong->TabIndex = 5;
			this->btnChaySongSong->Text = L"Parallel QuickSort Ver 2";
			this->btnChaySongSong->UseVisualStyleBackColor = false;
			this->btnChaySongSong->Click += gcnew System::EventHandler(this, &MyForm::btnChay_Click);
			// 
			// lstMang
			// 
			this->lstMang->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lstMang->FormattingEnabled = true;
			this->lstMang->Location = System::Drawing::Point(17, 168);
			this->lstMang->Name = L"lstMang";
			this->lstMang->Size = System::Drawing::Size(67, 472);
			this->lstMang->TabIndex = 6;
			// 
			// lstMang2
			// 
			this->lstMang2->BackColor = System::Drawing::SystemColors::Info;
			this->lstMang2->FormattingEnabled = true;
			this->lstMang2->Location = System::Drawing::Point(507, 168);
			this->lstMang2->Name = L"lstMang2";
			this->lstMang2->Size = System::Drawing::Size(77, 472);
			this->lstMang2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(165, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(692, 36);
			this->label1->TabIndex = 8;
			this->label1->Text = L"---PARALLEL QUICKSORT WITH OPENMP---";
			// 
			// btnTaoMang
			// 
			this->btnTaoMang->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnTaoMang->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTaoMang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTaoMang->Location = System::Drawing::Point(17, 100);
			this->btnTaoMang->Name = L"btnTaoMang";
			this->btnTaoMang->Size = System::Drawing::Size(67, 62);
			this->btnTaoMang->TabIndex = 9;
			this->btnTaoMang->Text = L"Random Array";
			this->btnTaoMang->UseVisualStyleBackColor = false;
			this->btnTaoMang->Click += gcnew System::EventHandler(this, &MyForm::btnTaoMang_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(470, 647);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Sort time:";
			// 
			// lbThoiGianChay
			// 
			this->lbThoiGianChay->AutoSize = true;
			this->lbThoiGianChay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbThoiGianChay->Location = System::Drawing::Point(563, 647);
			this->lbThoiGianChay->Name = L"lbThoiGianChay";
			this->lbThoiGianChay->Size = System::Drawing::Size(51, 20);
			this->lbThoiGianChay->TabIndex = 11;
			this->lbThoiGianChay->Text = L"label3";
			// 
			// btnChayTuanTu
			// 
			this->btnChayTuanTu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnChayTuanTu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnChayTuanTu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnChayTuanTu->Location = System::Drawing::Point(171, 100);
			this->btnChayTuanTu->Name = L"btnChayTuanTu";
			this->btnChayTuanTu->Size = System::Drawing::Size(77, 62);
			this->btnChayTuanTu->TabIndex = 12;
			this->btnChayTuanTu->Text = L"QuickSort";
			this->btnChayTuanTu->UseVisualStyleBackColor = false;
			this->btnChayTuanTu->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lstMang3
			// 
			this->lstMang3->BackColor = System::Drawing::SystemColors::Info;
			this->lstMang3->FormattingEnabled = true;
			this->lstMang3->Location = System::Drawing::Point(171, 168);
			this->lstMang3->Name = L"lstMang3";
			this->lstMang3->Size = System::Drawing::Size(77, 472);
			this->lstMang3->TabIndex = 13;
			// 
			// lbThoiGianChay2
			// 
			this->lbThoiGianChay2->AutoSize = true;
			this->lbThoiGianChay2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbThoiGianChay2->Location = System::Drawing::Point(225, 647);
			this->lbThoiGianChay2->Name = L"lbThoiGianChay2";
			this->lbThoiGianChay2->Size = System::Drawing::Size(51, 20);
			this->lbThoiGianChay2->TabIndex = 15;
			this->lbThoiGianChay2->Text = L"label3";
			// 
			// chk_ShowArray
			// 
			this->chk_ShowArray->AutoSize = true;
			this->chk_ShowArray->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->chk_ShowArray->Location = System::Drawing::Point(245, 61);
			this->chk_ShowArray->Name = L"chk_ShowArray";
			this->chk_ShowArray->Size = System::Drawing::Size(118, 24);
			this->chk_ShowArray->TabIndex = 16;
			this->chk_ShowArray->Text = L"Show Array\?";
			this->chk_ShowArray->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(470, 670);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Total time:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(132, 670);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Total time:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(132, 647);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 20);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Sort time:";
			// 
			// lbTongThoiGianChay1
			// 
			this->lbTongThoiGianChay1->AutoSize = true;
			this->lbTongThoiGianChay1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbTongThoiGianChay1->Location = System::Drawing::Point(563, 670);
			this->lbTongThoiGianChay1->Name = L"lbTongThoiGianChay1";
			this->lbTongThoiGianChay1->Size = System::Drawing::Size(51, 20);
			this->lbTongThoiGianChay1->TabIndex = 20;
			this->lbTongThoiGianChay1->Text = L"label3";
			// 
			// lbTongThoiGianChay2
			// 
			this->lbTongThoiGianChay2->AutoSize = true;
			this->lbTongThoiGianChay2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbTongThoiGianChay2->Location = System::Drawing::Point(225, 670);
			this->lbTongThoiGianChay2->Name = L"lbTongThoiGianChay2";
			this->lbTongThoiGianChay2->Size = System::Drawing::Size(51, 20);
			this->lbTongThoiGianChay2->TabIndex = 21;
			this->lbTongThoiGianChay2->Text = L"label3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(745, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 40);
			this->label3->TabIndex = 22;
			this->label3->Text = L"---Result---";
			// 
			// btnThemKetQua
			// 
			this->btnThemKetQua->BackColor = System::Drawing::Color::LightGreen;
			this->btnThemKetQua->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnThemKetQua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnThemKetQua->Location = System::Drawing::Point(304, 699);
			this->btnThemKetQua->Name = L"btnThemKetQua";
			this->btnThemKetQua->Size = System::Drawing::Size(138, 41);
			this->btnThemKetQua->TabIndex = 24;
			this->btnThemKetQua->Text = L"Add to result";
			this->btnThemKetQua->UseVisualStyleBackColor = false;
			this->btnThemKetQua->Click += gcnew System::EventHandler(this, &MyForm::btnThemKetQua_Click);
			// 
			// lstKetQua
			// 
			this->lstKetQua->BackColor = System::Drawing::SystemColors::Info;
			this->lstKetQua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lstKetQua->FormattingEnabled = true;
			this->lstKetQua->ItemHeight = 20;
			this->lstKetQua->Location = System::Drawing::Point(659, 168);
			this->lstKetQua->Name = L"lstKetQua";
			this->lstKetQua->Size = System::Drawing::Size(366, 364);
			this->lstKetQua->TabIndex = 28;
			// 
			// btnClearResult
			// 
			this->btnClearResult->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClearResult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClearResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClearResult->Location = System::Drawing::Point(708, 543);
			this->btnClearResult->Name = L"btnClearResult";
			this->btnClearResult->Size = System::Drawing::Size(131, 55);
			this->btnClearResult->TabIndex = 29;
			this->btnClearResult->Text = L"Clear Result";
			this->btnClearResult->UseVisualStyleBackColor = false;
			this->btnClearResult->Click += gcnew System::EventHandler(this, &MyForm::btnClearResult_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(845, 543);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(131, 55);
			this->btnExit->TabIndex = 30;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(13, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 20);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Size of array:";
			// 
			// lbTongThoiGianChay3
			// 
			this->lbTongThoiGianChay3->AutoSize = true;
			this->lbTongThoiGianChay3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbTongThoiGianChay3->Location = System::Drawing::Point(394, 670);
			this->lbTongThoiGianChay3->Name = L"lbTongThoiGianChay3";
			this->lbTongThoiGianChay3->Size = System::Drawing::Size(51, 20);
			this->lbTongThoiGianChay3->TabIndex = 37;
			this->lbTongThoiGianChay3->Text = L"label3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(301, 670);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 20);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Total time:";
			// 
			// lbThoiGianChay3
			// 
			this->lbThoiGianChay3->AutoSize = true;
			this->lbThoiGianChay3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbThoiGianChay3->Location = System::Drawing::Point(394, 647);
			this->lbThoiGianChay3->Name = L"lbThoiGianChay3";
			this->lbThoiGianChay3->Size = System::Drawing::Size(51, 20);
			this->lbThoiGianChay3->TabIndex = 35;
			this->lbThoiGianChay3->Text = L"label3";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(301, 647);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 20);
			this->label11->TabIndex = 34;
			this->label11->Text = L"Sort time:";
			// 
			// lstMang4
			// 
			this->lstMang4->BackColor = System::Drawing::SystemColors::Info;
			this->lstMang4->FormattingEnabled = true;
			this->lstMang4->Location = System::Drawing::Point(338, 168);
			this->lstMang4->Name = L"lstMang4";
			this->lstMang4->Size = System::Drawing::Size(77, 472);
			this->lstMang4->TabIndex = 33;
			// 
			// btnParallelQuickSortVersionCuiBap
			// 
			this->btnParallelQuickSortVersionCuiBap->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnParallelQuickSortVersionCuiBap->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnParallelQuickSortVersionCuiBap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnParallelQuickSortVersionCuiBap->Location = System::Drawing::Point(338, 100);
			this->btnParallelQuickSortVersionCuiBap->Name = L"btnParallelQuickSortVersionCuiBap";
			this->btnParallelQuickSortVersionCuiBap->Size = System::Drawing::Size(77, 62);
			this->btnParallelQuickSortVersionCuiBap->TabIndex = 32;
			this->btnParallelQuickSortVersionCuiBap->Text = L"Parallel QuickSort Ver 1";
			this->btnParallelQuickSortVersionCuiBap->UseVisualStyleBackColor = false;
			this->btnParallelQuickSortVersionCuiBap->Click += gcnew System::EventHandler(this, &MyForm::btnParallelQuickSortVersionCuiBap_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Red;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Yellow;
			this->label8->Location = System::Drawing::Point(13, 748);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 20);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Notes:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(29, 777);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(445, 20);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Ver 1: Song song hóa thực hiện trong chính thuật toán";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(29, 807);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(399, 20);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Ver 2: Song song hóa thực hiện ngoài thuật toán";
			// 
			// chkBatTat
			// 
			this->chkBatTat->AutoSize = true;
			this->chkBatTat->Checked = true;
			this->chkBatTat->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBatTat->Location = System::Drawing::Point(421, 124);
			this->chkBatTat->Name = L"chkBatTat";
			this->chkBatTat->Size = System::Drawing::Size(63, 17);
			this->chkBatTat->TabIndex = 41;
			this->chkBatTat->Text = L"Turn on";
			this->chkBatTat->UseVisualStyleBackColor = true;
			this->chkBatTat->CheckedChanged += gcnew System::EventHandler(this, &MyForm::chkBatTat_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1037, 853);
			this->Controls->Add(this->chkBatTat);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lbTongThoiGianChay3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lbThoiGianChay3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->lstMang4);
			this->Controls->Add(this->btnParallelQuickSortVersionCuiBap);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClearResult);
			this->Controls->Add(this->lstKetQua);
			this->Controls->Add(this->btnThemKetQua);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbTongThoiGianChay2);
			this->Controls->Add(this->lbTongThoiGianChay1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->chk_ShowArray);
			this->Controls->Add(this->lbThoiGianChay2);
			this->Controls->Add(this->lstMang3);
			this->Controls->Add(this->btnChayTuanTu);
			this->Controls->Add(this->lbThoiGianChay);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnTaoMang);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lstMang2);
			this->Controls->Add(this->lstMang);
			this->Controls->Add(this->btnChaySongSong);
			this->Controls->Add(this->txtSLPhanTu);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int partition(int arr[], int low, int high){
			int i, j, temp, key;
			key = arr[low];
			i= low + 1;
			j= high;
			while(1){
				while(i < high && key >= arr[i])
					i++;
				while(key < arr[j])
					j--;
				if(i < j){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
				else{
					temp= arr[low];
					arr[low] = arr[j];
					arr[j]= temp;
					return(j);
				}
			}
		}

		/* The main function that implements QuickSort
		arr[] --> Array to be sorted,
		low  --> Starting index,
		high  --> Ending index */
		void quicksort(int arr[], int low, int high)
		{
			int j;
			if(low < high){
				j = partition(arr, low, high);
				quicksort(arr, low, j - 1);
				quicksort(arr, j + 1, high);
			}
		}

		/*-----------------------------------------------------------------------------*/
		int partition2(int arr[], int low, int high){
			int i, j, temp, key;
			key = arr[low];
			i= low + 1;
			j= high;
			while(1){
				while(i < high && key >= arr[i])
					i++;
				while(key < arr[j])
					j--;
				if(i < j){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
				else{
					temp= arr[low];
					arr[low] = arr[j];
					arr[j]= temp;
					return(j);
				}
			}
		}

		/* The main function that implements QuickSort
		arr[] --> Array to be sorted,
		low  --> Starting index,
		high  --> Ending index */
		void quicksort2(int arr[], int low, int high)
		{
			int j;
			if(low < high){
				j = partition2(arr, low, high);
#pragma omp parallel sections //Khởi tạo vùng song song
				{
#pragma omp section //Khởi tạo luồng 1
					{
						quicksort2(arr, low, j - 1);//Thread 1
					}
#pragma omp section //Khởi tạo luồng 2
					{
						quicksort2(arr, j + 1, high);//Thread 2
					}
				}		
			}
		}
	private: System::Void btnTaoMang_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Tạo mảng ngẫu nhiên
				 lstMang->Items->Clear();
				 if(txtSLPhanTu->Text == "")
				 {
					 MessageBox::Show("You must enter a value!!");
					 return;
				 }
				 x = int::Parse(txtSLPhanTu->Text);
				 for(int i=0;i<x;i++){				 
					 arr[i]=rand()%x; //Gán giá trị ngẫu nhiên cho mảng
					 if(chk_ShowArray->Checked == true)
					 {
						 lstMang->Items->Add(arr[i]);		
					 }						
				 }
				 MessageBox::Show("Done!");
			 }
	private: System::Void btnChay_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Chạy song song ngoài thuật toán v2
				 if(txtSLPhanTu->Text == "")
				 {
					 MessageBox::Show("Nothing to sort!!");
					 return;
				 }
				 int start = clock();//start TotalTime	
				 lstMang2->Items->Clear();
				 lbThoiGianChay->Text = "";
				 lbTongThoiGianChay1->Text = "";
				 for(int i=0;i<x;i++){					
					 arr2[i] = arr[i];		
				 }

				 int j = partition(arr2,0,x-1);// Trả về giá trị của phần tử chốt
				 int start_s=clock();//start SortTime
#pragma omp parallel sections //Khởi tạo vùng song song
				 {
#pragma omp section //Khởi tạo luồng 1
					 {
						 quicksort(arr2,0, j - 1);//Thread 1
					 }
#pragma omp section //Khởi tạo luồng 2
					 {
						 quicksort(arr2, j + 1, x-1);//Thread 2
					 }
				 }
				 int stop_s=clock();//end SortTime
				 double timeuse = (double)(stop_s - start_s)/CLOCKS_PER_SEC;
				 lbThoiGianChay->Text = "" + timeuse + "s";
				 if(chk_ShowArray->Checked == true)
				 {
					 for(int i = 0; i < x; i++)
					 {
						 lstMang2->Items->Add(arr2[i]);
					 }			
				 }
				 int stop=clock();//end TotalTime
				 double timeuse2 = (double)(stop - start)/CLOCKS_PER_SEC;
				 lbTongThoiGianChay1->Text = "" + timeuse2 + "s";
			 }
	private: System::Void btnParallelQuickSortVersionCuiBap_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Chạy song song version cùi bắp (song song trong chính thuật toán)
				 if(txtSLPhanTu->Text == "")
				 {
					 MessageBox::Show("Nothing to sort!!");
					 return;
				 }	 
				 int start = clock();//start TotalTime	
				 lstMang4->Items->Clear();
				 lbThoiGianChay3->Text = "";
				 lbTongThoiGianChay3->Text = "";
				 for(int i=0;i<x;i++){					
					 arr4[i] = arr[i];		
				 }
				 /*----------------------------------*/
				 int start_s=clock();//start SortTime
				 quicksort2(arr4,0, x - 1);
				 int stop_s=clock();//end SortTime
				 /*----------------------------------*/
				 double timeuse = (double)(stop_s - start_s)/CLOCKS_PER_SEC;
				 lbThoiGianChay3->Text = "" + timeuse + "s";
				 if(chk_ShowArray->Checked == true)
				 {
					 for(int i = 0; i < x; i++)
					 {
						 lstMang4->Items->Add(arr4[i]);
					 }			
				 }
				 int stop=clock();//end TotalTime
				 double timeuse2 = (double)(stop - start)/CLOCKS_PER_SEC;
				 lbTongThoiGianChay3->Text = "" + timeuse2 + "s";
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Chạy tuần tự
				 if(txtSLPhanTu->Text == "")
				 {
					 MessageBox::Show("Nothing to sort!!");
					 return;
				 }
				 int start = clock();//start TotalTime
				 for(int i=0;i<x;i++){					
					 arr3[i] = arr[i];		
				 }
				 lstMang3->Items->Clear();
				 lbThoiGianChay2->Text = "";
				 lbTongThoiGianChay2->Text = "";
				 /*----------------------------------*/
				 int start_s=clock();//start SortTime
				 quicksort(arr3,0, x - 1);
				 int stop_s=clock();//end sortTime
				 /*----------------------------------*/
				 double timeuse = (double)(stop_s - start_s)/CLOCKS_PER_SEC;
				 lbThoiGianChay2->Text = "" + timeuse + "s";
				 if(chk_ShowArray->Checked == true)
				 {
					 for(int i = 0; i < x; i++)
					 {
						 lstMang3->Items->Add(arr3[i]);
					 }			
				 }	
				 int stop=clock();//end TotalTime
				 double timeuse2 = (double)(stop - start)/CLOCKS_PER_SEC;
				 lbTongThoiGianChay2->Text = "" + timeuse2 + "s";
			 }
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 txtSLPhanTu->Focus();
				 lbThoiGianChay->Text = "";
				 lbTongThoiGianChay1->Text = "";
				 lbThoiGianChay2->Text = "";
				 lbTongThoiGianChay2->Text = "";
				 lbThoiGianChay3->Text = "";
				 lbTongThoiGianChay3->Text = "";
				 lstKetQua->Items->Add("Times"+"	"+"Serial"+"	"+"Parallel 1"+"	"+"Parallel 2");

			 }
	private: System::Void btnThemKetQua_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lbThoiGianChay->Text == "" || lbThoiGianChay2->Text == "")
				 {
					 MessageBox::Show("No result found!");
					 return;
				 } 
				 lstKetQua->Items->Add(dem+"	"+lbThoiGianChay2->Text+"	"+lbThoiGianChay3->Text+"	"+lbThoiGianChay->Text);
				 dem++;
			 }
	private: System::Void btnClearResult_Click(System::Object^  sender, System::EventArgs^  e) {
				 lstKetQua->Items->Clear();
				 lstKetQua->Items->Add("Times"+"	"+"Serial"+"	"+"Parallel 1"+"	"+"Parallel 2");
				 dem = 1;
			 }
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }

			 //	private: System::Void btnChayCungLuc_Click(System::Object^  sender, System::EventArgs^  e) {
			 //				 //Chạy song song
			 //				
			 //				 lstMang2->Items->Clear();
			 //				 lstMang3->Items->Clear();
			 //				 lbThoiGianChay->Text = "";
			 //				 lbTongThoiGianChay1->Text = "";
			 //				 lbThoiGianChay2->Text = "";
			 //				 lbTongThoiGianChay2->Text = "";
			 //				 for(int i=0;i<x;i++){					
			 //					 arr2[i] = arr[i];
			 //					 arr3[i] = arr[i];
			 //				 }
			 //
			 //				 int j = partition(arr2,0,x-1);// Trả về giá trị của phần tử chốt
			 //				 
			 //				 double timeuse, timeuse2;
			 //#pragma omp parallel sections
			 //				 {
			 //#pragma omp section
			 //					 {
			 //						 //double start = omp_get_wtime();//start SortTime
			 //						 quicksort(arr2,0, j - 1);//Thread 1
			 //						 //double end = omp_get_wtime();//end SortTime
			 //						 //double timeuse = (double)(end - start)/CLOCKS_PER_SEC;
			 //						 
			 //					 }
			 //#pragma omp section
			 //					 {
			 //						 //int start_s2=clock();//start SortTime
			 //						 quicksort(arr2, j + 1, x-1);//Thread 2
			 //						 //int stop_s2=clock();//end SortTime
			 //						 //double timeuse2 = (double)(stop_s2 - start_s2)/CLOCKS_PER_SEC;
			 //						 //double tongthoigian = timeuse + timeuse2;
			 //						 /*lbThoiGianChay->Text = "" + timeuse2 + "s";*/
			 //					 }
			 //
			 //#pragma omp section	 
			 //					 {					 
			 //						 double start = omp_get_wtime();//start SortTime
			 //						 quicksort(arr3,0, x - 1);//Thread 3
			 //						 double end = omp_get_wtime();//end SortTime
			 //						 double timeuse = (double)(end - start)/CLOCKS_PER_SEC;
			 //						 lbThoiGianChay2->Text = "" + timeuse + "s";
			 //					 }
			 //
			 //				 }
			 //
			 //
			 //				 if(chk_ShowArray->Checked == true)
			 //				 {
			 //					 for(int i = 0; i < x; i++)
			 //					 {
			 //						 lstMang2->Items->Add(arr2[i]);
			 //						 lstMang3->Items->Add(arr3[i]);
			 //					 }			
			 //				 }				 
			 //			 }


	private: System::Void chkBatTat_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(chkBatTat->Checked == false)
				 {
					 btnParallelQuickSortVersionCuiBap->Enabled = false;					
					 lstMang4->Enabled = false;
					 label11->Enabled = false;
					 label9->Enabled = false;
					 lbThoiGianChay3->Enabled = false;
					 lbTongThoiGianChay3->Enabled = false;
					 lbThoiGianChay3->Text = "";
					 lbTongThoiGianChay3->Text = "";

				 }
				 else
				 {
					 btnParallelQuickSortVersionCuiBap->Enabled = true;
					 lstMang4->Enabled = true;
					 label11->Enabled = true;
					 label9->Enabled = true;
					 lbThoiGianChay3->Enabled = true;
					 lbTongThoiGianChay3->Enabled = true;

				 }
			 }
};
}
