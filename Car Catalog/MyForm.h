#pragma once
#include "MyForm1.h"
#include "Service_r.h"

namespace CarCatalog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;
	using namespace System::Text;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String ^ Mark;
		String ^ Model;
		String ^ Modify;
		String ^ Info;
		String ^ imgsrc;
		Service_r^ form3 = gcnew Service_r;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	public:
		MyForm(void)
		{
			InitializeComponent();
			form3->Owner = this;
			form3->Hide();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Требуемый метод для поддержки конструктора — не изменяйте 
			 /// содержимое этого метода с помощью редактора кода.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
				 this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->BackColor = System::Drawing::Color::Transparent;
				 this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				 this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->button1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->button1->Location = System::Drawing::Point(11, 209);
				 this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(145, 44);
				 this->button1->TabIndex = 1;
				 this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
				 this->button1->UseVisualStyleBackColor = false;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Location = System::Drawing::Point(12, 123);
				 this->comboBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(144, 21);
				 this->comboBox1->TabIndex = 7;
				 this->comboBox1->Text = L"Марка";
				 this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
				 // 
				 // comboBox2
				 // 
				 this->comboBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->comboBox2->FormattingEnabled = true;
				 this->comboBox2->Location = System::Drawing::Point(12, 153);
				 this->comboBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				 this->comboBox2->Name = L"comboBox2";
				 this->comboBox2->Size = System::Drawing::Size(144, 21);
				 this->comboBox2->TabIndex = 36;
				 this->comboBox2->Text = L"Модель";
				 this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
				 // 
				 // comboBox3
				 // 
				 this->comboBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->comboBox3->FormattingEnabled = true;
				 this->comboBox3->Location = System::Drawing::Point(12, 182);
				 this->comboBox3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				 this->comboBox3->Name = L"comboBox3";
				 this->comboBox3->Size = System::Drawing::Size(144, 21);
				 this->comboBox3->TabIndex = 37;
				 this->comboBox3->Text = L"Модификация";
				 this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
				 // 
				 // button2
				 // 
				 this->button2->BackColor = System::Drawing::Color::Transparent;
				 this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
				 this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->button2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->button2->Location = System::Drawing::Point(729, 558);
				 this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(149, 45);
				 this->button2->TabIndex = 40;
				 this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
				 this->button2->UseVisualStyleBackColor = false;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->BackColor = System::Drawing::Color::Transparent;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 this->label1->Location = System::Drawing::Point(9, 589);
				 this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(315, 14);
				 this->label1->TabIndex = 41;
				 this->label1->Text = L"Created by Vitalii Kolomiichuk - INTITA 2018";
				 // 
				 // button3
				 // 
				 this->button3->BackColor = System::Drawing::Color::Transparent;
				 this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
				 this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->button3->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold));
				 this->button3->Location = System::Drawing::Point(12, 505);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(146, 44);
				 this->button3->TabIndex = 42;
				 this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
				 this->button3->UseVisualStyleBackColor = false;
				 this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
				 // 
				 // pictureBox4
				 // 
				 this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
				 this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				 this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
				 this->pictureBox4->Location = System::Drawing::Point(170, 123);
				 this->pictureBox4->Name = L"pictureBox4";
				 this->pictureBox4->Size = System::Drawing::Size(707, 129);
				 this->pictureBox4->TabIndex = 48;
				 this->pictureBox4->TabStop = false;
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
				 this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->pictureBox1->ImageLocation = L"img/A1.jpg";
				 this->pictureBox1->Location = System::Drawing::Point(14, 269);
				 this->pictureBox1->MaximumSize = System::Drawing::Size(144, 81);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(144, 81);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox1->TabIndex = 49;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->Visible = false;
				 this->pictureBox1->BackgroundImageChanged += gcnew System::EventHandler(this, &MyForm::button3_Click);
				 this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
				 // 
				 // richTextBox1
				 // 
				 this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->richTextBox1->Location = System::Drawing::Point(170, 269);
				 this->richTextBox1->Name = L"richTextBox1";
				 this->richTextBox1->Size = System::Drawing::Size(707, 280);
				 this->richTextBox1->TabIndex = 50;
				 this->richTextBox1->Text = L"";
				 this->richTextBox1->Visible = false;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->ClientSize = System::Drawing::Size(889, 613);
				 this->Controls->Add(this->richTextBox1);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->pictureBox4);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->comboBox3);
				 this->Controls->Add(this->comboBox2);
				 this->Controls->Add(this->comboBox1);
				 this->Controls->Add(this->button1);
				 this->DoubleBuffered = true;
				 this->ForeColor = System::Drawing::SystemColors::ActiveCaption;
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				 this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				 this->Name = L"MyForm";
				 this->Text = L"NCC";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			try {
				SQLiteConnection^ db = nullptr;
				db = gcnew SQLiteConnection();
				db->ConnectionString = "Data Source=nauto.db3";
				db->Open();
				SQLiteCommand ^cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = "SELECT * FROM NAUTO WHERE MARK=@Mark and MODEL=@Model and MODIFY=@Modify";
				cmdSelect->Parameters->AddWithValue("@Mark", Mark);
				cmdSelect->Parameters->AddWithValue("@Model", Model);
				cmdSelect->Parameters->AddWithValue("@Modify", Modify);
				SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				if (reader->HasRows) {
					richTextBox1->Visible = true;
					pictureBox1->Visible = true;
					StringBuilder ^sb = gcnew StringBuilder();
					while (reader->Read()) {
						sb->Append(reader->GetValue(3)->ToString());
						sb->AppendLine();
						imgsrc = reader->GetValue(4)->ToString();
						pictureBox1->ImageLocation = imgsrc;
					}
					richTextBox1->Text = sb->ToString()->Replace('*', '\u000D');
				}
				else richTextBox1->Text = "Данные отсутствуют";
			}
			catch (Exception ^e) {
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying NAUTO table ...");
			}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		comboBox2->Items->Clear();
		Mark = comboBox1->Text;
		try {
			SQLiteConnection^ db = nullptr;
			db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=nauto.db3";
			db->Open();
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = "SELECT * FROM NAUTO WHERE MARK=@Mark";
			cmdSelect->Parameters->AddWithValue("@Mark", Mark);
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			if (reader->HasRows) {
				StringBuilder ^sb = gcnew StringBuilder();
				while (reader->Read()) {
					String^ str = reader->GetValue(1)->ToString();
					if (!comboBox2->Items->Contains(str))
						comboBox2->Items->Add(str);
				}
			}
		}
		catch (Exception ^e) {
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			comboBox3->Items->Clear();
			Model = comboBox2->Text;
			try {
				SQLiteConnection^ db = nullptr;
				db = gcnew SQLiteConnection();
				db->ConnectionString = "Data Source=nauto.db3";
				db->Open();
				SQLiteCommand ^cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = "SELECT * FROM NAUTO WHERE MARK=@Mark and MODEL=@Model ";
				cmdSelect->Parameters->AddWithValue("@Mark", Mark);
				cmdSelect->Parameters->AddWithValue("@Model", Model);
				SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				if (reader->HasRows) {
					StringBuilder ^sb = gcnew StringBuilder();
					while (reader->Read()) {
						String^ str = reader->GetValue(2)->ToString();
						if(!comboBox3->Items->Contains(str))
							comboBox3->Items->Add(str);
					}
				}
			}
			catch (Exception ^e) {
				MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
			}
	}

	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Modify = comboBox3->Text;
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		form3->Show();
		this->Hide();
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		try {
			SQLiteConnection^ db = nullptr;
			db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=nauto.db3";
			db->Open();
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = "SELECT MARK FROM NAUTO";
			SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
			if (reader->HasRows) {
				StringBuilder ^sb = gcnew StringBuilder();
				while (reader->Read()) {
					String^ str = reader->GetValue(0)->ToString();
					if (!comboBox1->Items->Contains(str))
						comboBox1->Items->Add(str);
				}
			}
		}
		catch (Exception ^e) {
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
	}

	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		MyForm1^ form2 = gcnew MyForm1;
		form2->pictureBox1->ImageLocation = imgsrc;
		form2->ShowDialog();
	}
};
}