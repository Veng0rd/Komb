#pragma once
#include "EasyNumForm.h"
#include "MiddleNumForm.h"
#include "HardNumForm.h"

namespace Komb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для NumberForm
	/// </summary>
	public ref class NumberForm : public System::Windows::Forms::Form
	{
	public:
		NumberForm(void)
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
		~NumberForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(0, 0);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(178, 23);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Легкий (числа от 0 до 9)";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &NumberForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F));
			this->radioButton2->Location = System::Drawing::Point(0, 29);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(201, 23);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Средний (числа от 10 до 99)";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F));
			this->radioButton3->Location = System::Drawing::Point(0, 58);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(245, 23);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Продвинутый (числа от 100 до 999)";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Location = System::Drawing::Point(50, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(465, 105);
			this->panel1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(104, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Игровая программа \"Угадай число\"";
			this->label1->Click += gcnew System::EventHandler(this, &NumberForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Выберите уровень:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(155, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(252, 62);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NumberForm::button1_Click);
			// 
			// NumberForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 324);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"NumberForm";
			this->Text = L"Игровая программа \"Угадай число\"";
			this->Load += gcnew System::EventHandler(this, &NumberForm::NumberForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NumberForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1 -> Checked)
	{
		EasyNumForm^ EasyForm = gcnew EasyNumForm(); //Открытие окна
		this->Hide();
		EasyForm->ShowDialog();
		this->Show();
	}

	if (radioButton2->Checked)
	{
		MiddleNumForm^ MiddleForm = gcnew MiddleNumForm(); //Открытие окна
		this->Hide();
		MiddleForm->ShowDialog();
		this->Show();
	}	
	
	if (radioButton3->Checked)
	{
		HardNumForm^ HardForm = gcnew HardNumForm(); //Открытие окна
		this->Hide();
		HardForm->ShowDialog();
		this->Show();
	}
	
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
