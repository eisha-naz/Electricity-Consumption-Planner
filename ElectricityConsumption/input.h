
#pragma once

namespace ElectricityConsumption {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; 
	using namespace System::Collections::Generic;







	/// <summary>
	/// Summary for input
	/// </summary>
	public ref class input : public System::Windows::Forms::Form
	{
	public:
		input(void)
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
		~input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ amount1;


	private: System::Windows::Forms::Label^ Month;

	private: System::Windows::Forms::Label^ region1;

	private: System::Windows::Forms::Label^ refNum1;
	private: System::Windows::Forms::TextBox^ amountTB1;


	private: System::Windows::Forms::TextBox^ refNumTB1;
	private: System::Windows::Forms::ComboBox^ monthCB1;
	private: System::Windows::Forms::ComboBox^ regionCB1;
	private: System::Windows::Forms::Button^ save1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ appliance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usage;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Appliance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hours;
	private: System::Windows::Forms::Panel^ SchedulePanel;


	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameP2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ timeP2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ durationP2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ peakP2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costP2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ statusP2;

	private: System::ComponentModel::IContainer^ components;
























	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Appliance = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Hours = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->save1 = (gcnew System::Windows::Forms::Button());
			this->regionCB1 = (gcnew System::Windows::Forms::ComboBox());
			this->monthCB1 = (gcnew System::Windows::Forms::ComboBox());
			this->refNumTB1 = (gcnew System::Windows::Forms::TextBox());
			this->amountTB1 = (gcnew System::Windows::Forms::TextBox());
			this->Month = (gcnew System::Windows::Forms::Label());
			this->region1 = (gcnew System::Windows::Forms::Label());
			this->refNum1 = (gcnew System::Windows::Forms::Label());
			this->amount1 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usage = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SchedulePanel = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->nameP2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->timeP2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->durationP2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->peakP2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costP2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->statusP2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SchedulePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->save1);
			this->groupBox1->Controls->Add(this->regionCB1);
			this->groupBox1->Controls->Add(this->monthCB1);
			this->groupBox1->Controls->Add(this->refNumTB1);
			this->groupBox1->Controls->Add(this->amountTB1);
			this->groupBox1->Controls->Add(this->Month);
			this->groupBox1->Controls->Add(this->region1);
			this->groupBox1->Controls->Add(this->refNum1);
			this->groupBox1->Controls->Add(this->amount1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(37, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1115, 639);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Enter Bill Details";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Appliance,
					this->Hours
			});
			this->dataGridView1->Location = System::Drawing::Point(30, 132);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1069, 419);
			this->dataGridView1->TabIndex = 10;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &input::dataGridView1_CellContentClick);
			this->dataGridView1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &input::dataGridView1_CellValidating);
			this->dataGridView1->DataError += gcnew System::Windows::Forms::DataGridViewDataErrorEventHandler(this, &input::dataGridView1_DataError);
			this->dataGridView1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &input::dataGridView1_KeyPress);
			// 
			// Appliance
			// 
			this->Appliance->HeaderText = L"Appliance";
			this->Appliance->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Fridge", L"Air Conditioner", L"TV", L"Microwave",
					L"Heater", L"Washing Machine", L"Oven", L"Dryer", L"Fan"
			});
			this->Appliance->MinimumWidth = 6;
			this->Appliance->Name = L"Appliance";
			this->Appliance->Width = 125;
			// 
			// Hours
			// 
			this->Hours->HeaderText = L"Hours";
			this->Hours->MinimumWidth = 6;
			this->Hours->Name = L"Hours";
			this->Hours->Width = 125;
			// 
			// save1
			// 
			this->save1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save1->Location = System::Drawing::Point(969, 557);
			this->save1->Name = L"save1";
			this->save1->Size = System::Drawing::Size(112, 49);
			this->save1->TabIndex = 9;
			this->save1->Text = L"save";
			this->save1->UseVisualStyleBackColor = true;
			this->save1->Click += gcnew System::EventHandler(this, &input::save1_Click);
			// 
			// regionCB1
			// 
			this->regionCB1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(6) {
				L"Punjab (LESCO)", L"Sindh (K-Electric)",
					L"Khyber Pakhtunkhwa (PESCO)", L"Balochistan (QESCO)", L"Islamabad (IESCO)", L"AJK & Gilgit-Baltistan"
			});
			this->regionCB1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regionCB1->FormattingEnabled = true;
			this->regionCB1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Punjab (LESCO)", L"Sindh (K-Electric)", L"Khyber Pakhtunkhwa (PESCO)",
					L"Balochistan (QESCO)", L"Islamabad (IESCO)", L"AJK & Gilgit-Baltistan"
			});
			this->regionCB1->Location = System::Drawing::Point(655, 60);
			this->regionCB1->Name = L"regionCB1";
			this->regionCB1->Size = System::Drawing::Size(169, 35);
			this->regionCB1->TabIndex = 0;
			// 
			// monthCB1
			// 
			this->monthCB1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthCB1->FormattingEnabled = true;
			this->monthCB1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"January", L"February", L"March", L"April", L"May",
					L"June", L"July", L"August", L"September", L"October", L"November", L"December"
			});
			this->monthCB1->Location = System::Drawing::Point(927, 60);
			this->monthCB1->Name = L"monthCB1";
			this->monthCB1->Size = System::Drawing::Size(172, 35);
			this->monthCB1->TabIndex = 8;
			// 
			// refNumTB1
			// 
			this->refNumTB1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refNumTB1->Location = System::Drawing::Point(362, 61);
			this->refNumTB1->MaxLength = 12;
			this->refNumTB1->Name = L"refNumTB1";
			this->refNumTB1->Size = System::Drawing::Size(169, 34);
			this->refNumTB1->TabIndex = 6;
			this->refNumTB1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &input::refNumTB1_KeyPress);
			// 
			// amountTB1
			// 
			this->amountTB1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amountTB1->Location = System::Drawing::Point(116, 61);
			this->amountTB1->Name = L"amountTB1";
			this->amountTB1->Size = System::Drawing::Size(169, 34);
			this->amountTB1->TabIndex = 5;
			this->amountTB1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &input::amountTB1_KeyPress);
			// 
			// Month
			// 
			this->Month->AutoSize = true;
			this->Month->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Month->Location = System::Drawing::Point(849, 68);
			this->Month->Name = L"Month";
			this->Month->Size = System::Drawing::Size(80, 27);
			this->Month->TabIndex = 3;
			this->Month->Text = L"Month";
			// 
			// region1
			// 
			this->region1->AutoSize = true;
			this->region1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->region1->Location = System::Drawing::Point(560, 64);
			this->region1->Name = L"region1";
			this->region1->Size = System::Drawing::Size(89, 27);
			this->region1->TabIndex = 2;
			this->region1->Text = L"Region:";
			// 
			// refNum1
			// 
			this->refNum1->AutoSize = true;
			this->refNum1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->refNum1->Location = System::Drawing::Point(291, 64);
			this->refNum1->Name = L"refNum1";
			this->refNum1->Size = System::Drawing::Size(65, 27);
			this->refNum1->TabIndex = 1;
			this->refNum1->Text = L"Ref #";
			// 
			// amount1
			// 
			this->amount1->AutoSize = true;
			this->amount1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount1->Location = System::Drawing::Point(25, 64);
			this->amount1->Name = L"amount1";
			this->amount1->Size = System::Drawing::Size(85, 27);
			this->amount1->TabIndex = 0;
			this->amount1->Text = L"Budget";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Appliances";
			this->Column1->MinimumWidth = 900;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 900;
			// 
			// Usage
			// 
			this->Usage->HeaderText = L"Usage (hrs/day)";
			this->Usage->MinimumWidth = 6;
			this->Usage->Name = L"Usage";
			this->Usage->ReadOnly = true;
			this->Usage->Width = 500;
			// 
			// SchedulePanel
			// 
			this->SchedulePanel->Controls->Add(this->dataGridView2);
			this->SchedulePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SchedulePanel->Location = System::Drawing::Point(0, 0);
			this->SchedulePanel->Name = L"SchedulePanel";
			this->SchedulePanel->Size = System::Drawing::Size(1182, 653);
			this->SchedulePanel->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->nameP2,
					this->timeP2, this->durationP2, this->peakP2, this->costP2, this->statusP2
			});
			this->dataGridView2->Location = System::Drawing::Point(23, 23);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1147, 550);
			this->dataGridView2->TabIndex = 0;
			// 
			// nameP2
			// 
			this->nameP2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->nameP2->HeaderText = L"Appliance Name";
			this->nameP2->MinimumWidth = 6;
			this->nameP2->Name = L"nameP2";
			// 
			// timeP2
			// 
			this->timeP2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->timeP2->HeaderText = L"Time Slot";
			this->timeP2->MinimumWidth = 6;
			this->timeP2->Name = L"timeP2";
			// 
			// durationP2
			// 
			this->durationP2->HeaderText = L"Duration (Hours)";
			this->durationP2->MinimumWidth = 6;
			this->durationP2->Name = L"durationP2";
			this->durationP2->Width = 125;
			// 
			// peakP2
			// 
			this->peakP2->HeaderText = L"Peak/Off-Peak";
			this->peakP2->MinimumWidth = 6;
			this->peakP2->Name = L"peakP2";
			this->peakP2->Width = 125;
			// 
			// costP2
			// 
			this->costP2->HeaderText = L"Cost for Time Slot";
			this->costP2->MinimumWidth = 6;
			this->costP2->Name = L"costP2";
			this->costP2->Width = 125;
			// 
			// statusP2
			// 
			this->statusP2->HeaderText = L"Status";
			this->statusP2->MinimumWidth = 6;
			this->statusP2->Name = L"statusP2";
			this->statusP2->Width = 125;
			// 
			// input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->SchedulePanel);
			this->Controls->Add(this->groupBox1);
			this->Name = L"input";
			this->Text = L"input";
			this->Load += gcnew System::EventHandler(this, &input::input_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->SchedulePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void save1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Get values from input fields
		String^ refNumber = refNumTB1->Text;
		String^ amountStr = amountTB1->Text;
		String^ region = regionCB1->Text;
		String^ month = monthCB1->Text;

		// Validate if required fields are empty or null
		if (String::IsNullOrWhiteSpace(refNumber) ||
			String::IsNullOrWhiteSpace(amountStr) ||
			String::IsNullOrWhiteSpace(region) ||
			String::IsNullOrWhiteSpace(month) ||
			dataGridView1->Rows->Count == 0) {
			MessageBox::Show("Please fill in all fields before saving.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validate appliance and hours fields, excluding the empty last row
		bool dataValid = false;
		String^ appliancesData = ""; // String to store all appliance data
		for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {  // Skip the last row
			// Ensure row is not empty and cells have values
			if (dataGridView1->Rows[i]->Cells["Appliance"]->Value != nullptr && dataGridView1->Rows[i]->Cells["Hours"]->Value != nullptr) {
				String^ appliance = dataGridView1->Rows[i]->Cells["Appliance"]->Value->ToString();
				String^ hoursStr = dataGridView1->Rows[i]->Cells["Hours"]->Value->ToString();

				if (!String::IsNullOrWhiteSpace(appliance) && !String::IsNullOrWhiteSpace(hoursStr)) {
					// Add valid appliance and hours to the string
					appliancesData += appliance + "(" + hoursStr + " hrs), ";
					dataValid = true;
				}
			}
		}

		// If no valid appliance is found
		if (!dataValid) {
			MessageBox::Show("Please enter at least one appliance with valid hours.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Remove trailing comma and space
		if (appliancesData->Length > 0) {
			appliancesData = appliancesData->Substring(0, appliancesData->Length - 2);
		}

		// Convert Amount to double
		double amount;
		try {
			amount = System::Convert::ToDouble(amountStr);
		}
		catch (System::FormatException^) {
			MessageBox::Show("Invalid amount entered. Please enter a valid number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Prepare file path
		String^ filePath = "bills.txt";

		// Writing data to file
		try {
			// Open the file in append mode
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath, true);

			// Write the data in a single line
			writer->WriteLine(refNumber + "," + amount.ToString() + "," + region + "," + month + "," + appliancesData);

			writer->Close();
			MessageBox::Show("Bill saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (System::IO::IOException^ ioEx) {
			MessageBox::Show("Error writing to the file: " + ioEx->Message, "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (System::Exception^ ex) {
		// Catch any unhandled exception
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	SchedulePanel->Visible = true;

}






//...................................................................................
		// ref number validation
private: System::Void refNumTB1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
				e->Handled = true;
			}
		}

			   // bill amount validation
private: System::Void amountTB1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != '.') {
				e->Handled = true;
			}
			if (e->KeyChar == '.' && amountTB1->Text->Contains(".")) {
				e->Handled = true;
			}
		}

private: System::Void input_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SchedulePanel->Visible = false; // Initially hide the panel
	}

		   // Ensure the user selects the appliance first, then enters hours
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	// Check if the changed cell is the Appliance column
	if (this->dataGridView1->Columns[e->ColumnIndex]->Name == "Appliance")
	{
		String^ applianceValue = this->dataGridView1->Rows[e->RowIndex]->Cells["Appliance"]->Value->ToString();

		// If an appliance is selected, enable the "Hours" column
		if (applianceValue != "")
		{
			this->dataGridView1->Rows[e->RowIndex]->Cells["Hours"]->ReadOnly = false;
		}
		else
		{
			// If no appliance is selected, disable the "Hours" column
			this->dataGridView1->Rows[e->RowIndex]->Cells["Hours"]->ReadOnly = true;
		}
	}
}

	   // KeyPress event to restrict input in the "Hours" column
private: System::Void dataGridView1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	int currentColumnIndex = this->dataGridView1->CurrentCell->ColumnIndex;
	String^ columnName = this->dataGridView1->Columns[currentColumnIndex]->Name;

	if (columnName == "Hours") {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)8 && e->KeyChar != '.') {
			e->Handled = true;  // Block non-numeric input, except backspace and decimal
		}

		// Prevent entry of more than one decimal point
		if (e->KeyChar == '.' && this->dataGridView1->CurrentCell->Value->ToString()->Contains(".")) {
			e->Handled = true;  // Block additional decimal points
		}
	}
}

	   // CellValidating event to validate the "Hours" input
private: System::Void dataGridView1_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e)
{
	String^ columnName = this->dataGridView1->Columns[e->ColumnIndex]->Name;
	String^ inputValue = e->FormattedValue->ToString();

	if (columnName == "Hours") {
		try {
			float hours = System::Convert::ToSingle(inputValue);  // Try converting to float
			if (hours < 0 || hours > 24) {
				MessageBox::Show("Hours must be between 0 and 24.", "Invalid Data", MessageBoxButtons::OK, MessageBoxIcon::Error);
				e->Cancel = true;  // Prevent leaving the cell if invalid
			}
		}
		catch (FormatException^) {
			MessageBox::Show("Please enter a valid number for Hours (0-24).", "Invalid Data", MessageBoxButtons::OK, MessageBoxIcon::Error);
			e->Cancel = true;  // Prevent leaving the cell if invalid
		}
	}
}

	   // DataError event to handle any unhandled errors during data entry
private: System::Void dataGridView1_DataError(System::Object^ sender, System::Windows::Forms::DataGridViewDataErrorEventArgs^ e)
{
	String^ columnName = this->dataGridView1->Columns[e->ColumnIndex]->Name;

	if (columnName == "Hours") {
		MessageBox::Show("Please enter a valid number for Hours (0-24).", "Invalid Data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		e->Cancel = true;  // Cancel the default error handling
	}
}
	  

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

};
}

