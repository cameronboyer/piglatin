#pragma once
#include "stdafx.h"


namespace PigLatin2 {

	using namespace std;
	
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::TextBox^  txtEnglish;
	protected: 
	private: System::Windows::Forms::TextBox^  txtLatin;
	private: System::Windows::Forms::Button^  btnScramble;
	private: System::Windows::Forms::Button^  btnUnscramble;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnLoad;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  btnClearLatin;
	private: System::Windows::Forms::Button^  btnClearEnglish;
	private: System::Windows::Forms::RadioButton^  rbEnglish;
	private: System::Windows::Forms::RadioButton^  rbPiglatin;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  rbSaveEnglish;
	private: System::Windows::Forms::RadioButton^  rbSaveLatin;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->txtEnglish = (gcnew System::Windows::Forms::TextBox());
			this->txtLatin = (gcnew System::Windows::Forms::TextBox());
			this->btnScramble = (gcnew System::Windows::Forms::Button());
			this->btnUnscramble = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnClearLatin = (gcnew System::Windows::Forms::Button());
			this->btnClearEnglish = (gcnew System::Windows::Forms::Button());
			this->rbEnglish = (gcnew System::Windows::Forms::RadioButton());
			this->rbPiglatin = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbSaveEnglish = (gcnew System::Windows::Forms::RadioButton());
			this->rbSaveLatin = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtEnglish
			// 
			this->txtEnglish->Location = System::Drawing::Point(13, 13);
			this->txtEnglish->Multiline = true;
			this->txtEnglish->Name = L"txtEnglish";
			this->txtEnglish->Size = System::Drawing::Size(485, 202);
			this->txtEnglish->TabIndex = 0;
			// 
			// txtLatin
			// 
			this->txtLatin->Location = System::Drawing::Point(13, 250);
			this->txtLatin->Multiline = true;
			this->txtLatin->Name = L"txtLatin";
			this->txtLatin->Size = System::Drawing::Size(485, 216);
			this->txtLatin->TabIndex = 1;
			// 
			// btnScramble
			// 
			this->btnScramble->Location = System::Drawing::Point(13, 221);
			this->btnScramble->Name = L"btnScramble";
			this->btnScramble->Size = System::Drawing::Size(75, 23);
			this->btnScramble->TabIndex = 2;
			this->btnScramble->Text = L"Translate \\/";
			this->btnScramble->UseVisualStyleBackColor = true;
			this->btnScramble->Click += gcnew System::EventHandler(this, &Form1::btnScramble_Click);
			// 
			// btnUnscramble
			// 
			this->btnUnscramble->Location = System::Drawing::Point(342, 221);
			this->btnUnscramble->Name = L"btnUnscramble";
			this->btnUnscramble->Size = System::Drawing::Size(75, 23);
			this->btnUnscramble->TabIndex = 3;
			this->btnUnscramble->Text = L"Translate /\\";
			this->btnUnscramble->UseVisualStyleBackColor = true;
			this->btnUnscramble->Click += gcnew System::EventHandler(this, &Form1::btnUnscramble_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(153, 495);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 4;
			this->btnSave->Text = L"Save File";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(423, 495);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(75, 23);
			this->btnLoad->TabIndex = 5;
			this->btnLoad->Text = L"Load File";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &Form1::btnLoad_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// btnClearLatin
			// 
			this->btnClearLatin->Location = System::Drawing::Point(94, 221);
			this->btnClearLatin->Name = L"btnClearLatin";
			this->btnClearLatin->Size = System::Drawing::Size(75, 23);
			this->btnClearLatin->TabIndex = 6;
			this->btnClearLatin->Text = L"Clear \\/";
			this->btnClearLatin->UseVisualStyleBackColor = true;
			this->btnClearLatin->Click += gcnew System::EventHandler(this, &Form1::btnClearLatin_Click);
			// 
			// btnClearEnglish
			// 
			this->btnClearEnglish->Location = System::Drawing::Point(423, 221);
			this->btnClearEnglish->Name = L"btnClearEnglish";
			this->btnClearEnglish->Size = System::Drawing::Size(75, 23);
			this->btnClearEnglish->TabIndex = 7;
			this->btnClearEnglish->Text = L"Clear /\\";
			this->btnClearEnglish->UseVisualStyleBackColor = true;
			this->btnClearEnglish->Click += gcnew System::EventHandler(this, &Form1::btnClearEnglish_Click);
			// 
			// rbEnglish
			// 
			this->rbEnglish->AutoSize = true;
			this->rbEnglish->Checked = true;
			this->rbEnglish->Location = System::Drawing::Point(6, 19);
			this->rbEnglish->Name = L"rbEnglish";
			this->rbEnglish->Size = System::Drawing::Size(59, 17);
			this->rbEnglish->TabIndex = 8;
			this->rbEnglish->TabStop = true;
			this->rbEnglish->Text = L"English";
			this->rbEnglish->UseVisualStyleBackColor = true;
			// 
			// rbPiglatin
			// 
			this->rbPiglatin->AutoSize = true;
			this->rbPiglatin->Location = System::Drawing::Point(71, 19);
			this->rbPiglatin->Name = L"rbPiglatin";
			this->rbPiglatin->Size = System::Drawing::Size(59, 17);
			this->rbPiglatin->TabIndex = 9;
			this->rbPiglatin->Text = L"Piglatin";
			this->rbPiglatin->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbEnglish);
			this->groupBox1->Controls->Add(this->rbPiglatin);
			this->groupBox1->Location = System::Drawing::Point(283, 472);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(134, 48);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select type for Load";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbSaveEnglish);
			this->groupBox2->Controls->Add(this->rbSaveLatin);
			this->groupBox2->Location = System::Drawing::Point(13, 472);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(134, 48);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Select type for Save";
			// 
			// rbSaveEnglish
			// 
			this->rbSaveEnglish->AutoSize = true;
			this->rbSaveEnglish->Checked = true;
			this->rbSaveEnglish->Location = System::Drawing::Point(6, 19);
			this->rbSaveEnglish->Name = L"rbSaveEnglish";
			this->rbSaveEnglish->Size = System::Drawing::Size(59, 17);
			this->rbSaveEnglish->TabIndex = 8;
			this->rbSaveEnglish->TabStop = true;
			this->rbSaveEnglish->Text = L"English";
			this->rbSaveEnglish->UseVisualStyleBackColor = true;
			// 
			// rbSaveLatin
			// 
			this->rbSaveLatin->AutoSize = true;
			this->rbSaveLatin->Location = System::Drawing::Point(71, 19);
			this->rbSaveLatin->Name = L"rbSaveLatin";
			this->rbSaveLatin->Size = System::Drawing::Size(59, 17);
			this->rbSaveLatin->TabIndex = 9;
			this->rbSaveLatin->Text = L"Piglatin";
			this->rbSaveLatin->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 532);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnClearEnglish);
			this->Controls->Add(this->btnClearLatin);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnUnscramble);
			this->Controls->Add(this->btnScramble);
			this->Controls->Add(this->txtLatin);
			this->Controls->Add(this->txtEnglish);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(518, 557);
			this->MinimumSize = System::Drawing::Size(518, 557);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pig Latin Tool";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 
			 }

//allows conversion from basic string to String
void MarshalString ( String ^ s, string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}
private: System::Void btnScramble_Click(System::Object^  sender, System::EventArgs^  e) {

			 //clear text
			Form1::txtLatin->Text = "";
			CWrapper scramb;

			//grab text from english
			String^ temp = txtEnglish->Text;
			string input;
			//turn it into a standard string
			MarshalString(temp,input);

			/*call function turn it into String, assign it to
			text box 
			*/
			Form1::txtLatin->Text = gcnew String(scramb.Scramble(input).c_str());	

			scramb.~CWrapper();
		 }
private: System::Void btnUnscramble_Click(System::Object^  sender, System::EventArgs^  e) {
			//clear text
			Form1::txtEnglish->Text = "";
			CWrapper scramb;

			//grab text from english
			String ^ temp = txtLatin->Text;
			string input;
			//turn it into a standard string
			MarshalString(temp,input);

			/*call function turn it into String, assign it to
			text box 
			*/
			Form1::txtEnglish->Text = gcnew String(scramb.UnScramble(input).c_str());	

			scramb.~CWrapper();
		 }
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {

			CWrapper file;
			if(rbSaveEnglish->Checked.Equals(true))
			{
				String^ temp = txtEnglish->Text;
				//makes container for conversion
				string data;
				//converts
				MarshalString(temp,data);
				//0 is for english but its not fully implemented
				file.saveFile(data,0,"text.etxt");

			}
			else
			{
				String^ temp = txtLatin->Text;
				//makes container for conversion
				string data;
				//converts
				MarshalString(temp,data);
				//0 is for english but its not fully implemented
				file.saveFile(data,0,"text.ptxt");
			}
			

			
			
			

			
 
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }


private: System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(rbPiglatin->Checked.Equals(true))
			 {
			 openFileDialog1->Filter = "Piglatin file|*.ptxt";
			 openFileDialog1->Title = "Select a Piglatin text File";
			 }
			 else
			 {
				openFileDialog1->Filter = "English file|*.etxt";
				openFileDialog1->Title = "Select an English text File";
			 }

			
			 



			 //this is to easy
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {	
				String^ str = openFileDialog1->FileName; //get the path of the selected file
				StreamReader ^myStream = gcnew StreamReader(str);

				while(!myStream->EndOfStream){
					String^ line = myStream->ReadLine();
					if(rbEnglish->Checked.Equals(true))
					{
						txtEnglish->Text = line->ToString();
					}else
					{
					txtLatin->Text = line->ToString();
					}
				}
				myStream->Close();	
			 }

		 }
private: System::Void btnClearLatin_Click(System::Object^  sender, System::EventArgs^  e) {

			 txtLatin->Text = "";
		 }
private: System::Void btnClearEnglish_Click(System::Object^  sender, System::EventArgs^  e) {
			  txtEnglish->Text = "";
		 }
};
}

