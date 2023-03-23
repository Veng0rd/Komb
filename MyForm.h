#pragma once

namespace Komb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Panel^ OperationTable;
	private: System::Windows::Forms::RadioButton^ btn_razm;


	private: System::Windows::Forms::RadioButton^ btn_soch;
	private: System::Windows::Forms::RadioButton^ btn_perest;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ n_input;
	private: System::Windows::Forms::TextBox^ m_input;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label_n;

	private: System::Windows::Forms::Label^ label_m;
	private: System::Windows::Forms::Button^ btn_result;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_result;

	private: String^ first_num;
	private: String^ second_num;



	protected:



	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->OperationTable = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_perest = (gcnew System::Windows::Forms::RadioButton());
			this->btn_razm = (gcnew System::Windows::Forms::RadioButton());
			this->btn_soch = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->n_input = (gcnew System::Windows::Forms::TextBox());
			this->m_input = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_m = (gcnew System::Windows::Forms::Label());
			this->label_n = (gcnew System::Windows::Forms::Label());
			this->btn_result = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->OperationTable->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.Image")));
			this->btn_close->Location = System::Drawing::Point(450, 0);
			this->btn_close->Margin = System::Windows::Forms::Padding(0);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(50, 50);
			this->btn_close->TabIndex = 0;
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::btn_close_Click);
			// 
			// OperationTable
			// 
			this->OperationTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->OperationTable->Controls->Add(this->label1);
			this->OperationTable->Controls->Add(this->btn_perest);
			this->OperationTable->Controls->Add(this->btn_razm);
			this->OperationTable->Controls->Add(this->btn_soch);
			this->OperationTable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OperationTable->Location = System::Drawing::Point(0, 80);
			this->OperationTable->Margin = System::Windows::Forms::Padding(0);
			this->OperationTable->Name = L"OperationTable";
			this->OperationTable->Padding = System::Windows::Forms::Padding(5);
			this->OperationTable->Size = System::Drawing::Size(500, 80);
			this->OperationTable->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 14);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(3);
			this->label1->Size = System::Drawing::Size(174, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"�������� ��������:";
			// 
			// btn_perest
			// 
			this->btn_perest->AutoSize = true;
			this->btn_perest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_perest->Location = System::Drawing::Point(323, 43);
			this->btn_perest->Margin = System::Windows::Forms::Padding(30);
			this->btn_perest->Name = L"btn_perest";
			this->btn_perest->Padding = System::Windows::Forms::Padding(3);
			this->btn_perest->Size = System::Drawing::Size(142, 30);
			this->btn_perest->TabIndex = 2;
			this->btn_perest->Text = L"������������";
			this->btn_perest->UseVisualStyleBackColor = true;
			this->btn_perest->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btn_CheckedChanged);
			// 
			// btn_razm
			// 
			this->btn_razm->AutoSize = true;
			this->btn_razm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_razm->Location = System::Drawing::Point(169, 43);
			this->btn_razm->Margin = System::Windows::Forms::Padding(30);
			this->btn_razm->Name = L"btn_razm";
			this->btn_razm->Padding = System::Windows::Forms::Padding(3);
			this->btn_razm->Size = System::Drawing::Size(129, 30);
			this->btn_razm->TabIndex = 1;
			this->btn_razm->Text = L"����������";
			this->btn_razm->UseVisualStyleBackColor = true;
			this->btn_razm->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btn_CheckedChanged);
			// 
			// btn_soch
			// 
			this->btn_soch->AutoSize = true;
			this->btn_soch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_soch->Location = System::Drawing::Point(24, 43);
			this->btn_soch->Margin = System::Windows::Forms::Padding(30);
			this->btn_soch->Name = L"btn_soch";
			this->btn_soch->Padding = System::Windows::Forms::Padding(3);
			this->btn_soch->Size = System::Drawing::Size(116, 30);
			this->btn_soch->TabIndex = 0;
			this->btn_soch->Text = L"���������";
			this->btn_soch->UseVisualStyleBackColor = true;
			this->btn_soch->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btn_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(100, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(295, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"������� ������������� �����";
			// 
			// n_input
			// 
			this->n_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->n_input->Location = System::Drawing::Point(77, 23);
			this->n_input->Name = L"n_input";
			this->n_input->Size = System::Drawing::Size(126, 26);
			this->n_input->TabIndex = 3;
			this->n_input->TextChanged += gcnew System::EventHandler(this, &MyForm::n_input_TextChanged);
			this->n_input->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Check_KeyPress);
			// 
			// m_input
			// 
			this->m_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m_input->Location = System::Drawing::Point(323, 23);
			this->m_input->Name = L"m_input";
			this->m_input->Size = System::Drawing::Size(126, 26);
			this->m_input->TabIndex = 4;
			this->m_input->TextChanged += gcnew System::EventHandler(this, &MyForm::m_input_TextChanged);
			this->m_input->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Check_KeyPress);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label_m);
			this->panel1->Controls->Add(this->label_n);
			this->panel1->Controls->Add(this->n_input);
			this->panel1->Controls->Add(this->m_input);
			this->panel1->Location = System::Drawing::Point(0, 163);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 70);
			this->panel1->TabIndex = 5;
			// 
			// label_m
			// 
			this->label_m->AutoSize = true;
			this->label_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_m->Location = System::Drawing::Point(275, 25);
			this->label_m->Name = L"label_m";
			this->label_m->Size = System::Drawing::Size(42, 24);
			this->label_m->TabIndex = 6;
			this->label_m->Text = L"m =";
			// 
			// label_n
			// 
			this->label_n->AutoSize = true;
			this->label_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_n->Location = System::Drawing::Point(34, 25);
			this->label_n->Name = L"label_n";
			this->label_n->Size = System::Drawing::Size(37, 24);
			this->label_n->TabIndex = 5;
			this->label_n->Text = L"n =";
			// 
			// btn_result
			// 
			this->btn_result->Enabled = false;
			this->btn_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_result->Location = System::Drawing::Point(191, 239);
			this->btn_result->Name = L"btn_result";
			this->btn_result->Size = System::Drawing::Size(126, 32);
			this->btn_result->TabIndex = 6;
			this->btn_result->Text = L"���������";
			this->btn_result->UseVisualStyleBackColor = true;
			this->btn_result->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(34, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"�����:";
			// 
			// label_result
			// 
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->Location = System::Drawing::Point(112, 296);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(341, 21);
			this->label_result->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(500, 350);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_result);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->OperationTable);
			this->Controls->Add(this->btn_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(500, 350);
			this->MinimumSize = System::Drawing::Size(500, 350);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->OperationTable->ResumeLayout(false);
			this->OperationTable->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}



	private: System::Void Check_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
			e->Handled = true;
	}


	private: System::Void n_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		enable_btn_res();
	}

	private: System::Void m_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		enable_btn_res();
	}

	private: System::Void enable_btn_res() {

		if (this->btn_perest->Checked) // ���� ��� �����������, ������ ���� �����������
		{
			m_input->Enabled = false;
			m_input->Visible = false;
			label_m->Visible = false;
		}
		else
		{
			m_input->Enabled = true;
			m_input->Visible = true;
			label_m->Visible = true;
		}

		if (this->btn_perest->Checked == false) // �������� ���� ������� �������� � ������� �����, �� ������ �������, ����� ���
		{
			if (this->n_input->Text != "" && this->m_input->Text != "" && (this->btn_razm->Checked == true || this->btn_soch->Checked == true))
			{
				this->btn_result->Enabled = true;
			}
			else
			{
				this->btn_result->Enabled = false;
			}
		}
		else
		{
			if (this->n_input->Text != "" && this->btn_perest->Checked == true)
			{
				this->btn_result->Enabled = true;
			}
			else
			{
				this->btn_result->Enabled = false;
			}
		}
		
	}

	private: System::Void made_result() { // ������� �� ������
		double first_num = System::Convert::ToDouble(this->n_input->Text);
		double result;
		if (btn_perest->Checked == true)
		{
			result = fact(first_num);
			if (result <= 0)
				MessageBox::Show(this, "������� ������� �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				this->label_result->Text = System::Convert::ToString(result);
			
		}
		else {
			double second_num = System::Convert::ToDouble(this->m_input->Text);
			if (second_num > first_num)
				MessageBox::Show(this, "����� n ������ ���� ������ ��� ����� ����� m", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else if (first_num == 0 || second_num == 0)
				MessageBox::Show(this, "���� �� ����� ����� 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else {
				if (btn_soch->Checked == true) {
					made_soch(first_num, second_num, &result);
					this->label_result->Text = System::Convert::ToString(result);
				}
				else
				{
					made_razm(first_num, second_num, &result);
					this->label_result->Text = System::Convert::ToString(result);
				}
			}

			
		}
	}

	private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e) {
		made_result();
	} 

	private: System::Int64 fact(double num) {
		double res_fact = 1;
		for (double i = 1; i <= num; i++)
		{
			res_fact *= i;
		}
		return res_fact;
	}

	private: System::Void btn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		enable_btn_res();
	}

	private: System::Void made_soch(double first_num, double second_num, double*res) {
		if (fact(first_num) <= 0 || (fact(second_num) * fact(first_num - second_num)) <= 0)
			MessageBox::Show(this, "������� ������� �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			*res = fact(first_num) / (fact(second_num) * fact(first_num - second_num));
	}

	private: System::Void made_razm(double first_num, double second_num, double* res) {
		if (fact(first_num - second_num) <= 0 || fact(first_num) <= 0)
			MessageBox::Show(this, "������� ������� �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			*res = fact(first_num) / fact(first_num - second_num);
		
	}
};
}
