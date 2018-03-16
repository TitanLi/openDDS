#pragma once

namespace DDS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox_setting;

	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox_ini;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox_mesage;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;




	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_setting = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox_ini = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_mesage = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"AR BLANCA", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(219, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DDS Demo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(13, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Setting:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(28, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"*.ini:";
			// 
			// textBox_setting
			// 
			this->textBox_setting->Location = System::Drawing::Point(75, 54);
			this->textBox_setting->Name = L"textBox_setting";
			this->textBox_setting->Size = System::Drawing::Size(265, 22);
			this->textBox_setting->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(346, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"選擇檔案";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox_ini
			// 
			this->textBox_ini->Location = System::Drawing::Point(74, 84);
			this->textBox_ini->Name = L"textBox_ini";
			this->textBox_ini->Size = System::Drawing::Size(266, 22);
			this->textBox_ini->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(346, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"選擇檔案";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(2, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Message:";
			// 
			// textBox_mesage
			// 
			this->textBox_mesage->Location = System::Drawing::Point(75, 115);
			this->textBox_mesage->Name = L"textBox_mesage";
			this->textBox_mesage->Size = System::Drawing::Size(265, 22);
			this->textBox_mesage->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(347, 113);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"送出";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(75, 143);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(265, 88);
			this->listBox1->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(435, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"更新";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(435, 82);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"更新";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 261);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox_mesage);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox_ini);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_setting);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"DDS";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 2;
			openFileDialog1->RestoreDirectory = true;

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				textBox_setting->Text = openFileDialog1->FileName;
			}
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog;

			openFileDialog2->InitialDirectory = "c:\\";
			openFileDialog2->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog2->FilterIndex = 2;
			openFileDialog2->RestoreDirectory = true;

			if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				textBox_ini->Text = openFileDialog2->FileName;
			}
		}
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^ msg = textBox_mesage->Text;
			DateTime localDate = DateTime::Now;
			if (msg != "") {
				listBox1->Items->Add(localDate.ToString() + ": "+ msg);
				textBox_mesage->Text = "";
			}
		}
	};
}
