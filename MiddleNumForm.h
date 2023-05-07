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
	/// Сводка для MiddleNumForm
	/// </summary>
	public ref class MiddleNumForm : public System::Windows::Forms::Form
	{
	public:
		MiddleNumForm(void)
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
		~MiddleNumForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;

	protected:







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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(264, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Проверить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MiddleNumForm::button1_Click);
			// 
			// input
			// 
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(442, 211);
			this->input->MaxLength = 2;
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(126, 26);
			this->input->TabIndex = 10;
			this->input->TextChanged += gcnew System::EventHandler(this, &MiddleNumForm::enable_btn);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(287, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 27);
			this->label3->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F));
			this->label1->Location = System::Drawing::Point(154, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Число попыток:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(359, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 48);
			this->label2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(581, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 44);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Подсказка";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MiddleNumForm::button2_Click);
			// 
			// MiddleNumForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 408);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"MiddleNumForm";
			this->Text = L"MiddleNumForm";
			this->Load += gcnew System::EventHandler(this, &MiddleNumForm::MiddleNumForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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

	private: System::Void MiddleNumForm_Load(System::Object^ sender, System::EventArgs^ e) {
		srand((unsigned)time(NULL));
		int random = rand() % 90 + 10; // Рандомное число
		this->label2->Text = System::Convert::ToString(random);

		int chance = 5;
		this->label3->Text = System::Convert::ToString(chance);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ random = System::Convert::ToString(this->label2->Text);
		srand((unsigned)time(NULL));
		int randomChar = rand() % 2; // Рандомное число
		MessageBox::Show(this, "В данном число есть число " + random[randomChar], "Вы проиграли", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
