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
	/// Сводка для HardNumForm
	/// </summary>
	public ref class HardNumForm : public System::Windows::Forms::Form
	{
	public:
		HardNumForm(void)
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
		~HardNumForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(85, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 21);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Введите число:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 15.75F));
			this->label5->Location = System::Drawing::Point(85, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(315, 21);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Уровень: продвинутый (числа от 100 до 999)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(85, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(340, 24);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Игровая программа \"Угадай число\"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(426, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 44);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Подсказка";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &HardNumForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(170, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 40);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Проверить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HardNumForm::button1_Click);
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(220, 120);
			this->input->MaxLength = 3;
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(126, 26);
			this->input->TabIndex = 19;
			this->input->TextChanged += gcnew System::EventHandler(this, &HardNumForm::input_TextChanged);
			this->input->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &HardNumForm::Check_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(180, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 27);
			this->label3->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F));
			this->label1->Location = System::Drawing::Point(50, 230);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 19);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Число попыток:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(438, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 48);
			this->label2->TabIndex = 16;
			// 
			// HardNumForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 301);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->MaximumSize = System::Drawing::Size(540, 340);
			this->MinimumSize = System::Drawing::Size(540, 340);
			this->Name = L"HardNumForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игровая программа \"Угадай число\"";
			this->Load += gcnew System::EventHandler(this, &HardNumForm::HardNumForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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

	private: System::Void Check_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
			e->Handled = true;

		if (static_cast<bool>(Control::ModifierKeys & Keys::Control) && (e->KeyChar == 'V'))
		{
			e->Handled = true;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ random = System::Convert::ToString(this->label2->Text);
	srand((unsigned)time(NULL));
	int randomChar = rand() % 2; // Рандомное число
	MessageBox::Show(this, "В данном число есть число " + random[randomChar], "Подсказка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->button2->Enabled = false;
}
private: System::Void input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->input->TextLength > 0)
		button1->Enabled = true;
	else
		button1->Enabled = false;
}
private: System::Void HardNumForm_Load(System::Object^ sender, System::EventArgs^ e) {
	srand((unsigned)time(NULL));
	int random = rand() % 900 + 100; // Рандомное число
	this->label2->Text = System::Convert::ToString(random);

	int chance = 10;
	this->label3->Text = System::Convert::ToString(chance);
}
};
}
