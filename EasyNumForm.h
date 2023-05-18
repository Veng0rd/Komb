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
	/// Сводка для EasyNumForm
	/// </summary>
	public ref class EasyNumForm : public System::Windows::Forms::Form
	{
	public:
		EasyNumForm(void)
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(490, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 48);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &EasyNumForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F));
			this->label1->Location = System::Drawing::Point(50, 230);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Число попыток:";
			this->label1->Click += gcnew System::EventHandler(this, &EasyNumForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(180, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 27);
			this->label3->TabIndex = 3;
			this->label3->Click += gcnew System::EventHandler(this, &EasyNumForm::button1_Click);
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(220, 120);
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
			this->button1->Location = System::Drawing::Point(170, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Проверить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EasyNumForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(85, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(340, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Игровая программа \"Угадай число\"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 15.75F));
			this->label5->Location = System::Drawing::Point(85, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Уровень: легкий (числа от 0 до 9)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(85, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 21);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Введите число:";
			// 
			// EasyNumForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 301);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->MaximumSize = System::Drawing::Size(540, 340);
			this->MinimumSize = System::Drawing::Size(540, 340);
			this->Name = L"EasyNumForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игровая программа \"Угадай число\"";
			this->Load += gcnew System::EventHandler(this, &EasyNumForm::EasyNumForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EasyNumForm_Load(System::Object^ sender, System::EventArgs^ e) {
		srand((unsigned) time(NULL));
		int random = rand() % 10; // Рандомное число
		this->label2->Text = System::Convert::ToString(random);

		int chance = 4;
		this->label3->Text = System::Convert::ToString(chance);
	}

	private: System::Void Check_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
			e->Handled = true;

		if (static_cast<bool>(Control::ModifierKeys & Keys::Control) && (e->KeyChar == 'V'))
		{
			e->Handled = true;
		}
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
			MessageBox::Show(this, "Вы выиграли!", "Вы выиграли!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		else
		{
			if (num < random)
			{
				this->label3->Text = System::Convert::ToString(chance - 1);
				if (chance > 1)
					MessageBox::Show(this, "Введенное число меньше загаданного числа", "Неправильный ответ!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			if (num > random)
			{
				this->label3->Text = System::Convert::ToString(chance - 1);
				if (chance > 1)
					MessageBox::Show(this, "Введенное число больше загаданного числа", "Неправильный ответ!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			if (chance == 1)
			{
				MessageBox::Show(this, "Вы проиграли!\nЗагаданное число - " + random, "Вы проиграли", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
		}

	}

};
}
