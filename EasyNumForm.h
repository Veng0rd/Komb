#pragma once
#include<cstdlib>
#include <time.h>

namespace Komb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� EasyNumForm
	/// </summary>
	public ref class EasyNumForm : public System::Windows::Forms::Form
	{
	public:
		EasyNumForm(void)
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
		~EasyNumForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ input;

	private: System::Windows::Forms::Button^ button1;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(257, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 48);
			this->label2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F));
			this->label1->Location = System::Drawing::Point(52, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"����� �������:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(185, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 27);
			this->label3->TabIndex = 3;
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(340, 162);
			this->input->MaxLength = 1;
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(126, 26);
			this->input->TabIndex = 5;
			this->input->TextChanged += gcnew System::EventHandler(this, &EasyNumForm::enable_btn);
			this->input->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EasyNumForm::Check_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(162, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EasyNumForm::button1_Click);
			// 
			// EasyNumForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 299);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"EasyNumForm";
			this->Text = L"EasyNumForm";
			this->Load += gcnew System::EventHandler(this, &EasyNumForm::EasyNumForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EasyNumForm_Load(System::Object^ sender, System::EventArgs^ e) {
		srand((unsigned) time(NULL));
		int random = rand() % 10; // ��������� �����
		this->label2->Text = System::Convert::ToString(random);

		int chance = 5;
		this->label3->Text = System::Convert::ToString(chance);
	}

		private: System::Void Check_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
				e->Handled = true;
		}
	private: System::Void enable_btn(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->TextLength > 0)
			button1->Enabled = true;
		else
			button1->Enabled = false;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = System::Convert::ToInt32(this->input->Text);
		int random = System::Convert::ToInt32(this->label2->Text);
		int chance = System::Convert::ToInt32(this->label3->Text);

		if (num == random)
		{
			MessageBox::Show(this, "�� ��������!", "�� ��������!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		else
		{
			if (num < random)
			{
				this->label3->Text = System::Convert::ToString(chance - 1);
				if (chance > 1)
					MessageBox::Show(this, "��������� ����� ������ ����������� �����", "������������ �����!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			if (num > random)
			{
				this->label3->Text = System::Convert::ToString(chance - 1);
				if (chance > 1)
					MessageBox::Show(this, "��������� ����� ������ ����������� �����", "������������ �����!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			if (chance == 1)
			{
				MessageBox::Show(this, "�� ���������!\n���������� ����� - " + random, "�� ���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

	}
};
}
