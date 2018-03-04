#pragma once

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
	/// Сводка для Service_r
	/// </summary>
	public ref class Service_r : public System::Windows::Forms::Form
	{
	public:
		String ^ Mark;
		String ^ Model;
		String ^ Year;
		String ^ Temp;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	public:
		String ^ Mileage;
		Service_r(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Service_r()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Service_r::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(11, 79);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(163, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"Марка";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Service_r::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(11, 106);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(163, 21);
			this->comboBox2->TabIndex = 37;
			this->comboBox2->Text = L"Модель";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Service_r::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"2000", L"2001", L"2002", L"2003", L"2004", L"2005",
					L"2006", L"2007", L"2008", L"2009", L"2010", L"2011", L"2012", L"2013", L"2014", L"2015", L"2016", L"2017"
			});
			this->comboBox3->Location = System::Drawing::Point(11, 133);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(163, 21);
			this->comboBox3->TabIndex = 38;
			this->comboBox3->Text = L"Год";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Service_r::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"0 km - 15000 km", L"15000 km - 30000 km", L"30000 km - 45000 km",
					L"45000 km - 60000 km", L"60000 km - 75000 km", L"75000 km - 90000 km", L"90000 km - 105000 km", L"105000 km - 120000 km", L"120000 km - 135000 km",
					L"135000 km - 150000 km", L"150000 km - 165000 km", L"165000 km - 180000 km", L"180000 km - 195000 km", L"195000 km +"
			});
			this->comboBox4->Location = System::Drawing::Point(11, 160);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(163, 21);
			this->comboBox4->TabIndex = 39;
			this->comboBox4->Text = L"Пробег";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Service_r::comboBox4_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(11, 197);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 40;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Service_r::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(662, 478);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 32);
			this->button2->TabIndex = 41;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Service_r::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(549, 478);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 32);
			this->button3->TabIndex = 43;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Service_r::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(11, 496);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 14);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Created by Vitalii Kolomiichuk - INTITA 2018";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(192, 79);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(569, 382);
			this->richTextBox1->TabIndex = 45;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// Service_r
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(773, 519);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Service_r";
			this->Text = L"MOCM";
			this->Load += gcnew System::EventHandler(this, &Service_r::Service_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Mileage == "Standart") 
		{
			richTextBox1->Visible = true;
			richTextBox1->Text = "Пробег более 195000 км \r\n" + 
				"Стандартное ТО для автомобилей всех марок:\r\n" + 
				"- Диагностика ходовой\r\n" +
				"- Компьютерная диагностика\r\n" +
				"- Замена моторного масла\r\n" +
				"- Замена масляного фильтра\r\n" +
				"- Замена салонного фильтра\r\n" +
				"- Замена воздушного фильтра\r\n" +
				"- Осмотр и замена тормозных колодок (при необходимости)\r\n" +
				"- Замена топливного фильтра (при необходимости)\r\n" +
				"- Замена тормозной жидкости (при необходимости)\r\n" +
				"- Проверка уровня охлаждающей жидкости и замена (при необходимости)\r\n" +
				"- Осмотр и замена навесного ремня (при необходимости)\r\n" +
				"- Осмотр и замена ремня / цепи ГРМ (при необходимости)\r\n";
		}
		else
		{
			try {
				SQLiteConnection^ db = nullptr;
				db = gcnew SQLiteConnection();
				db->ConnectionString = "Data Source=service.db3";
				db->Open();
				SQLiteCommand ^cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = "SELECT * FROM SERVICE WHERE MARK=@Mark and MODEL=@Model and (@Year BETWEEN YEAR_S and YEAR_E) and MILEAGE=@Mileage";
				cmdSelect->Parameters->AddWithValue("@Mark", Mark);
				cmdSelect->Parameters->AddWithValue("@Model", Model);
				cmdSelect->Parameters->AddWithValue("@Year", Year);
				cmdSelect->Parameters->AddWithValue("@Mileage", Mileage);
				SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				if (reader->HasRows) {
					richTextBox1->Visible = true;
					StringBuilder ^sb = gcnew StringBuilder();
					while (reader->Read()) {
						sb->Append("Следующее ТО на " + Mileage + " км: \r\n");
						sb->Append(reader->GetString(5)->ToString());
						sb->AppendLine();
					}
					richTextBox1->Text = sb->ToString();	
				}
				else
				{
					richTextBox1->Visible = true;
					richTextBox1->Text = "Автомобиля такого года не существует или он устарел и подпадает под стандартное ТО для автомобилей всех марок:\r\n" + 
						"- Диагностика ходовой\r\n" + 
						"- Компьютерная диагностика\r\n" + 
						"- Замена моторного масла\r\n" + 
						"- Замена масляного фильтра\r\n" + 
						"- Замена салонного фильтра\r\n" + 
						"- Замена воздушного фильтра\r\n" + 
						"- Осмотр и замена тормозных колодок (при необходимости)\r\n" +
						"- Замена топливного фильтра (при необходимости)\r\n" + 
						"- Замена тормозной жидкости (при необходимости)\r\n" + 
						"- Проверка уровня охлаждающей жидкости и замена (при необходимости)\r\n" +
						"- Осмотр и замена навесного ремня (при необходимости)\r\n" + 
						"- Осмотр и замена ремня / цепи ГРМ (при необходимости)\r\n";
				}
			}
			catch (Exception ^e) {
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
			}
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Mark = comboBox1->Text;
		comboBox2->Items->Clear();
		try {
			SQLiteConnection^ db = nullptr;
			db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=service.db3";
			db->Open();
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = "SELECT * FROM SERVICE WHERE MARK=@Mark";
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
		Model = comboBox2->Text;
	}

	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Year = comboBox3->Text;
	}

	private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox4->Text == "0 km - 15000 km") Mileage = "15000";
		if (comboBox4->Text == "15000 km - 30000 km") Mileage = "30000";
		if (comboBox4->Text == "30000 km - 45000 km") Mileage = "45000";
		if (comboBox4->Text == "45000 km - 60000 km") Mileage = "60000";
		if (comboBox4->Text == "60000 km - 75000 km") Mileage = "75000";
		if (comboBox4->Text == "75000 km - 90000 km") Mileage = "90000";
		if (comboBox4->Text == "90000 km - 105000 km") Mileage = "105000";
		if (comboBox4->Text == "105000 km - 120000 km") Mileage = "120000";
		if (comboBox4->Text == "120000 km - 135000 km") Mileage = "135000";
		if (comboBox4->Text == "135000 km - 150000 km") Mileage = "150000";
		if (comboBox4->Text == "150000 km - 165000 km") Mileage = "165000";
		if (comboBox4->Text == "165000 km - 180000 km") Mileage = "180000";
		if (comboBox4->Text == "180000 km - 195000 km") Mileage = "195000";
		if (comboBox4->Text == "195000 km +") Mileage = "Standart";
	}

	private: System::Void Service_Load(System::Object^  sender, System::EventArgs^  e) {
		try {
			SQLiteConnection^ db = nullptr;
			db = gcnew SQLiteConnection();
			db->ConnectionString = "Data Source=service.db3";
			db->Open();
			SQLiteCommand ^cmdSelect = db->CreateCommand();
			cmdSelect->CommandText = "SELECT MARK FROM SERVICE";
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

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ form = this->Owner;
		form->Show();
		this->Hide();
	}
};
}