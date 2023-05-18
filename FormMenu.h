#pragma once
#include "KombForm.h"
#include "NumberForm.h"

namespace Komb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
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
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(186, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(365, 341);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(57, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Об авторе\r\n";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(57, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Игровая прорамма \"Угадай число\"\r\n";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(57, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Решение комбинаторных задач\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormMenu::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(97, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Курсовая работа\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &FormMenu::label1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(57, 266);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(250, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Заставка";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormMenu::button4_Click);
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 431);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(770, 470);
			this->MinimumSize = System::Drawing::Size(770, 470);
			this->Name = L"FormMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню";
			this->Load += gcnew System::EventHandler(this, &FormMenu::FormMenu_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		KombForm^ f1 = gcnew KombForm(); //Открытие программы для комб задач
		this->Hide();
		f1->ShowDialog();
		this->Show();
	}


private: System::Void FormMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	NumberForm^ f3 = gcnew NumberForm(); //Создаем новый экземпляр
	this->Hide();
	f3->ShowDialog();
	this->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
